#include <stdio.h>
#include <stdlib.h>

/**
 * \file combinaisons.h
 * \brief DECLARARIONS DES PROTOTYPES LIES AUX COMBINAISONS
 * \author Dedieu Y.
 * \version 0.1
 * \date 04/04/2016
 *
 * Ensemble de fonctions permettant de conna�tre la combinaison d'une main donn�e pour un joueur.
 * Score des combinaisons : un score est donn� pour une combinaison (gr�ce � un entier) � chacune des combinaisons
 * afin de pouvoir les comparer au mieux. Ce score est d�finie sur un entier � 5 chiffre :
 *    + Chaque combinaison est not� de 00000 (Pour la carte simple) � 90000
 *    + Chaque carte qui donne la hauteur de la combinaison est not�e de 0100 (pour l�as dans le cas ou il est pris
 *      en valeur faible) � 1400 (pour l�as dans le cas ou il est pris en valeur haute) de 100 en 100
 *    + En plus des combinaison, en cas d��galit�, c�est la carte la plus haute dans la main du joueur qui est prise en compte,
 *      cette carte est not�e de 1 � 14 (As en valeur faible � As en valeur haute) de 1 en 1.
 *      Si celle-ci ne peut d�finir � nouveau un gagnant (cas d�une paire directement en main) on regardera la carte
 *      la plus haute dans les cartes communes.
 * On additionne alors ces note ce qui donne un score entre 00101 (pour Combinaison : carte simple |
 * hauteur de la combinaison : As | Carte la plus haute : As) � 91414 points
 * (pour Combinaison : Quinte Royale | hauteur de la combinaison : As | Carte la plus haute : As).
 */


/**
 * \fn valeur_combinaison(int iCartes_joueur[2], int iCartes_communes[5])
 * \brief  Fonction permettant de calculer la valeur d'une main donn�e;
 *         utilise les fonctions permettant de d�composer chaque combinaison.
 *
 * \param iCartes_joueur[2] Tableau d'entier : Tableau contenant les valeurs des 2 cartes d'un joueur
 *        iCartes_communes[5] Tableau d'entier : Tableau contenant les valeurs des 5 cartes communes
 *
 * \return un entier positif correspondant � la valeur d'une combinaison d'un joueur.
 *
 */
int valeur_combinaison(int iCartes_joueur[2], int iCartes_communes[5]);

/**
 * \fn quinte_royale(int iTableau_cartes[], int iNombre_cartes)
 * \brief  Fonction permettant de savoir s'il s'agit d'une quinte flush royale
 *
 * \param iTableau_cartes[] Tableau d'entier : Tableau contenant les valeurs des cartes � tester pour la combinaison
 *        iNombre_cartes Entier : Repr�sente la taille du tableau
 *
 * \return un entier positif correspondant � la valeur d'une combinaison d'un joueur.
 *
 */
int quinte_royale(int iTableau_cartes[], int iNombre_cartes);

/**
 * \fn quinte_flush(int iTableau_cartes[], int iNombre_cartes)
 * \brief  Fonction permettant de savoir s'il s'agit d'une quinte flush
 *
 * \param iTableau_cartes[] Tableau d'entier : Tableau contenant les valeurs des cartes � tester pour la combinaison
 *        iNombre_cartes Entier : Repr�sente la taille du tableau
 *
 * \return un entier positif correspondant � la valeur d'une combinaison d'un joueur.
 *
 */
int quinte_flush(int iTableau_cartes[], int iNombre_cartes);

/**
 * \fn carre(int iTableau_cartes[], int iNombre_cartes)
 * \brief  Fonction permettant de savoir s'il s'agit d'un carr�
 *
 * \param iTableau_cartes[] Tableau d'entier : Tableau contenant les valeurs des cartes � tester pour la combinaison
 *        iNombre_cartes Entier : Repr�sente la taille du tableau
 *
 * \return un entier positif correspondant � la valeur d'une combinaison d'un joueur.
 *
 */
