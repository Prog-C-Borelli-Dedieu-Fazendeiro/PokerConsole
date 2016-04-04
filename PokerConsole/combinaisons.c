#include <stdio.h>
#include <stdlib.h>
#include "combinaisons.h"


int valeur_combinaison(int iCartes_joueur[2], int iCartes_communes[5])
{
    int iValeur_combinaison = 0;

    int iTableau_cartes[7];

    // Remplissage du tableau avec les valeurs de chaque cartes.
    for(int i = 0; i < 2; i++)
    {
        iTableau_cartes[i] = iCartes_joueur[i];
    }

    for(int i = 0; i < 5; i++)
    {
        iTableau_cartes[i+2] = iCartes_communes[i];
    }

    for(int i = 0; i < 7; i++)
    {
        printf("\nCarte %i : %i",i+1 , iTableau_cartes[i]);
    }

    // On test ici toutes les combinaisons en commençant par les plus hautes.
    // Si l’on trouve une combinaison la valeur de celle-ci est enregistrée dans la variable iValeur_combinaison
    if(iValeur_combinaison == 0)
    {
        iValeur_combinaison = quinte_royale(iTableau_cartes, 7);
    }
    if(iValeur_combinaison == 0)
    {
        iValeur_combinaison = quinte_flush(iTableau_cartes, 7);
    }
    if(iValeur_combinaison == 0)
    {
        iValeur_combinaison = carre(iTableau_cartes, 7);
    }
    if(iValeur_combinaison == 0)
    {
        iValeur_combinaison = full(iTableau_cartes, 7);
    }
    if(iValeur_combinaison == 0)
    {
        iValeur_combinaison = couleur(iTableau_cartes, 7);
    }
    if(iValeur_combinaison == 0)
    {
        iValeur_combinaison = suite(iTableau_cartes, 7);
    }
    if(iValeur_combinaison == 0)
    {
        iValeur_combinaison = brelan(iTableau_cartes, 7);
    }
    if(iValeur_combinaison == 0)
    {
        iValeur_combinaison = double_paire(iTableau_cartes, 7);
    }
    if(iValeur_combinaison == 0)
    {
        iValeur_combinaison = simple_paire(iTableau_cartes, 7);
    }
    if(iValeur_combinaison == 0)
    {
        iValeur_combinaison = carte_haute(iTableau_cartes, 7);
    }
    if(iValeur_combinaison == 0)
    {
        return -1;
    }
    else
    {
        return iValeur_combinaison;
    }
}

int quinte_royale(int iTableau_cartes[], int iNombre_cartes)
{
    return 0;
}

int quinte_flush(int iTableau_cartes[], int iNombre_cartes)
{
    return 0;
}

int carre(int iTableau_cartes[], int iNombre_cartes)
{
    return 0;
}

int full(int iTableau_cartes[], int iNombre_cartes)
{
    return 0;
}

int couleur(int iTableau_cartes[], int iNombre_cartes)
{
    return 0;
}

int suite(int iTableau_cartes[], int iNombre_cartes)
{
    return 0;
}

int brelan(int iTableau_cartes[], int iNombre_cartes)
{
    return 0;
}

int double_paire(int iTableau_cartes[], int iNombre_cartes)
{
    return 0;
}

