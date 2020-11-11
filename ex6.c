/*
• ́Ecrivez une procedure qui change la valeur d’une entier dont l’adresse est passee en parametre,
 en la multipliant par 2.
 • ́Ecrivez  une  procedure  qui   ́echange  les  valeur  de  deux  variables  entieres,  
 dont  les adresses sont passees en parametres
 */
#include <stdio.h>
#include <string.h>
/*----------------------------------------------------------------------------------*/
void doubleValues(int *nb);
void swapValues(int *nb1, int *nb2);
/*----------------------------------------------------------------------------------*/
void main(void)
{
    int nb = 10;
    int nb1 = 20;
    int nb2 = 30;
    //déclaration + initialisation pointeur qui pointe vers nb
    int *pnb = &nb;
    int *pnb1 = &nb1;
    int *pnb2 = &nb2;
    doubleValues(pnb);
    printf("values = %d\n",nb);
    printf("values avant fonction nb1 = %d et nb2 = %d\n",nb1, nb2);
    swapValues(pnb1, pnb2);
    printf("values apres nb1 = %d nb2 = %d\n",nb1, nb2);
}
/*----------------------------------------------------------------------------------*/
void doubleValues(int *nb)
{
    *nb *= 2;
}
void swapValues(int *nb1, int*nb2)
{
    int temp = *nb1;
    *nb1 = *nb2;
    *nb2 = temp;
}