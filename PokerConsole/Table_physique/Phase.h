#include <stdio.h>
#include <stdlib.h>
#include "../libs/lib_liste.h"
#include "../libs/lib_pile.h"
#include "Partie.h"

/// Auteur :L�o Fazendeiro


/**
    Structure contenant toutes les informations relatives � une phase de jeu, c�est � dire entre
    chaque distribution de cartes aux joueurs
**/
typedef struct phase
{
    int iIndexDealer; // index dans la liste listeJoueurs du joueur qui a distribu� les cartes � ce tour. Incr�ment� � chaque tour.
    /*  listeCartesCommunes; // liste des cartes au centre de la table. Une carte est ajout�e � chaque d�but de tour, jusqu�� 5 dans une phase de jeu.
      deck; // ensemble des 54 cartes du jeu
      listeJoueursActifs; // liste des joueurs qui ne se sont pas encore couch�s*/
    int iDerniereMise; // derni�re mise. Sert � d�terminer la mise mini pour le prochain joueur;
    int iMiseTotale; // Mise total courante sur la table
}Phase;

/**
    Retourne un int au hazard entre min et max
**/
int rand_min_max(int iMin, int iMax);


/**
    Cr�� une liste de cartes non m�lang�es
 **/
void creerDeck(Liste_dynamique_generique * deck);

/**
    M�lange une liste de cartes en les ajoutant dans une pile
 **/
Pile_statique_generique* melangerDeck(Liste_dynamique_generique* deck);

 /**
    G�re une phase de jeu, c�est � dire chaque tour o� l�on distribue les cartes au joueurs et
    qui se termine lorsque l�on reste qu�un joueur non couch�
 **/
Joueur * phase(Partie  partie ,Phase  phase);


/**
    G�re un tour de parole, c�est � dire le tour qui suit la d�couverte d�une carte commune.
    Se termine lorsque tous les joueurs ont parl� un joueur peut entre 1 pour suivre, 2 pour se coucher ou 3 pour passer
**/
void tourDeParole (Liste_dynamique_generique * listeJoueurs, Partie  partie ,Phase  phase);

