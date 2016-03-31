#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Joueur.h"
//#include "Table_physique/cartes.h"
#include "Table_Physique.h"
//#include "Partie.h"


/// Auteur :Léo Fazendeiro

int main()
{
    char c[10];
    for (int i=0; i<10; i++) {
        c[i]='c';
    }
    int pognon=3000;
    Joueur j;
    creation_joueur(&j, &c, pognon);
    changement_etat_joueur(&j);
    printf("etat : %d", j.iEtat);
    return 0;
}
