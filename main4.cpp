
#include <iostream>
#include <exception>

using namespace std;

// Exception pour montant invalide
class MontantInvalideException : public exception {
public:
    const char* what() const noexcept override {
        return "Erreur : le montant doit etre positif !";
    }
};

// Exception pour solde insuffisant
class SoldeInsuffisantException : public exception {
public:
    const char* what() const noexcept override {
        return "Erreur : solde insuffisant pour effectuer le retrait !";
    }
};

// Classe Compte
class Compte {
private:
    int solde;

public:
    Compte(int s) {
        solde = s;
    }

    void deposer(int montant) {
        if (montant <= 0) {
            throw MontantInvalideException();
        }

        solde += montant;

        cout << "Depot effectue avec succes : "
             << montant << " DH" << endl;
    }

    void retirer(int montant) {
        if (montant <= 0) {
            throw MontantInvalideException();
        }

        if (montant > solde) {
            throw SoldeInsuffisantException();
        }

        solde -= montant;

        cout << "Retrait effectue avec succes : "
             << montant << " DH" << endl;
    }

    void afficherSolde() const {
        cout << "Solde actuel : " << solde << " DH" << endl;
    }
};

int main() {
    Compte c1(1000);

    c1.afficherSolde();

    // Test du depot
    try {
        cout << "\n--- Depot ---" << endl;
        c1.deposer(500);
        c1.deposer(-100);
    }
    catch (const MontantInvalideException& e) {
        cout << e.what() << endl;
    }

    // Test du retrait
    try {
        cout << "\n--- Retrait ---" << endl;
        c1.retirer(300);
        c1.retirer(2000);
    }
    catch (const MontantInvalideException& e) {
        cout << e.what() << endl;
    }
    catch (const SoldeInsuffisantException& e) {
        cout << e.what() << endl;
    }

    cout << "\n--- Solde final ---" << endl;
    c1.afficherSolde();

    return 0;
}

