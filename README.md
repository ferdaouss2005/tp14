# tp14
EXERCICE1



<img width="386" height="148" alt="image" src="https://github.com/user-attachments/assets/2684df71-03a1-4813-b2ac-3a04a306c0d4" />

Dans cet exercice, j’ai créé une fonction `diviser(int a, int b)` qui effectue une division entre deux entiers. J’ai utilisé `throw` pour lever une exception de type `runtime_error` lorsque le diviseur est égal à zéro. Dans la fonction `main()`, j’ai utilisé un bloc `try-catch` pour intercepter l’exception et afficher un message d’erreur explicite avec `what()`. J’ai également testé plusieurs cas de division pour vérifier le fonctionnement du programme.

EXERCICE2

<img width="431" height="311" alt="image" src="https://github.com/user-attachments/assets/dcd4e03e-4415-4a5b-afd6-3a90866df924" />

Dans cet exercice, j’ai créé une classe `Produit` contenant un nom et un stock initial. J’ai ajouté la méthode `vendre(int quantite)` qui permet de diminuer le stock après chaque vente. J’ai également créé une exception personnalisée `StockInsuffisantException` qui hérite de la classe `exception` et redéfinit la méthode `what()` pour retourner un message d’erreur. Lorsque la quantité demandée dépasse le stock disponible, une exception est déclenchée avec `throw` puis capturée dans `main()` à l’aide de `try-catch`. J’ai testé une vente réussie et une vente avec un stock insuffisant.

EXERCICE3

<img width="422" height="274" alt="image" src="https://github.com/user-attachments/assets/c92ca3ca-d406-4f88-b135-63c1ca9e54bf" />


Dans cet exercice, j’ai créé une classe `Produit` contenant un nom et un stock initial. J’ai ajouté la méthode `vendre(int quantite)` qui permet de diminuer le stock après chaque vente. J’ai également créé une exception personnalisée `StockInsuffisantException` qui hérite de la classe `exception` et redéfinit la méthode `what()` pour retourner un message d’erreur. Lorsque la quantité demandée dépasse le stock disponible, une exception est déclenchée avec `throw` puis capturée dans `main()` à l’aide de `try-catch`. J’ai testé une vente réussie et une vente avec un stock insuffisant.

EXERCICE 4

<img width="442" height="281" alt="image" src="https://github.com/user-attachments/assets/ac4d75b7-ed0e-4695-a4ef-15e8f784e9c0" />


Dans cet exercice, j’ai créé une classe `Compte` contenant un attribut solde et deux méthodes `deposer(int)` et `retirer(int)`. J’ai défini deux exceptions personnalisées : `MontantInvalideException` pour les montants négatifs ou nuls et `SoldeInsuffisantException` lorsque le montant du retrait dépasse le solde disponible. J’ai utilisé `throw` pour déclencher les exceptions et plusieurs blocs `try-catch` dans la fonction `main()` pour gérer les différentes erreurs. Enfin, j’ai testé plusieurs opérations bancaires et affiché le solde final du compte.

EXERCICE2

