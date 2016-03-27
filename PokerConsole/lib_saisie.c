#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <limits.h>

void viderBuffer() {

/**
 *
 * fonction vidant le buffer de saisie de la saisie courante
 * ne pas utiliser fflush(stdin) car stdin est un flux de type sortie,
 * ou un flux de mise a jour dont la derniere operation n'etait pas une saisie,
 * la fonction fflush transmet les caracteres non inscrits a l'environnement pour etre inscrits dans le flux.
 * Sinon le comportement est indefini.
 *
 * Interpretation :
 *   La fonction fflush est reservee uniquement a un type de flux de sortie,
 *   et par le fait que stdin est considere comme etant un flux d'entree,
 *   le comportement de fflush envers ce flux est donc indefini.
 *
 *   Comme dans tous les cas indefinis, l'utilisation de fflush sur stdin peut fonctionner sur certaines implementations
 *   et pas sur d'autres. Attention donc a ce genre de pratique, qui peut generer un bogue du systeme.
 *   a utiliser apres chaque scanf() pour vider correctement le buffer
 *
 */
    char c = 0;
    // vide caract�re par caract�re le buffer jusqu'au caract�re '\n' (saut de ligne) ou la fin du flux
    while (c != '\n' && c != EOF) {
        c = getchar();
    }
}



int saisie_utilisateur_entier(int * const piEntier) {
    // test du pointeur par s�curit� .... � remplacer par un m�canisme d'exception dans un autre langage
    // ou � passer en commentaire si besoin de performance APRES les tests unitaires
    if(piEntier!=NULL) {
        // recherche des min et max selon l'architecture
        // il faut d'abord savoir combien de caract�res sont n�cessaire
        // on utilise la constante INT_MAX pour calculer le nombre maxi de caract�re nec�ssaire
        // en divisant par 10 jusqu'� obtenir 0 (rappel : division d'un int par un int = un int)
        int ivalue = INT_MAX;
        int cpt_carac_nessecaire = 0;
        while(ivalue>0) {
            ivalue /= 10;
            cpt_carac_nessecaire++;
        }
        // pour tester si on est dans le domaine, nous avons besoin de transformer INT_MAX et INT_MIN en chaine de caract�res
        char *nom_max = (char*) malloc(cpt_carac_nessecaire+1);
        char *nom_min = (char*) malloc(cpt_carac_nessecaire+2);

        // test si l'allocation a fonctionn�
        if (nom_max!= NULL && nom_min!=NULL) {
            sprintf(nom_max, "%d", INT_MAX);
            sprintf(nom_min, "%d", INT_MIN);

            char *chaine = (char*) malloc(cpt_carac_nessecaire+2);  // chaine saisie par l'utilisateur
            if (chaine!=NULL) {
                bool valide = false;  // bool�en vrai si saisie correct, faux par d�faut
                bool signe = false;   // bool�en vrai s'il y a un signe, faux par d�faut
                int indice_case = 0;
                int nb_chiffre;       // compteur de chiffre pour v�rifier si on a atteind la taille max d'un int

                // 1ere partie : on r�cup�re la chaine proprement dans le buffer

                chaine[indice_case] = getchar();
                // si on n a pas atteind la fin (saisie vide -> l'utilisateur appuie sur entr�e directement)
                if (chaine[indice_case] != '\n' && chaine[indice_case] != EOF  ) {
                    // on r�cup�re le signe (+ ou -) s'il y en a un
                    if( chaine[indice_case] == '+' || chaine[indice_case] == '-') {
                        indice_case++;
                        chaine[indice_case] = getchar();
                        signe = true;
                    }
                    // si on n a pas atteind la fin
                    if (chaine[indice_case] != '\n' && chaine[indice_case] != EOF  ) {
                        // on r�cup�re "cpt_carac_nessecaire" chiffres au plus
                        nb_chiffre = 0;
                        while (chaine[indice_case] != '\n' && chaine[indice_case] != EOF && chaine[indice_case] >= '0'&& chaine[indice_case] <= '9' && nb_chiffre <= cpt_carac_nessecaire) {
                            indice_case++;
                            nb_chiffre++;
                            chaine[indice_case] = getchar();
                        }
                        // si on a atteind la fin c'est une saisie potentiellement valide (il reste � v�rifier si il y a 5 chiffres que c'est inf � 32767
                        if (chaine[indice_case] == '\n' || chaine[indice_case] == EOF  ) {
                            chaine[indice_case] = '\0';
                            if (nb_chiffre >= cpt_carac_nessecaire) {
                                if( (signe == false && strcmp(chaine,nom_max)<=0) ||
                                        (signe == true && chaine[0] == '+' && strcmp(chaine+1,nom_max)<=0) ||
                                        (signe == true && chaine[0]=='-' && strcmp(chaine,nom_min)<=0)) {
                                    valide = true;
                                }
                            } else {
                                valide = true;
                            }
                        } else {
                            // saisie erron�e, on vide le reste du buffer
                            viderBuffer();
                        }
                    }
                }

                free(nom_max);
                free(nom_min);

                // 2�me partie : traitement du r�sultat : conversion en int ou on repose la questions

                if(valide == true) {
                    *piEntier = atoi(chaine);
                    free(chaine);
                    return *piEntier;
                } else {
                    printf("Saisie incorrecte ! <ENTIER>  domaine : + %d / %d \n",INT_MAX,INT_MIN);
                    return saisie_utilisateur_entier(piEntier);
                }
                free(chaine);
            } else {
                printf("\npas assez de memoire!"); // � remplacer par une lev�e d'exception dans des langages les utilisant
            }
        } else {
            printf("\npas assez de memoire!"); // � remplacer par une lev�e d'exception dans des langages les utilisant
        }
    }
    return 0;
}
