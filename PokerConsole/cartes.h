#include <stdio.h>
#include <stdlib.h>

/// Auteur :L�o Fazendeiro

/**
Type �num�r� comprenant les diff�rentes valeurs que peut prendre la couleur d'une carte
**/
typedef enum Couleur

{
    Coeur,Carreau,Pique,Trefle
}Couleur;

/**
Structure permettant de stocker les informations d'une carte.
Une carte est caract�ris�e par sa couleur (coeur, carreau, pique ou tr�fle),
et par sa valeur ( de 1 � 13 )
**/
typedef struct Carte
{
    int iValeur; // Valeur de la carte
    Couleur cCouleur; // Couleur de la carte
} Carte;

/**
Cr�e une carte avec sa couleur et sa valeur. Renvoie un pointeur sur la carte cr��e
**/
Carte* CreerCarte(int v, Couleur c);



