/*
Definissez une structure pour representer une personne avec son nom, prenom, adresse 
et date de naissance et initialisez une variable de ce type.

Modifiez votre structure chien en ajoutant un champ de type structure personne pour representer son proprietaire.
*/

#include <stdio.h>
#include <string.h>


typedef struct proprio
{
    char name[256];
    char surname[256];
    char address[256];
} Proprio;

typedef struct chien
{
    char name[256];
    int age;
    int size;
    char sexe[25];
    Proprio proprio;

} Chien;

void main(void)
{
    Proprio p1 = {"Martin","Deprez","chemin de velaine"};
    Chien ch1 = {"Ona",4,12,"F",p1};
    printf("Le proprio de %s est %s\n",ch1.name,ch1.proprio.name);
}