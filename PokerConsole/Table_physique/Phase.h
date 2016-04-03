#include <stdio.h>
#include <stdlib.h>
#include "../libs/lib_liste.h"
#include "../libs/lib_pile.h"
#include "Partie.h"

/// Auteur :Léo Fazendeiro


/**
    Structure contenant toutes les informations relatives à une phase de jeu, c’est à dire entre
    chaque distribution de cartes aux joueurs
**/
typedef struct Phase
{
    int iIndexDealer; // index dans la liste listeJoueurs du joueur qui a distribué les cartes à ce tour. Incrémenté à chaque tour.
    /*  listeCartesCommunes; // liste des cartes au centre de la table. Une carte est ajoutée à chaque début de tour, jusqu’à 5 dans une phase de jeu.
      deck; // ensemble des 54 cartes du jeu
      listeJoueursActifs; // liste des joueurs qui ne se sont pas encore couchés*/
    int iDerniereMise; // dernière mise. Sert à déterminer la mise mini pour le prochain joueur;
    int iMiseTotale; // Mise total courante sur la table
} Phase;

int rand_min_max(int iMin, int iMax);


/**
    Créé une liste de cartes non mélangées
 **/
Liste_statique_generique* creerDeck();

/**
    Mélange une liste de cartes en les ajoutant dans une pile
 **/
Pile_statique_generique* melangerDeck(Liste_statique_generique* deck);

 /**
    Gère une phase de jeu, c’est à dire chaque tour où l’on distribue les cartes au joueurs et
    qui se termine lorsque l’on reste qu’un joueur non couché
 **/
Joueur phase(Partie  partie ,Phase  phase);


/**
    Gère un tour de parole, c’est à dire le tour qui suit la découverte d’une carte commune.
    Se termine lorsque tous les joueurs ont parlé un joueur peut entre 1 pour suivre, 2 pour se coucher ou 3 pour passer
**/
void tourDeParole (Liste_statique_generique * listeJoueurs, Partie  partie ,Phase  phase);

