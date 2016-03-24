#include <stdio.h>
#include <stdlib.h>
#include "Joueur.h"


/*** author : Geoffrey BORELLI ***/


Joueur creation_joueur (char sPseudoParam, int iCapitalParam){
    Joueur j;
    j.iCapital=iCapitalParam;
    j.iEtat=1;
    for (int i=0; i<1; i++) {
       j.kPossession[i].cCouleur=-1;
       j.kPossession[i].iValeur=0;
    }

}

void changement_etat_joueur(Joueur j){
    if (j.iEtat==1) {
        j.iEtat=0;
    }
    else {
        j.iEtat=1;
    }
}

int mise_joueur (Joueur j, int mise) {
    int autorisation;
    if (mise<=j.iCapital){
        autorisation=1;
        j.iCapital=j.iCapital-mise;
    }
    else {
        autorisation=0;
    }
    return autorisation;
}
