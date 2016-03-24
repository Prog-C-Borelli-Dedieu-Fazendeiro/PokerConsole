#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Joueur.h"
//#include "cartes.h"
#include "Table_Physique.h"
//#include "Partie.h"


/// Auteur :Léo Fazendeiro

int main()
{
    char c='h';
    int pognon=3000;
    Joueur j;
    creation_joueur(&j, c, pognon);
    printf ("nom : %c \n", j.sPseudo);
    return 0;
}
