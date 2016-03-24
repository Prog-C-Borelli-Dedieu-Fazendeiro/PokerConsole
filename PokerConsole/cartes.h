#include <stdio.h>
#include <stdlib.h>


typedef enum Couleur Couleur;

enum Couleur

{
    Coeur,Carreau,Pique,Trefle;

};

/**
Structure permettant de stocker les informations d'une carte.
Une carte est caractérisée par sa couleur (coeur, carreau, pique ou trèfle),
et par sa valeur ( de 1 à 13 )
**/
struct Carte {
 int iValeur; // Valeur de la carte
 Couleur cCouleur; // Couleur de la carte
}Carte;
