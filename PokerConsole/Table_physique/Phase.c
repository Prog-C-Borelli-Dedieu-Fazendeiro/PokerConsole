#include <stdio.h>
#include <stdlib.h>
#include "../libs/lib_liste.h"
#include "cartes.h"
#include "../libs/lib_pile.h"

/// Auteur :Léo Fazendeiro


Liste_dynamique_generique * creerDeck()
{
    int iValeur=1;
    int iCouleur =1;
    Couleur c=COEUR;
    Liste_dynamique_generique * deck = (Liste_dynamique_generique *)malloc(sizeof(Liste_dynamique_generique));
    Creer_liste_dynamique_generique(deck);
    for (iCouleur=1; iCouleur<5; iCouleur++)
    {
        switch (iCouleur)
        {
        case 1 :
            c=COEUR;
            break;
        case 2 :
            c=CARREAU;
            break;
        case 3 :
            c=PIQUE;
            break;
        case 4 :
            c=TREFLE;
            break;
        }

        for (iValeur=1; iValeur<14; iValeur++)
        {
            Carte * carte;
            carte = CreerCarte(iValeur,c);
            Ajouter_elem_fin_liste_dynamique_generique(deck,carte,sizeof(Carte));
        }
    }
    return deck;
}

int rand_min_max(int min, int max)
{
    return (int)( (rand() / (RAND_MAX * 1.0f)) * (max - min) + min);
}

Pile_statique_generique * melangerDeck(Liste_dynamique_generique * deck)
{

    Pile_statique_generique * deckMelange=NULL;
     Creer_pile_statique_generique(deckMelange,52);
    Carte * carte;
    int iCompteurCarte=0;
    for (iCompteurCarte=0; iCompteurCarte<52; iCompteurCarte++)
    {
        int indexHazard = rand_min_max(0,52-iCompteurCarte);
        Element_liste_dynamique_generique * elCarte= deck->psTete;
        for (int i=0;i<=indexHazard;i++){
                elCarte= elCarte->ElementSuivant;
        }
        carte =(Carte*)elCarte->tdDonnee;
        Ajouter_elem_pile_statique_generique(deckMelange,carte,sizeof(Carte));
        Enlever_elem_ieme_liste_dynamique_generique(deck,carte,sizeof(Carte),indexHazard);
    }

    return deckMelange;
}


