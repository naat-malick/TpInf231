#include "liste.h"

int main() {
    Element* liste = NULL;
    int n, val;

    printf("Combien de valeurs voulez-vous entrer dans la liste triée ? ");
    scanf("%d", &n);

    printf("Entrez %d valeurs (dans n'importe quel ordre, elles seront insérées triées) :\n", n);
    for (int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);
        liste = inserTrie(liste, x);
    }

    printf("Liste doublement chaînée triée initiale : ");
    afficherListe(liste);

    printf("\nEntrez une valeur à insérer dans la liste triée : ");
    scanf("%d", &val);

    liste = inserTrie(liste, val);

    printf("Liste après insertion : ");
    afficherListe(liste);

    return 0;
}