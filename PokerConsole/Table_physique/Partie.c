#include <stdio.h>
#include <stdlib.h>
#include "Partie.h"
/// Auteur :Léo Fazendeiro

void creerPartie(Partie * p, int iNbJoueur) {
    Creer_liste_statique_generique(&p->listeJoueurs, iNbJoueur);
}

void lancer_Partie(Partie * partie) {
    printf("lol");
}
