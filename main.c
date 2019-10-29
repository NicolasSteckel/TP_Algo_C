#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define TAILLE 3


char cTabMorpion[TAILLE][TAILLE];
int i,j;


void afficherTab() // Creation du tableau et de son apparence
    {
           printf("\n\n\n");
           printf("+-----+\n"); //haut du plateau
           printf("|%c|%c|%c|\n", cTabMorpion[0][0], cTabMorpion[0][1], cTabMorpion[0][2]); //ligne 1
           printf("+-----+\n");
           printf("|%c|%c|%c|\n", cTabMorpion[1][0], cTabMorpion[1][1], cTabMorpion[1][2]); //ligne 2
           printf("+-----+\n");
           printf("|%c|%c|%c|\n", cTabMorpion[2][0], cTabMorpion[2][1], cTabMorpion[2][2]); //ligne 3
           printf("+-----+\n"); //bas du plateau
           printf("\n\n\n");


    }





void remplissageTab(){ // fonction gerant le changement de caracteres dans le tableau
    int col, ligne;

        printf("Tour Joueur 1 :\n\n");
        printf("Choisir ligne\n\n");
        scanf("%d", &ligne);
        printf("Choisir colonne\n\n");
        scanf("%d",&col);
        system("cls");


        cTabMorpion [ligne -1][col -1] ='X'; // On remplis la case choisie avec une croix
        afficherTab();

        printf("Tour Joueur 2 :\n\n");
        printf("Choisir ligne\n\n");
        scanf("%d", &ligne);
        printf("Choisir colonne\n\n");
        scanf("%d",&col);
        system("cls");

        cTabMorpion [ligne -1][col -1] ='O'; // On remplsi la case choisie avec un rond
        afficherTab();
}

int main()
{

system("cls");


   for (i=0; i<9; i++)
                {
                        system("cls");
                        afficherTab();
                        remplissageTab();
       }


return 0;
}

