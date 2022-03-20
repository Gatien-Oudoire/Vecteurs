#ifndef VECTEUR_H_
#define VECTEUR_H_

#include <stdlib.h>
#include <stdio.h>

typedef struct Vecteur Vecteur;

struct Vecteur {
    int * p;
    long dernier_indice;
    unsigned long taille;
};

Vecteur nouveau_vecteur(unsigned long t);
int ajouter_entier(Vecteur * v, int a);
int acceder_entier(Vecteur * v, unsigned long indice);

#endif // VECTEUR_H_
