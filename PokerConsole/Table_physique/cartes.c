#include <stdio.h>
#include <stdlib.h>
#include "cartes.h"

 CreerCarte(Carte * carte,int v, Couleur c){
    carte->cCouleur=c;
    carte->iValeur=v;
}

void supprimerCarte(Carte * carte){
    free(carte);
}

void afficherCarte (Carte * carte){
    printf("\n\n Couleur : %s",carte->cCouleur);
    printf("\n Valeur : %d",carte->iValeur);
}

