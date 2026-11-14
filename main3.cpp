
#include <iostream>
#include <stdexcept>
#include <string>

using namespace std;

// Exception personnalisee
class StockInsuffisantException : public exception {
public:
    const char* what() const noexcept override {
        return "Erreur : stock insuffisant pour effectuer cette vente !";
    }
};

// Classe Produit
class Produit {
private:
    string nom;
    int stock;

public:
    Produit(string n, int s) {
        nom = n;
        stock = s;
    }

    void vendre(int quantite) {
        if (quantite <= 0) {
            throw invalid_argument("La quantite doit etre positive !");
        }

        if (quantite > stock) {
            throw StockInsuffisantException();
        }

        stock -= quantite;

        cout << "Vente effectuee avec succes !" << endl;
        cout << "Quantite vendue : " << quantite << endl;
        cout << "Stock restant : " << stock << endl;
    }

    void afficherStock() const {
        cout << "Stock actuel de " << nom << " : "
             << stock << endl;
    }
};

int main() {
    Produit p1("Ordinateur", 10);

    p1.afficherStock();

    try {
        cout << "\n--- Premiere vente ---" << endl;
        p1.vendre(3);

        cout << "\n--- Deuxieme vente ---" << endl;
        p1.vendre(15);
    }
    catch (const StockInsuffisantException& e) {
        cout << e.what() << endl;
    }
    catch (const exception& e) {
        cout << e.what() << endl;
    }

    cout << "\nFin du programme." << endl;

    return 0;
}



