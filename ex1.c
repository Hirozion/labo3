/*
Definissez une structure pour representer un rectangle, contenant 
une longueur et une largeur + initialisation + modification 

Definissez une structure pour repr ́esenter un chien, contenant les informations sur son 
nom, son age, son poids et son sexe + initialisation + modification 
*/

#include <stdio.h>

struct Rectangle
{
   int longueur;
   int largeur;
};
struct Chien
{
    char name[256];
    int age;
    int size;
    char sexe[25];
};

typedef struct Rectangle Rectangle; //permet de remplacer struct Rectangle par Rectangle
typedef struct Chien Chien;

void main(void)
{
    Rectangle rec = {10,20};
    printf("un rectange avec une longueur de %d et une largeur de %d\n",rec.longueur, rec.largeur);
    rec.longueur = 45;
    rec.largeur = 12;
    printf("un rectange avec une longueur de %d et une largeur de %d\n",rec.longueur, rec.largeur);

    Chien chien1 = {"toto",12,125,"Male"};
    printf("Name %s | Size %d | Age %d | Sexe %s",chien1.name,chien1.size,chien1.age,chien1.sexe);
}
