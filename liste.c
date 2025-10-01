#include "liste.h"

Element* inserTrie(Element* tete, int val) {
    Element* nouv = malloc(sizeof(Element));
    nouv->val = val;
    if (!tete || val < tete->val) {
        nouv->suivant = tete;
        nouv->precedent = NULL;
        if (tete) tete->precedent = nouv;
        return nouv;
    }
    Element* tmp = tete;
    while (tmp->suivant && tmp->suivant->val < val) tmp = tmp->suivant;
    nouv->suivant = tmp->suivant;
    if (tmp->suivant) tmp->suivant->precedent = nouv;
    tmp->suivant = nouv;
    nouv->precedent = tmp;
    return tete;
}

void afficherListe(Element* tete) {
    while (tete) {
        printf("%d <-> ", tete->val);
        tete = tete->suivant;
    }
    printf("NULL\n");
}