int simple_paire(int iTableau_cartes[], int iNombre_cartes)
{
    if (iNombre_cartes > 0)
    {
        int iValeur_combinaison = 0;
        int iValeur_combinaison_temp = 0;
        int iNombre_cartes_restantes = iNombre_cartes;
        int * iTableau_cartes_restantes;
        iTableau_cartes_restantes = malloc( iNombre_cartes_restantes * sizeof(int));
        if(iTableau_cartes_restantes == NULL)
        {
            printf("Allocation impossible");
            exit(EXIT_FAILURE);
        }
        for(int i = 0; i < iNombre_cartes_restantes; i++)
        {
            iTableau_cartes_restantes[i] = iTableau_cartes[i];
        }
        while(iNombre_cartes_restantes != 0)
        {
            for(int i = 1; i < iNombre_cartes_restantes; i++)
            {
                // On test s’il s’agit d’une paire avec la première carte du tableau
                // S’il s’agit d’une paire, on rentre la valeur de la carte dans iValeur_combinaison_temp
                // sinon on lui donne la valeur 0
                iValeur_combinaison_temp = iTableau_cartes_restantes[0] == iTableau_cartes_restantes[i] ? iTableau_cartes_restantes[i] : 0;
                // On modifie iValeur_combinaison uniquement si on a une meilleure paire.
                if((iValeur_combinaison_temp != 0) & (iValeur_combinaison < iValeur_combinaison_temp))
                {
                    iValeur_combinaison = iValeur_combinaison_temp;
                }
            }
            iNombre_cartes_restantes -= 1;
            if (iNombre_cartes_restantes > 0)
            {
                free(iTableau_cartes_restantes);
                iTableau_cartes_restantes = malloc( iNombre_cartes_restantes * sizeof(int));
                if(iTableau_cartes_restantes == NULL)
                {
                    printf("Allocation impossible");
                    exit(EXIT_FAILURE);
                }
                for(int i = 0; i < iNombre_cartes_restantes; i++)
                {
                    iTableau_cartes_restantes[i] = iTableau_cartes[iNombre_cartes - iNombre_cartes_restantes + i];
                }
            }
        }
        int iCartes_joueur[2];
        int iCartes_communes[5];

        for(int i = 0; i < 2; i++)
        {
            if(iTableau_cartes[i] == iValeur_combinaison)
            {
                iCartes_joueur[i] = 0;
            }
            else
            {
                iCartes_joueur[i] = iTableau_cartes[i];
            }
        }

        for(int i = 0; i < 5; i++)
        {
            if(iTableau_cartes[i+2] == iValeur_combinaison)
            {
                iCartes_communes[i] = 0;
            }
            else
            {
                iCartes_communes[i] = iTableau_cartes[i+2];
            }
        }

        // L’ordre de grandeur d’une paire est de 10000 ajouté à la valeur d’une combinaison et de la carte haute.
        // On définit la carte haute soit à partir de la main du joueur si le joueur dispose d’une paire à partir d’une
        // ou aucune carte de sa main soit à partir des cartes communes uniquement si le joueur à sa paire dans
        // sa propre main.
        // Exemple de valeur : Paire de dames avec 10 comme carte haute -> 11210.
        if((iTableau_cartes[0] != iTableau_cartes[1]) & (iValeur_combinaison !=0))
        {
            iValeur_combinaison = 10000 + iValeur_combinaison*100 + carte_haute(iCartes_joueur, 2)/100;
        }
        else if(iValeur_combinaison !=0)
        {
            iValeur_combinaison = 10000 + iValeur_combinaison*100 + carte_haute(iCartes_communes, 5)/100;
        }
        return iValeur_combinaison;
    }
    else
    {
        printf("Nombre de cartes invalide");
        exit(EXIT_FAILURE);
    }
}

int carte_haute(int iTableau_cartes[], int iNombre_cartes)
{
    if (iNombre_cartes > 0)
    {
        int iValeur_combinaison = 0;
        int iValeur_combinaison_temp = 0;
        for(int i = 0; i < iNombre_cartes; i++)
        {
            iValeur_combinaison_temp = iTableau_cartes[0] <= iTableau_cartes[i] ? iTableau_cartes[i] : 0;
            // On modifie iValeur_combinaison uniquement si on a une meilleure carte.
            if((iValeur_combinaison_temp != 0) & (iValeur_combinaison < iValeur_combinaison_temp))
            {
                iValeur_combinaison = iValeur_combinaison_temp;
            }
        }
        return (iValeur_combinaison*100)+iValeur_combinaison;
    }
    else
    {
        printf("Nombre de cartes invalide");
        exit(EXIT_FAILURE);
    }
}
