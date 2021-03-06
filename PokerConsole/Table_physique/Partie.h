#include <stdio.h>
#include <stdlib.h>
#include "../libs/lib_liste.h"

#define NBRCARTE

/// Auteur :L�o Fazendeiro

/**
    Structure regroupant les variables n�cessaires au d�roulement d'une partie de Poker
**/
typedef struct Partie
{
    int iMiseDeDepart; // mise de d�part de la table
    int iNombreJoueurs; // nombre de joueurs sur la table
    Liste_statique_generique listeJoueurs; // liste des joueurs de la partie
    Liste_statique_generique  listeJoueursParticipants; // liste des joueurs � qui il reste des jetons
    int iNumPhase; // Num�ro de la phase de jeu actuelle
    int iNombreJoueursParticipants; // Nombre total de joueurs � qui il reste des jetons
} Partie;

/**
    Initialisation des valiables de la partie
**/
void creerPartie(Partie * p,int iNbJoueur);

/**
    Lance la partie
**/
void lancer_Partie(Partie * partie);

/**
 Cr�e la liste des joueurs au d�but de la partie. Le nombre max de joueurs est de 8
 **/
//void InitialiseListeJoueurs(* listeJoueurs);

/**
 Supprime de la liste des participants les joueurs qui n�ont plus de jetons
 **/
//void supprimerJoueursFauches(* listeJoueurs);



