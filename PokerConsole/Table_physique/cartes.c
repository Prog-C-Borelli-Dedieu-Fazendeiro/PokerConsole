#include <stdio.h>
#include <stdlib.h>
#include "cartes.h"

Carte CreerCarte(int v, Couleur c){
    Carte * carte= (Carte *)malloc(sizeof(Carte));
    carte->cCouleur=c;
    carte->iValeur=v;
    return * carte;
}

void supprimerCarte(Carte * carte){
    free(carte);
}

void CreerCarteSimple(Carte * kCarte, int v, Couleur c) {
    kCarte->iValeur=v;
    kCarte->cCouleur=c;
}

