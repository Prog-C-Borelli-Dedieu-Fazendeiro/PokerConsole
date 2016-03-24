#include <stdio.h>
#include <stdlib.h>

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
    int iDernièreMise; // dernière mise. Sert à déterminer la mise mini pour le prochain joueur;
    int iMiseTotale; // Mise total courante sur la table
}


/**
 Créé une liste de cartes non mélangées
 **/
 creerDeck(* listeCartes)

 /**
    Gère une phase de jeu, c’est à dire chaque tour  où l’on distribue les cartes au joueurs et
    qui se termine lorsque l’on reste qu’un joueur non couché
 **/
Joueur phase(Partie  partie ,Phase  phase)
