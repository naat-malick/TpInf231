# TpInf231
===================================================
 PROJET : Insertion dans une Liste Doublement Chaînée Triée
===================================================

DESCRIPTION :
-------------
Ce projet illustre l’utilisation d’une liste doublement chaînée triée.
L’utilisateur saisit un ensemble de valeurs (dans n’importe quel ordre),
qui sont insérées dans la liste de manière triée. Ensuite, il peut insérer
une nouvelle valeur et la liste reste triée.

---------------------------------------------------
STRUCTURE DU PROJET :
---------------------------------------------------
projet_liste_double/
│
├── liste.h     : Contient la définition de la structure ElementD et les prototypes
├── liste.c     : Contient l’implémentation des fonctions (insertion triée et affichage)
└── main3.c     : Programme principal (main)

---------------------------------------------------
FONCTIONS PRINCIPALES :
---------------------------------------------------
1. inserTrie(Element* tete, int val)
   - Insère un nouvel élément dans la liste de façon triée.

2. afficherListe(Element* tete)
   - Affiche la liste doublement chaînée du début jusqu’à la fin.

---------------------------------------------------
COMPILATION :
---------------------------------------------------
Utiliser la commande suivante pour compiler :

    gcc main3.c liste.c -o main3

---------------------------------------------------
EXECUTION :
---------------------------------------------------
Exemple d’exécution :

    Combien de valeurs voulez-vous entrer dans la liste triée ? 4
    Entrez 4 valeurs (dans n'importe quel ordre, elles seront insérées triées) :
    7 2 9 5

    Liste doublement chaînée triée initiale : 2 <-> 5 <-> 7 <-> 9 <-> NULL

    Entrez une valeur à insérer : 6
    Liste après insertion : 2 <-> 5 <-> 6 <-> 7 <-> 9 <-> NULL

---------------------------------------------------
AUTEUR : Abdel Ngando 
---------------------------------------------------
Projet basé sur l’exercice 3 (Insertion dans une liste doublement chaînée triée).

===================================================
