#include <stdio.h>
#include <stdlib.h>
#include "IHM.h"
#include "Joueur.h"
#include "Table_Physique\Partie.h"
#include "libs/lib_liste.h"
#include <string.h>

#define lgNom 10

void menu_nouvelle_partie() {
    /*Entier iNombre //Nombre de joueurs à créer
    Entier i //Compteur
    Entier iCapital //Le capital du joueur
	Chaine de caractères cdcNom //Nom du joueur
	Joueur j //Objet de structure joueur
	Partie p //Objet de structure partie*/
	int iNombre, iCapital;
	char cNom[lgNom];
	Partie p;

    creerPartie(&p);

	printf("Choisir nombre de joueurs entre 2 et 8 : ");
	scanf("%d", &iNombre);
	while (iNombre<2 || iNombre>8) {
        printf("Choisir nombre de joueurs entre 2 et 8 : ");
        scanf("%d", &iNombre);
	}

	for (int i=0; i<iNombre; i++){
        Joueur j;
        printf("Choisir le nom du joueur : ");
        scanf("%s", cNom);
        printf("Choisir le capital du joueur : ");
        scanf("%d", &iCapital);
        creation_joueur(&j, cNom, iCapital);
        printf("pseudo : %s", j.sPseudo);
        printf("\n");
        printf("capital  %d", j.iCapital);
        printf("\n");
//        Ajouter_elem_fin_liste_statique_generique(&p.listeJoueurs, &j, sizeof(Joueur));
	}
	//lancer_Partie(&p);

	/*Ecrire(“Choisir nombre de joueurs entre 2 et 8”)
	Lire(iNombre)

	Tanque (iNombre<2 ou iNombre>8) faire { //Si l’utilisateur rentre un nombre invalide
		Ecrire(“Choisir nombre de joueurs entre 2 et 8”)
		Lire(iNombre)
	Fin tant que
	Pour (i de 0 à iNombre-1, i pas de 1) faire { //Pour tous les joueurs
		Ecrire(“Choisir un nom pour le joueur : “, i+1)
		Lire(cdcNom) //Enregistrement du nom
		Ecrire(“Choisir un capital pour le joueur : “, i+1)
		Lire(iCapital) //Enregistrement du capital
		j=creation_joueur(cdcNom, iCapital) //Création du joueur avec les attribut rentrés précédemment
		ajout_liste(j, p.listeJoueur) //Ajout du joueur à la liste des joueur de la partie
	Fin pour
	Partie() //Lancement de la partie
	Fin
*/
}

void menu_continuer_partie() {
    printf("choix 2 continuer partie");
}

void menu_parametres() {
    printf("choix 3 parametre partie");
}

void menu_principal(void) {

    int iChoix=0;

    printf("1 - Nouvelle partie \n");
    printf("2 - Continuer partie \n");
    printf("3 - Paramètres \n");
    printf("4 - Quitter \n");

    while (iChoix!=4) {
        printf("Choisir une option : ");
        scanf("%d", &iChoix);
        printf("\n");
        switch (iChoix){
            case 1:
                menu_nouvelle_partie();
                break;
            case 2:
                menu_continuer_partie();
                break;
            case 3:
                menu_parametres();
                break;
            case 4:
                printf("folie");
                //system("exit");
                break;
            default :  /*    A COMPLETER    */
                      break;
               }
    }
}

