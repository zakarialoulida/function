#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("Entrer la valeur de A :");
    scanf("%d",&a);
    printf("Entrer la valeur de B :");
    scanf("%d",&b);
    signe(a,b);
    printf("\n le minimum est %d \n",minimum(a,b));
    printf("le maximum est %d\n",maximum(a,b));
    return 0;
}
void signe(int a,int b)
{
    if((a>0&&b>0)||(a<0&&b<0))
    {
        printf("les deux  nbrs sont de meme signe");
    }
    else
        printf("les deux  nbrs sont de signe opposee");

}
int minimum(int a,int b)
{
    if(a==b)
    {
        printf("les 2 nombres sont egaux");
        return a;
    }
    else if(a<b)
    {
        return a;
    }
    else

        return b;
}

int maximum(int a,int b)
{
    if(a==b)
    {
        printf("les 2 nombres sont egaux");
        return a;
    }
    else if(a<b)
    {
        return b;
    }
    else

        return a;
}
