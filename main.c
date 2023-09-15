#include <stdio.h>
#include <stdlib.h>
int saisie(){
printf("entrer le nbr d'etudiant ");
int a;
scanf("%d",&a);
return a;
}
int main()
{
    int nbr=saisie();
    float tab1[]={};
    float s;
    for(int i=0;i<=nbr;i++) {
    printf("Entrer la note du premier etudiant tab1[%d]",i);
    scanf("tab1[%f]",&tab1[i]);
    s+=tab1[i];
    }


    return 0;
}
