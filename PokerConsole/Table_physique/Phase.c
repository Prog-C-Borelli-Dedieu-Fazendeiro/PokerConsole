#include <stdio.h>
#include <stdlib.h>
#include "../libs/lib_liste.h"
#include "cartes.h"

/// Auteur :Léo Fazendeiro


Liste_statique_generique * creerDeck()
{
    int iValeur=1;
    int iCouleur =COEUR;
    Liste_statique_generique * deck = (Liste_statique_generique *)malloc(sizeof(Liste_statique_generique));
    for (iCouleur; iCouleur<TREFLE; iCouleur++)
    {
        for (iValeur; iValeur<14; iValeur++)
        {
            Carte * carte;
            carte = CreerCarte(iValeur,iCouleur);
            Ajouter_elem_fin_liste_statique_generique(deck,carte,sizeof(Carte));
        }
    }
    return deck;
}

/*{
    return (rand()/(float)RAND_MAX) * x;
}*/

/*Pile_statique_generique * melangerDeck(Liste_statique_generique * deck){

    Pile_statique_generique * deckMelange = (Pile_statique_generique *)malloc(sizeof(liste_statique_generique));
    Carte * carte;
    int iCompteurCarte=0;
    for (iCompteurCarte;iCompteurCarte<52;iCompteurCarte++){
        int indexHazard = rand_a_b(0,52-iCompteurCarte);
        carte = tete_liste_statique_generique(deck,Carte,sizeof(Carte));
        for (int i =0;i<indexHazard;i++){
            carte= eleme
        }
    }
}*/


