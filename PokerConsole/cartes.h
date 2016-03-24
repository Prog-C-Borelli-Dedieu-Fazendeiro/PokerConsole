#include <stdio.h>
#include <stdlib.h>

/**
Type �num�r� comprenant les diff�rentes valeurs que peut prendre la couleur d'une carte
**/
typedef enum Couleur Couleur;

enum Couleur

{
    Coeur,Carreau,Pique,Trefle;

};

/**
Structure permettant de stocker les informations d'une carte.
Une carte est caract�ris�e par sa couleur (coeur, carreau, pique ou tr�fle),
et par sa valeur ( de 1 � 13 )
**/
struct Carte
{
    int iValeur; // Valeur de la carte
    Couleur cCouleur; // Couleur de la carte
} Carte;
