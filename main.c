#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float addition(float a,float b)
{
    return a+b;
}
float soustraction(float a,float b)
{
    return a-b;
}
float multiplication(float a,float b)
{
    return a*b;
}
void division(float a,float b)
{
    if (b==0)
        {
            printf("Erreur de calcul\n");
        }
        else
            printf("Résultat de %.2f / %.2f est egale a %.2f",a,b,a/b);
}
void diffpos(float a,float b)
{
    if (a-b<0)
        {
            printf("Résultat de la difference positive de %.2f - %.2f = %.2f",a,b,(a-b)*-1);
        }
        else
            printf("Resultat de la difference positive de %.2f - %.2f = %.2f",a,b,a-b);
}
float puissance(int a,int b)
{
    return pow(a,b);
}
float max(float a,float b,float c)
{
    int tab[3]={a,b,c},valmax=a,i;
    for (i=0;i<3;i++)
    {
        if (tab[i]>valmax)
        {
            valmax=tab[i];
        }
    }
    return valmax;
}
float min(float a,float b,float c)
{
     int tab[3]={a,b,c},valmin=a,i;
    for (i=0;i<3;i++)
    {
        if (tab[i]<valmin)
        {
            valmin=tab[i];
        }
    }
    return valmin;
}

int main()
{
    int choix,d,e,v;
    float a,b,c;
    printf("Ce programme est une calculatrice a 8 choix\n");
    printf("----------    Calculatrice   ----------\n");
    printf("    1) Addition \n    2) Soustraction \n    3) Multiplication \n    4) Division \n    5) Difference Positive \n    6) Recherche Maximum \n    7) Recherche Du Minimum \n    8) Puissance \n\ Saisissez le numero de l'operation que vous voulez effectuer\n");
    scanf("%d",&choix);
    if (choix==1 || choix==2 || choix==3 || choix==4 || choix==5 )
    {
        printf("Saisissez le premier chiffre: ");
        scanf("%f",&a);
        printf("Saisissez saisir le deuxieme chiffre: ");
        scanf("%f",&b);
    }
    else if (choix==6 || choix==7)
    {
        printf("Saisissez saisir le premier chiffre: ");
        scanf("%f",&a);
        printf("Saisissez le deuxieme chiffre: ");
        scanf("%f",&b);
        printf("Saisissez le troisieme chiffre: ");
        scanf("%f",&c);
    }
    else if (choix==8)
    {
        printf(" Saisissez un chiffre: ");
        scanf("%d",&d);
        printf("Quelle puissance voulez-vous saisir au chiffre choisi ? ");
        scanf("%d",&e);
    }
    else
    {
        printf("Erreur de saisi");
    }
    switch(choix)
    {
    case 1:
        printf("Le resultat de %.2f + %.2f est egale a %.2f",a,b,addition(a,b));
        break;
    case 2:
        printf("Le resultat de %.2f - %.2f est egale a %.2f",a,b,soustraction(a,b));
        break;
    case 3:
        printf("Le resultat de %.2f * %.2f est egale a%.2f",a,b,multiplication(a,b));
        break;
    case 4:
        division(a,b);
        break;
    case 5:
       diffpos(a,b);
        break;
    case 6:
        printf("Le plus grand chiffre saisie est:  %.2f",max(a,b,c));
        break;
    case 7:
       printf("Le plus petit chiffre saisie est: %.2f",min(a,b,c));
        break;
    case 8:
        printf("Le resultat de %d a la puissance %d est egale a %.2f",d,e,puissance(d,e));
        break;
    }

    return 0;
}

