#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Joueur.h"
#include "Table_physique/cartes.h"
#include "Table_Physique.h"
//#include "Partie.h"
#include "libs/lib_liste.h"
#include "Table_physique/Phase.h"
#include "IHM.h"


void testCreationDeck()
{
    Liste_dynamique_generique * deck=(Liste_dynamique_generique*)malloc(sizeof(Liste_dynamique_generique));
    printf("%c", 5);
    creerDeck(deck);
    Pile_statique_generique * deckMelange;
    deckMelange=melangerDeck(deck);
    void * pfAfficheCarte = &Afficher_Carte;
    Afficher_liste_dynamique_generique(deck,pfAfficheCarte);
    Afficher_pile_statique_generique(deckMelange,pfAfficheCarte);
}

void testRand_min_max(){
for (int i=0;i<1000;i++){
        int i =rand_min_max(0,51);
    printf("%i\n",i);
}
}

int main()
{
    testCreationDeck();
}

void testJoueur()
{
    /*  char c[10];
      for (int i=0; i<10; i++) {
          c[i]='c';
      }
      int pognon=3000;
      Joueur j;
      creation_joueur(&j, &c, pognon);
      int autorisation=0;
      mise_joueur(&j, 10000);
      printf("autorisation : %d \n", autorisation);
      printf("capital: %d \n", j.iCapital);*/
}

