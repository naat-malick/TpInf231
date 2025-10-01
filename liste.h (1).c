#ifndef LISTE_H
#define LISTE_H

#include <stdio.h>
#include <stdlib.h>

typedef struct Element {
    int val;
    struct Element *suivant;
    struct Element *precedent;
} Element;

Element* inserTrie(Element* tete, int val);
void afficherListe(Element* tete);

#endif 