
#include<stdio.h>
#include<string.h>

typedef struct{
    char Nom[40];
    char Email[60];
    char Num_Telephone [30];
} Contact;
Contact Tele [100];
int nombre_total=0;

void Ajoute (){
    printf ("Tapez le nom du contact : \n");
    scanf (" %[^\n]",&Tele[nombre_total].Nom);
    printf ("Tapez le numero du telephone : \n");
    scanf (" %[^\n]",&Tele[nombre_total].Num_Telephone);
    printf ("Tapez l'email' du contact : \n");
    scanf (" %[^\n]",&Tele[nombre_total].Email);
    nombre_total++;
}
int Verification(){
      int i;
    char cherche[30];
    printf ("Tapez le nom que vous voulez chercher : \n");
    scanf (" %[^\n]",&cherche);
    int trouve=0;
    for (i=0;i<nombre_total;i++)
    {
        if(strcmp(cherche,Tele[i].Nom)==0)
        {
            return i;
        }
        else
        {
        printf ("le nom du contact n'existe pas !");
        return -1;
    }

}
}

int Recherche(){
    int i;
    char cherche[30];
    printf ("Tapez le nom que vous voulez chercher : \n");
    scanf (" %[^\n]",&cherche);
    int trouve=0;
    for (i=0;i<nombre_total;i++)
    {
        if(strcmp(cherche,Tele[i].Nom)==0)
        {
            printf ("le nom du contact est      :   %s\n",Tele[i].Nom);
            printf ("le numero  du telephone est:   %s\n",Tele[i].Num_Telephone);
            printf ("l'email du contact est :   :   %s\n",Tele[i].Email);

            return i;
        }
        else
        {
            printf ("le nom du contact n'existe pas !");
            return -1;
        }

    }

}
 void Affichage ()
 {
int i;

    for (i = 0; i < nombre_total; i++)
    {
        printf("le contact %d\n",i+1);
        printf("-------------------------------------------------------------\n");
        printf ("le nom du contact est      :   %s\n",Tele[i].Nom);
        printf ("le numero  du telephone est:   %s\n",Tele[i].Num_Telephone);
        printf ("l'email du contact est :   :   %s\n",Tele[i].Email);
    }
    printf("\n");

 }

void Supprimer (){
    printf("-------------------------------<<suppression>>-----------------------------------------\n");
    int i;
    int index=Recherche();
    if (index!=-1)
    {
        for(i=index;i<nombre_total-1;i++)
        {
            Tele[i]=Tele[i+1];
        }
        nombre_total--;
        printf("le contact a ete supprimer: \n");
    }
else
    printf("le nom n'exixste pas! \n");
}

void Modiffier(){
    printf("-------------------------------<<modification>>---------------------------------------\n");
     int index=Recherche();
    if (index!=-1)
    {
            printf("-----------------------------------------------------------------------------\n");
            printf ("Tapez nouveau numero du telephone : \n");
            scanf (" %[^\n]",Tele[index].Num_Telephone);
            printf ("Tapez le nouveau adress email du contact : \n");
            scanf (" %[^\n]",Tele[index].Email);
            printf("le contact a ete modiffier: \n");
    }
    else
     {
        printf("Le nom n'existe pas ! \n");
    }
}
void Menu(){
    int choix;

    do
    {
          printf("----------------------------------------<<  MENU  >>----------------------------------------\n");
          printf("0. sortir  \n");
          printf("1. Ajouter un contact  \n");
          printf("2. Affichage les contact  \n");
          printf("3. Modiffier un contact  \n");
          printf("4. Supprimer un contact  \n");
          printf("5. Recherche un contact  \n");
          printf("--------------------------------------------------------------------------------------------\n");
          printf("--------------------------------------------------------------------------------------------\n");

        printf("-------------------------------- please choisir votre choix --------------------------------\n ");
        scanf("%d",&choix);
        switch (choix){


        case 1 : {
                 printf("prin") ;
                 Ajoute();
                 break;

        }
        break;
        case 2 : Affichage ();
        break;
        case 3 : Modiffier();
        break;
        case 4 : Supprimer();
        break;
        case 5 : Recherche();
        break;
        case 0 : printf ("");
        break;
        default: printf("choix invalid!!!!");
        break;
      }

    } while(choix!=0);
}


int main(){

Menu ();

    return 0;
}
