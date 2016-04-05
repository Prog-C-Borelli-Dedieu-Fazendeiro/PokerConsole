#include <stdio.h>
#include <stdlib.h>
#include "IHM.h"
#include "Joueur.h"
#include "Table_Physique\Partie.h"
#include "Table_Physique\cartes.h"
#include "libs/lib_liste.h"
#include <string.h>

#define lgNom 10

void Afficher_Joueur(Joueur * j)
{
    printf("pseudo : %s", j->sPseudo);
    printf("\n");
    printf("capital  %d", j->iCapital);
    printf("\n");
    printf("Etat  %d", j->iEtat);
    printf("\n");
    printf("Cartes : ");
    Afficher_Carte(&j->kPossession[0]);
    Afficher_Carte(&j->kPossession[1]);
}

void Afficher_Carte (Carte * kCarte) {
    printf("[");
    switch (kCarte->cCouleur){
        case COEUR:
            printf("CO");
            break;
        case CARREAU:
            printf("CA");
            break;
        case PIQUE:
            printf("PI");
            break;
        case TREFLE:
            printf("TR");
            break;
	}
	printf(" - ");
	if (kCarte->iValeur<=10) {
        printf("%d", kCarte->iValeur);
	}
	else {
        switch (kCarte->iValeur) {
        case 11:
            printf("Valet");
            break;
        case 12:
            printf("Dame");
            break;
        case 13:
            printf("Roi");
            break;
        }
	}
    printf("] \n");
}

void menu_nouvelle_partie()
{
    int iNombre, iCapital;
    char cNom[lgNom];
    Partie p;


    printf("Choisir nombre de joueurs entre 2 et 8 : ");
    scanf("%d", &iNombre);
    while (iNombre<2 || iNombre>8)
    {
        printf("Choisir nombre de joueurs entre 2 et 8 : ");
        scanf("%d", &iNombre);
    }
    creerPartie(&p, iNombre);
    for (int i=0; i<iNombre; i++)
    {
        Joueur j;
        printf("Choisir le nom du joueur : ");
        scanf("%s", cNom);
        printf("Choisir le capital du joueur : ");
        scanf("%d", &iCapital);
        creation_joueur(&j, cNom, iCapital);
        printf("pseudo : %s", j.sPseudo);
        printf("\n");
        printf("capital : %d", j.iCapital);
        printf("\n");
        Ajouter_elem_fin_liste_statique_generique(&p.listeJoueurs, &j, sizeof(Joueur));
    }

    void * pfAfficherJoueurs=&Afficher_Joueur;
    Afficher_liste_statique_generique(&p.listeJoueurs, pfAfficherJoueurs);

    //lancer_Partie(&p);
}

void menu_continuer_partie()
{
    printf("choix 2 continuer partie");
}

void menu_parametres()
{
    printf("choix 3 parametre partie");
}

void menu_principal(void)
{

    int iChoix=0;

    printf("1 - Nouvelle partie \n");
    printf("2 - Continuer partie \n");
    printf("3 - Paramètres \n");
    printf("4 - Quitter \n");

    while (iChoix!=4)
    {
        printf("Choisir une option : ");
        scanf("%d", &iChoix);
        printf("\n");
        switch (iChoix)
        {
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
