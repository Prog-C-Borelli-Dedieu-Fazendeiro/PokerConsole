#include <stdio.h>
#include <stdlib.h>
#include "cartes.h"

Carte* CreerCarte(int v, Couleur c){
    Carte * carte= (Carte *)malloc(sizeof(Carte));
    carte->cCouleur=c;
    carte->iValeur=v;
    return carte;
}

void supprimerCarte(Carte * carte){
    free(carte);
}

void afficherCarte (Carte * carte){
    printf("Couleur : %s",carte->cCouleur);
    printf("Valeur : %d",carte->iValeur);
}

