#include "vecteur.h"

Vecteur nouveau_vecteur(unsigned long t) {
    Vecteur res;
    res.p = calloc(t, sizeof(int));
    res.dernier_indice = -1;
    res.taille = t;
    return res;
}

int ajouter_entier(Vecteur * v, int a)
{
    if ( v->dernier_indice == (long) v->taille - 1)
        v->p = realloc(v->p, v->taille * 2);

    v->p[v->dernier_indice + 1] = a;
    v->dernier_indice++;
    return 0;
}

int acceder_entier(Vecteur * v, unsigned long indice)
{
    return v->p[indice];
}
