#ifndef LIB_SAISIE_H_INCLUDED
#define LIB_SAISIE_H_INCLUDED

#include <stdbool.h>

/**
 * \file lib_saisie.h
 * \brief Librairie de fonctions pour la saisie securisee
 * \author Pitiot P.
 * \version 0.3
 * \date 08/03/2016
 *
 * permet de verifier et controler les informations saisies
 * pas d'exceptions possible pour le controle de saisie car tout est verifie (type donnee saisie + limite domaines)
 * exceptions possible si pas assez de memoire (malloc retournant NULL)
 * -> a remplacer par des exceptions dans les langages les utilisant.
 *
 */

/**
 * \fn viderBuffer()
 * \brief  fonction vidant le buffer de saisie de la saisie courante
 *
 * a utiliser apres chaque scanf() pour vider correctement le buffer
 *
 */

void viderBuffer();

/**
 * \fn saisie_utilisateur_entier(int * const piEntier)
 * \brief fonction de saisie pour un entier avec controle de saisie et verification de domaine
 *
 * \param piEntier Pointeur vers un entier : adresse a remplir avec le nombre saisi par l'utilisateur.
 *        test si pointeur different de NULL en entree -> affichage message d erreur si == NULL et retourne 0
 * \return un entier correspondant au nombre saisi ou 0 en cas d'erreur (plus de memoire disponible ou pointeur NULL en entree)
 *
 */
int saisie_utilisateur_entier(int * const piEntier);

/**
 * \fn saisie_utilisateur_entier_positif(int *piEntierPositif)
 * \brief fonction de saisie pour un entier positif avec controle de saisie et verification de domaine
 *
 * \param piEntier Pointeur vers un entier : adresse a remplir avec le nombre saisi par l'utilisateur.
 *        test si pointeur different de NULL en entree -> affichage message d erreur si == NULL et retourne 0
 * \return un entier positif correspondant au nombre saisi ou 0 en cas d'erreur (plus de memoire disponible ou pointeur NULL en entree)
 *
 */
int saisie_utilisateur_entier_positif(int * const piEntierPositif);

/**
 * \fn saisie_utilisateur_double(double *pdDouble)
 * \brief fonction de saisie pour un double avec controle de saisie et verification de domaine
 *
 * \param pdDouble Pointeur vers un double : adresse a remplir avec le nombre saisi par l'utilisateur.
 *        test si pointeur different de NULL en entree -> affichage message d erreur si == NULL et retourne 0
 * \return un double correspondant au nombre saisi ou 0 en cas d'erreur (plus de memoire disponible ou pointeur NULL en entree)
 *
 */
double saisie_utilisateur_double(double * const pdDouble);

/**
 * \fn saisie_utilisateur_double_positif(double *pdDoublePositif)
 * \brief fonction de saisie pour un double positif avec controle de saisie et verification de domaine
 *
 * \param pdDoublePositif Pointeur vers un double : adresse a remplir avec le nombre saisi par l'utilisateur.
 *        test si pointeur different de NULL en entree -> affichage message d erreur si == NULL et retourne 0
 * \return un double positif correspondant au nombre saisi ou 0 en cas d'erreur (plus de memoire disponible ou pointeur NULL en entree)
 *
 */
double saisie_utilisateur_double_positif(double * const pdDoublePositif);

/**
 * \fn saisie_utilisateur_float(float *pfFloat)
 * \brief fonction de saisie pour un float avec controle de saisie et verification de domaine
 *
 * \param pfFloat Pointeur vers un float : adresse a remplir avec le nombre saisi par l'utilisateur.
 *        test si pointeur different de NULL en entree -> affichage message d erreur si == NULL et retourne 0
 * \return un float correspondant au nombre saisi ou 0 en cas d'erreur (plus de memoire disponible ou pointeur NULL en entree)
 *
 */
float saisie_utilisateur_float(float * const pfFloat);

/**
 * \fn saisie_utilisateur_float_positif(float * const pfFloatPositif)
 * \brief fonction de saisie pour un float positif avec controle de saisie et verification de domaine
 *
 * \param pfFloatPositif Pointeur vers un float : adresse a remplir avec le nombre saisi par l'utilisateur.
 *        test si pointeur different de NULL en entree -> affichage message d erreur si == NULL et retourne 0
 * \return un float positif correspondant au nombre saisi ou 0 en cas d'erreur (plus de memoire disponible ou pointeur NULL en entree)
 *
 */
float saisie_utilisateur_float_positif(float * const pfFloatPositif);

/**
 * \fn saisie_utilisateur_string(char * const psChaine, int longueur_chaine_max)
 * \brief fonction de saisie d'une chaine de caract�re de longueur maximale donn�e si l'utilisateur d�passe on l'avertit et il doit resaisir
 *
 * \param char * const psChaine Pointeur vers une chaine de caract�re : adresse a remplir avec la chaine saisie par l'utilisateur.
 *        test si pointeur different de NULL en entree -> affichage message d erreur si == NULL et retourne NULL
 * \return un pointeur vers la chaine saisie correspondant ou NULL en cas d'erreur (pointeur NULL en entree)
 *
 */
char * saisie_utilisateur_string(char * const psChaine, int longueur_chaine_max);

#endif // LIB_SAISIE_H_INCLUDED
