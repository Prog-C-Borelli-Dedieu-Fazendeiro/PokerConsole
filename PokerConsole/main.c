#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Joueur.h"
//#include "Table_physique/cartes.h"
#include "Table_Physique.h"
//#include "Partie.h"
#include "libs/lib_liste.h"
#include "Table_physique/Phase.h"


void testCreationDeck()
{
    Liste_dynamique_generique * deck;
    deck = creerDeck();
    Pile_statique_generique * deckMelange;
    deckMelange=melangerDeck(deck);
    void * pfAfficheCarte = &afficherCarte;
    //Afficher_liste_dynamique_generique(deck,pfAfficheCarte);
    Afficher_pile_statique_generique(deckMelange,pfAfficheCarte);

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

