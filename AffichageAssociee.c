
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
           printf("      ����������������������CONTACTE N^%d������������������������ͻ\n",i);
		printf("      �   -----------------------------------------------------  �\n");
		printf("      �  (  nom       : %s                                      ) �\n",tab[i].nom);
        printf("      �                                                          �\n");
        printf("      �  (  prenom    : %s                                      ) �\n",tab[i].prenom);
        printf("      �                                                          �\n");
        printf("      �  (  numero    : %d                                      ) �\n",tab[i].num);
        printf("      �                                                          �\n");
        printf("      �  (  ncin      : %s                                      ) �\n",tab[i].ncin);
	    printf("      �   -----------------------------------------------------  �\n");
        printf("      ����������������������������������������������������������ͼ\n");
         }

//    printf("nom       : %s\n",tab[i].nom);
//    printf("prenom    : %s\n",tab[i].prenom);
//    printf("numero    : %d\n",tab[i].num);
//    printf("ncin      : %s\n",tab[i].ncin);
//    //printf("l'adresse : %s\n",tab[i].adresse);
//    printf("************************\n\n");

   }
}
