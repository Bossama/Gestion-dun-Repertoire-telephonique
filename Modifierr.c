
#include"Structeurs.h"
#include <windows.h>
#include<stdio.h>
#include <stdlib.h>

void modifier_contact(contact tab[], int nbr_contact, int num)
{int i;
system("cls");
system("COLOR 1E");
system("COLOR 1e");
system("cls");
    printf("\n\t\t  Donner le num de contact a modifier :\t");
               scanf("%d",&num);

    for(i=1;i<=nbr_contact;i++)
   {
       if(num==tab[i].num)
       {//affichage de lencien contacte

//        printf("      ����������������������CONTACTE N^%d������������������������ͻ\n",i);
//		printf("      �   -----------------------------------------------------  �\n");
//		printf("      �  (  nom       : %s                                      ) �\n",tab[i-1].nom);
//        printf("      �                                                          �\n");
//        printf("      �  (  prenom    : %s                                     ) �\n",tab[i-1].prenom);
//        printf("      �                                                          �\n");
//        printf("      �  (  numero    : %d                                      ) �\n",tab[i-1].num);
//        printf("      �                                                          �\n");
//        printf("      �  (  ncin      : %s                                      ) �\n",tab[i-1].ncin);
//	    printf("      �   -----------------------------------------------------  �\n");
//        printf("      ����������������������������������������������������������ͼ\n");

        printf("\n\t      le nouveau contact  N::%d :  \n",i);
        printf("      ����������������������������������������������������������ͻ\n");
		printf("         -----------------------------------------------------  \n");
		printf("        (>   nom             :%s  ------->       ",tab[i].nom);scanf("%s",&tab[i].nom);
        printf("                                                                \n");
        printf("        (>   prenom          :%s  ------->       ",tab[i].prenom);scanf("%s",&tab[i].prenom);
        printf("                                                                \n");
        printf("        (>   numero          :%d  ------->       ",tab[i].num);scanf("%d",&tab[i].num);
        printf("                                                                \n");
        printf("        (>   ncin            :%s  ------->       ",tab[i].ncin);scanf("%s",&tab[i].ncin);
	    printf("         -----------------------------------------------------  \n");
        printf("      ����������������������������������������������������������ͼ\n");
        system("pause");
//    printf("nouveau nom            :   ");
//    scanf("%s",&tab[i].nom);
//    printf("\n");
//
//    printf("nouveau prenom          :  ");
//    scanf("%s",&tab[i].prenom);
//    printf("\n");
//
//    printf("nouveau numero          :  ");
//    scanf("%d",&tab[i].num);
//    printf("\n");
//
//    printf("nouveau ncin            :  ");
//    scanf("%s",&tab[i].ncin);
//    printf("\n");

    //printf("nouveau l'adresse       :  ");
//    scanf("%s",&tab[i].adresse);
    //printf("\n");

}
   }}
