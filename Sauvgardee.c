
#include<stdio.h>
#include <stdlib.h>
#include"Structeurs.h"
#include <windows.h>

void sauvegarder(contact tab[],int nbr_contact)
{int i,n;

FILE *fichier = NULL;
printf("...Sauvgarde TERMINER. \n");
fichier = fopen("contactes.txt", "a+");

    fseek(fichier, 0, SEEK_END); // place le curseur � la fin du fichier

    for (i=1;i<=nbr_contact;i++){
         if (fichier != NULL)
    {// On peut lire et �crire dans le fichie
     // On l'�crit dans le fichier

         fprintf(fichier,"%s\t\t %s\t\t %d\t\t %s\t\t\n",tab[i].nom,tab[i].prenom,tab[i].num,tab[i].ncin);

       }
    else
    // On affiche un message d'erreur si on veut
        printf("Impossible d'ouvrir le fichier contactes.txt");
    }
    fclose(fichier);


}










































//#include <stdio.h>
//#include "prototypes.h"
//#include "Structeurs.h"
//
//
//void sauvegarder(contact tab[],int nbr_contact)
//{
//    FILE *fichier;
//    int i;
//
//    fichier=fopen("contactes.txt","a+");
//    fseek(fichier,0,SEEK_END);
//
//    for(i=0;i<nbr_contact;i++)
//    {
//         fprintf(fichier,"%s\t\t %s\t\t %d\t\t %s\t\t\n",tab[i].nom,tab[i].prenom,tab[i].num,tab[i].ncin);
//    }
//    fclose(fichier);
//}
