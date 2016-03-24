#include <stdio.h>
#include <stdlib.h>

/// Auteur :L�o Fazendeiro


/**
    Structure contenant toutes les informations relatives � une phase de jeu, c�est � dire entre
    chaque distribution de cartes aux joueurs
**/
typedef struct Phase
{
    int iIndexDealer; // index dans la liste listeJoueurs du joueur qui a distribu� les cartes � ce tour. Incr�ment� � chaque tour.
    /*  listeCartesCommunes; // liste des cartes au centre de la table. Une carte est ajout�e � chaque d�but de tour, jusqu�� 5 dans une phase de jeu.
      deck; // ensemble des 54 cartes du jeu
      listeJoueursActifs; // liste des joueurs qui ne se sont pas encore couch�s*/
    int iDerni�reMise; // derni�re mise. Sert � d�terminer la mise mini pour le prochain joueur;
    int iMiseTotale; // Mise total courante sur la table
}


/**
 Cr�� une liste de cartes non m�lang�es
 **/
 creerDeck(* listeCartes)

 /**
    G�re une phase de jeu, c�est � dire chaque tour  o� l�on distribue les cartes au joueurs et
    qui se termine lorsque l�on reste qu�un joueur non couch�
 **/
Joueur phase(Partie  partie ,Phase  phase)
