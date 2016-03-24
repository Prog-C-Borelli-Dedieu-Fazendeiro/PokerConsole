#include "cartes.h"

typedef struct Joueur
{
    char sPseudo[256];
	int iCapital;
	int iEtat;
	Carte kPossession[2];
}Joueur;

Joueur creation_joueur (char sPseudoParam, int iCapitalParam);
void changement_etat_joueur(Joueur j);
