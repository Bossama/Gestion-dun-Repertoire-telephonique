
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
       printf("      ษอออออออออออออออออออ CONTACTE N^%d อออออออออออออออออออออออป\n",i);
		printf("      บ   -----------------------------------------------------  บ\n");
		printf("      บ  (  nom       : %s                                      ) บ\n",tab[i].nom);
        printf("      บ                                                          บ\n");
        printf("      บ  (  prenom    : %s                                      ) บ\n",tab[i].prenom);
        printf("      บ                                                          บ\n");
        printf("      บ  (  numero    : %d                                      ) บ\n",tab[i].num);
        printf("      บ                                                          บ\n");
        printf("      บ  (  ncin      : %s                                      ) บ\n",tab[i].ncin);
	    printf("      บ   -----------------------------------------------------  บ\n");
        printf("      ศอออออออออออออออออออออออออออออออออออออออออออออออออออออออผ\n");
         system("pause");
//    printf("nom       : %s\n",tab[i-1].nom);
//    printf("prenom    : %s\n",tab[i-1].prenom);
//    printf("numero    : %d\n",tab[i-1].num);
//    printf("ncin      : %s\n",tab[i-1].ncin);
    //printf("l'adresse : %s\n",tab[i].adresse);
   // printf("-----------------------------\n\n");
        }
   }
