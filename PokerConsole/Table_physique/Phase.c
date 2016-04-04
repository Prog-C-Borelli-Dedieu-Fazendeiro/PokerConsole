#include <stdio.h>
#include <stdlib.h>
#include "../libs/lib_liste.h"
#include "cartes.h"
#include "../libs/lib_pile.h"
#include <time.h>

/// Auteur :Léo Fazendeiro


void creerDeck(Liste_dynamique_generique * deck)
{
    Creer_liste_dynamique_generique(deck);
    for (int iCouleur=0; iCouleur<4; iCouleur++)
    {
        for (int iValeur=1; iValeur<14; iValeur++)
        {
            Carte carte;
            CreerCarteSimple(&carte,iValeur,iCouleur);
            Ajouter_elem_fin_liste_dynamique_generique(deck,&carte,sizeof(Carte));
        }
    }
}

int rand_min_max(int iMin, int iMax)
{
    return ( rand()/(double)RAND_MAX ) * (iMax-iMin) + iMin;
}

Pile_statique_generique * melangerDeck(Liste_dynamique_generique * deck){

    Pile_statique_generique * deckMelange=(Pile_statique_generique*)malloc(sizeof(Pile_statique_generique));
    Creer_pile_statique_generique(deckMelange,52);
    Carte * carte;
    srand(time(NULL));
    int iCompteurCarte=0;
    for (iCompteurCarte;iCompteurCarte<52;iCompteurCarte++){
        int indexHazard = rand_min_max(1,52-iCompteurCarte);
        Element_liste_dynamique_generique * el=deck->psTete;
        for (int i =0;i<indexHazard+2;i++){
            el->ElementSuivant;
            carte = (Carte *)el->tdDonnee;
            printf("%d", carte->cCouleur);
        }
        carte = (Carte *)el->tdDonnee;
        Ajouter_elem_pile_statique_generique(deckMelange,carte,sizeof(Carte));
        Enlever_elem_ieme_liste_dynamique_generique(deck,carte,sizeof(Carte),indexHazard);
    }
    return deckMelange;
}


