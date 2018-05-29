
#include"Structeurs.h"
#include <windows.h>
#include<stdio.h>
#include <stdlib.h>


//int supprimer_contact(contact tab[],int nbr_contact)
//
//{
//    int j,i,trouver;
//   char nom_supp[20];
//
//    printf("entrer le nom du contact que vous voulez supprimer\t: ");
//    scanf("%s",&nom_supp);
//
//    printf(" le nom du contact que vous voulez supprimer est %s\t: ",nom_supp);
//
//    i=0;
//    trouver=0;
//    while((i<nbr_contact)&&(trouver==0))
//    {
//        if((nom_supp==tab[i].nom))
//
//             trouver=1;
//
//        else
//             i++;
//
//    }
//
//
//    if(trouver==0)
//        printf("\nErreur : l'identifiant que vous avez saisi ne figure pas dans la liste des comptes.\n");
//
//    else
//    {
//        for(j=i;j<nbr_contact-1;j++)
//        {
//           tab[j]=tab[j+1];
//           printf("\n je suis la.\n");
//        }
//        nbr_contact--;
//    }
//    return (nbr_contact);
//
//}



int supprimer_contact(contact tab[],int nbr_contact,int num)
{int i, s=0;
system("cls");
    system("COLOR 1E");
    system("COLOR 1e");
    system("cls");
  for(i=1;i<=nbr_contact;i++)
    {
        if((tab[i].num)==num)
        {s++;
        if (i==nbr_contact){nbr_contact=nbr_contact-1;}
            do
            {
                tab[i]=tab[i+1];
                i++;
            }while(i<=nbr_contact);
            break;
        }
        else if(i==nbr_contact-1 && tab[i].num!=num)
        {
            printf("element a supprimer introuvable: ");
            break;
        }
    }
    nbr_contact=nbr_contact-1;


//printf("\n nbr_contact apres suprission = %d\n\n",nbr_contact);
return (s);
//system("pause");
}
