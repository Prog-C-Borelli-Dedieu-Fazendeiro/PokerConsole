#include "cartes.h"
#include <string.h>

typedef struct Joueur
{
    char sPseudo [10];
	int iCapital;
	int iEtat;
	Carte kPossession[2];
}Joueur;

void creation_joueur (Joueur * j, char * sPseudoParam, int * iCapitalParam);
void changement_etat_joueur(Joueur j);
