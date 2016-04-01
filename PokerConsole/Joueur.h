#include "Table_physique/cartes.h"
#include <string.h>

typedef struct Joueur
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
