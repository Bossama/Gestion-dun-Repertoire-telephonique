
#include"Structeurs.h"
#include <windows.h>
#include<stdio.h>
#include <stdlib.h>


void affiche_contact_assoie(contact tab[], int nbr_contact)
{int i;
int num;
system("cls");
system("COLOR 1E");
system("COLOR 1e");
printf("\n\t\t Donner le nom de contact a afficher :\t");
               scanf("%d",&num);printf("\n\n");
 //printf("le nbr_contact = %d\n",nbr_contact);
    for(i=1;i<=nbr_contact;i++)
   {
      if(num==tab[i].num)
       {   printf("\n\t\t    contact associe a ''%d'' est \n",num);
           printf("      浜様様様様様様様様様様CONTACTE N^%d様様様様様様様様様様様様融\n",i);
		printf("      �   -----------------------------------------------------  �\n");
		printf("      �  (  nom       : %s                                      ) �\n",tab[i].nom);
        printf("      �                                                          �\n");
        printf("      �  (  prenom    : %s                                      ) �\n",tab[i].prenom);
        printf("      �                                                          �\n");
        printf("      �  (  numero    : %d                                      ) �\n",tab[i].num);
        printf("      �                                                          �\n");
        printf("      �  (  ncin      : %s                                      ) �\n",tab[i].ncin);
	    printf("      �   -----------------------------------------------------  �\n");
        printf("      藩様様様様様様様様様様様様様様様様様様様様様様様様様様様様夕\n");
         }

   }
}
