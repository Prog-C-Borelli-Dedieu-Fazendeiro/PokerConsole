#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Joueur.h"
//#include "Table_physique/cartes.h"
#include "Table_Physique.h"
//#include "Partie.h"
#include "IHM.h"


/// Auteur :Léo Fazendeiro

int main()
{
    char c[10];
    for (int i=0; i<10; i++) {
        c[i]='c';
    }
    int pognon=3000;
    Joueur j;
    creation_joueur(&j, c, pognon);
    int autorisation=0;
    mise_joueur(&j, 10000);
    for (int i=0; i<10; i++) {
        printf("%c", j.sPseudo[i]);
    }
    printf("\n");
    printf("autorisation : %d \n", autorisation);
    printf("capital: %d \n", j.iCapital);
    menu_principal();
    return 0;
}
