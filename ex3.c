/*
D ́efinissez un alias pour votre structure chien et d ́eclarez un variable `a l’aide de celui-ci.
•Modifiez la m ́ethode principale du code ci-dessus.  
D ́eclarez une variable enti`ere ayantpour identifiant ”date” et une autre avec ”Date”.  
Que constatez-vous?
*/
#include <stdio.h>
#include <string.h>

typedef struct chien
{
    char name[256];
    int age;
    int size;
}Chien;

typedef struct date
{
   int jours;
   int mois;
   int annee;
}Date;

int main(void)
{
    Chien ch1 = {"toto",10,15};
    Date d1 = {10,8,1955};
    // date = {10,1,155}; Erreur car date existe pas 
    struct date d2 = {10,1,155}; // pas oublier le struct date
    return 0;
}