int carre(int iTableau_cartes[], int iNombre_cartes);

/**
 * \fn full(int iTableau_cartes[], int iNombre_cartes)
 * \brief  Fonction permettant de savoir s'il s'agit d'un full
 *
 * \param iTableau_cartes[] Tableau d'entier : Tableau contenant les valeurs des cartes � tester pour la combinaison
 *        iNombre_cartes Entier : Repr�sente la taille du tableau
 *
 * \return un entier positif correspondant � la valeur d'une combinaison d'un joueur.
 *
 */
int full(int iTableau_cartes[], int iNombre_cartes);

/**
 * \fn couleur(int iTableau_cartes[], int iNombre_cartes)
 * \brief  Fonction permettant de savoir s'il s'agit d'une couleur
 *
 * \param iTableau_cartes[] Tableau d'entier : Tableau contenant les valeurs des cartes � tester pour la combinaison
 *        iNombre_cartes Entier : Repr�sente la taille du tableau
 *
 * \return un entier positif correspondant � la valeur d'une combinaison d'un joueur.
 *
 */
int couleur(int iTableau_cartes[], int iNombre_cartes);

/**
 * \fn suite(int iTableau_cartes[], int iNombre_cartes)
 * \brief  Fonction permettant de savoir s'il s'agit d'une suite
 *
 * \param iTableau_cartes[] Tableau d'entier : Tableau contenant les valeurs des cartes � tester pour la combinaison
 *        iNombre_cartes Entier : Repr�sente la taille du tableau
 *
 * \return un entier positif correspondant � la valeur d'une combinaison d'un joueur.
 *
 */
int suite(int iTableau_cartes[], int iNombre_cartes);

/**
 * \fn brelan(int iTableau_cartes[], int iNombre_cartes)
 * \brief  Fonction permettant de savoir s'il s'agit d'un brelan
 *
 * \param iTableau_cartes[] Tableau d'entier : Tableau contenant les valeurs des cartes � tester pour la combinaison
 *        iNombre_cartes Entier : Repr�sente la taille du tableau
 *
 * \return un entier positif correspondant � la valeur d'une combinaison d'un joueur.
 *
 */
int brelan(int iTableau_cartes[], int iNombre_cartes);

/**
 * \fn double_paire(int iTableau_cartes[], int iNombre_cartes)
 * \brief  Fonction permettant de savoir s'il s'agit d'une double paire
 *
 * \param iTableau_cartes[] Tableau d'entier : Tableau contenant les valeurs des cartes � tester pour la combinaison
 *        iNombre_cartes Entier : Repr�sente la taille du tableau
 *
 * \return un entier positif correspondant � la valeur d'une combinaison d'un joueur.
 *
 */
int double_paire(int iTableau_cartes[], int iNombre_cartes);

/**
 * \fn simple_paire(int iTableau_cartes[], int iNombre_cartes)
 * \brief  Fonction permettant de savoir s'il s'agit d'une simple paire
 *
 * \param iTableau_cartes[] Tableau d'entier : Tableau contenant les valeurs des cartes � tester pour la combinaison
 *        iNombre_cartes Entier : Repr�sente la taille du tableau
 *
 * \return un entier positif correspondant � la valeur d'une combinaison d'un joueur.
 *
 */
int simple_paire(int iTableau_cartes[], int iNombre_cartes);

/**
 * \fn carte_haute(int iTableau_cartes[], int iNombre_cartes)
 * \brief  Fonction permettant de savoir la carte haute d'en ensmble de carte.
 *
 * \param iTableau_cartes[] Tableau d'entier : Tableau contenant les valeurs des cartes � tester pour la combinaison
 *        iNombre_cartes Entier : Repr�sente la taille du tableau
 *
 * \return un entier positif correspondant � la valeur d'une combinaison d'un joueur.
 *
 */
int carte_haute(int iTableau_cartes[], int iNombre_cartes);
