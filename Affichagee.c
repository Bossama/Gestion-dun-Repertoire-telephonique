
#include"Structeurs.h"
#include <windows.h>
#include<stdio.h>
#include <stdlib.h>


void afficher_tout_contact(contact tab[],int nbr_contact)
{int i=1;
system("cls");
system("COLOR 1E");
system("COLOR 1e");

    printf("\n\t\t   Affichage de %d Contact(s)\n\n",nbr_contact);

    for(i=1;i<=nbr_contact;i++)
       {
       printf("      浜様様様様様様様様様 CONTACTE N^%d 様様様様様様様様様様様融\n",i);
		printf("      �   -----------------------------------------------------  �\n");
		printf("      �  (  nom       : %s                                      ) �\n",tab[i].nom);
        printf("      �                                                          �\n");
        printf("      �  (  prenom    : %s                                      ) �\n",tab[i].prenom);
        printf("      �                                                          �\n");
        printf("      �  (  numero    : %d                                      ) �\n",tab[i].num);
        printf("      �                                                          �\n");
        printf("      �  (  ncin      : %s                                      ) �\n",tab[i].ncin);
	    printf("      �   -----------------------------------------------------  �\n");
        printf("      藩様様様様様様様様様様様様様様様様様様様様様様様様様様様�\n");
         system("pause");
//    printf("nom       : %s\n",tab[i-1].nom);
//    printf("prenom    : %s\n",tab[i-1].prenom);
//    printf("numero    : %d\n",tab[i-1].num);
//    printf("ncin      : %s\n",tab[i-1].ncin);
    //printf("l'adresse : %s\n",tab[i].adresse);
   // printf("-----------------------------\n\n");
        }
   }
