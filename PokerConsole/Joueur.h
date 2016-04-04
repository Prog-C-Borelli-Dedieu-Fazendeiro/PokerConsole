#ifndef JOUEUR_H_INCLUDED
#define JOUEUR_H_INCLUDED
#include "Table_physique/cartes.h"
#include <string.h>

typedef struct joueur
{
    char sPseudo [10];
	int iCapital;
	int iEtat;
	Carte kPossession[2];
}Joueur;

void creation_joueur (Joueur * j, char * sPseudoParam, int iCapitalParam);
void active_joueur (Joueur * j);
void desactive_joueur (Joueur * j);
int mise_joueur (Joueur * j, int mise);


#endif // JOUEUR_H_INCLUDED
