
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
       printf("      �������������������� CONTACTE N^%d ����������������������ͻ\n",i);
		printf("      �   -----------------------------------------------------  �\n");
		printf("      �  (  nom       : %s                                      ) �\n",tab[i].nom);
        printf("      �                                                          �\n");
        printf("      �  (  prenom    : %s                                      ) �\n",tab[i].prenom);
        printf("      �                                                          �\n");
        printf("      �  (  numero    : %d                                      ) �\n",tab[i].num);
        printf("      �                                                          �\n");
        printf("      �  (  ncin      : %s                                      ) �\n",tab[i].ncin);
	    printf("      �   -----------------------------------------------------  �\n");
        printf("      �������������������������������������������������������ͼ\n");
         system("pause");

        }
   }
