#include <stdio.h>
#include <stdlib.h>
#include "Joueur.h"
#include <String.h>


/*** author : Geoffrey BORELLI ***/


void creation_joueur (Joueur * j, char * sPseudoParam, int iCapitalParam){
    for (int i=0; i<10; i++) {
        j->sPseudo[i]=sPseudoParam[i];
    }
    j->iCapital=iCapitalParam;
    j->iEtat=1;
}


void active_joueur (Joueur * j) {
    j->iEtat=1;
}

void desactive_joueur (Joueur * j) {
    j->iEtat=0;
}

int mise_joueur (Joueur * j, int mise) {
    int autorisation;
    if (mise<=j->iCapital){
        autorisation=1;
        j->iCapital=j->iCapital-mise;
    }
    else {
        autorisation=0;
    }
    return autorisation;
}
