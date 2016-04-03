#include <stdio.h>
#include <stdlib.h>

#define NBRCARTE

/// Auteur :Léo Fazendeiro

/**
    Structure regroupant les variables nécessaires au déroulement d'une partie de Poker
**/
typedef struct Partie
{
    int iMiseDeDepart; // mise de départ de la table
    int iNombreJoueurs; // nombre de joueurs sur la table
    int listeJoueurs; // liste des joueurs de la partie
    int listeJoueursParticipants; // liste des joueurs à qui il reste des jetons
    int iNumPhase; // Numéro de la phase de jeu actuelle
    int iNombreJoueursParticipants; // Nombre total de joueurs à qui il reste des jetons
} Partie;

/**
    Lance la partie
**/
void lancer_Partie(Partie * partie);

/**
 Crée la liste des joueurs au début de la partie. Le nombre max de joueurs est de 8
 **/
//void InitialiseListeJoueurs(* listeJoueurs);

/**
 Supprime de la liste des participants les joueurs qui n’ont plus de jetons
 **/
//void supprimerJoueursFauches(* listeJoueurs);



