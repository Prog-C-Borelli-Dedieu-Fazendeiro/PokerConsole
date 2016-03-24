#include <stdio.h>
#include <stdlib.h>

/// Auteur :Léo Fazendeiro

/**
Type énuméré comprenant les différentes valeurs que peut prendre la couleur d'une carte
**/
typedef enum Couleur

{
    Coeur,Carreau,Pique,Trefle
}Couleur;

/**
Structure permettant de stocker les informations d'une carte.
Une carte est caractérisée par sa couleur (coeur, carreau, pique ou trèfle),
et par sa valeur ( de 1 à 13 )
**/
typedef struct Carte
{
    int iValeur; // Valeur de la carte
    Couleur cCouleur; // Couleur de la carte
} Carte;

/**
Crée une carte avec sa couleur et sa valeur. Renvoie un pointeur sur la carte créée
**/
Carte* CreerCarte(int v, Couleur c);



