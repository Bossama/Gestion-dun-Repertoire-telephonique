#include<stdio.h>
#include <stdlib.h>
#include"Structeurs.h"
#include <windows.h>

int ajout_contact(contact tab[],int nbr_contact)
{int i,n;
system("cls");
system("COLOR 1E");
system("COLOR 1e");
system("cls");
printf("\n\n");
printf("\n\n\t\t combient de contacte voulez vous ajoutez ?\n");
scanf("%d",&n);

for (i=1;i<=n;i++)
        {
        printf("\n\t            le contact  N::%d :  \n",i+nbr_contact);
        printf("      浜様様様様様様様様様様様様様様様様様様様様様様様様様様融\n");
		printf("         -----------------------------------------------------  \n");
		printf("        (>   nom             :                 ");scanf("%s",&tab[i+nbr_contact].nom);
        printf("                                                                \n");
        printf("        (>   prenom          :                 ");scanf("%s",&tab[i+nbr_contact].prenom);
        printf("                                                                \n");
        printf("        (>   numero          :                 ");scanf("%d",&tab[i+nbr_contact].num);
        printf("                                                                \n");
        printf("        (>   ncin            :                 ");scanf("%s",&tab[i+nbr_contact].ncin);
	    printf("         -----------------------------------------------------  \n");
        printf("      藩様様様様様様様様様様様様様様様様様様様様様様様様様様様様夕\n");
        }
return(n);
}

















//    printf(" nom             :  ");
//    scanf("%s",&tab[i+nbr_contact].nom);
//    printf("\n");
//
//    printf(" prenom          :  ");
//    scanf("%s",&tab[i+nbr_contact].prenom);
//    printf("\n");
//
//    printf(" numero          :  ");
//    scanf("%d",&tab[i+nbr_contact].num);
//    printf("\n");
//
//    printf(" ncin            :  ");
//    scanf("%s",&tab[i+nbr_contact].ncin);
//    printf("\n");
