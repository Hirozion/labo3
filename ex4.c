/*
•Definissez une  ́enum ́eration pour les jours de la semaine
•Ecrivez une fonction recevant en parametre un  ́element de cette  ́enumeration et qui 
utilise une instruction switch pour afficher le nom du jour recu
*/
/*----------------------------------------------------------------------------------*/
#include <stdio.h>
#include <string.h>
/*----------------------------------------------------------------------------------*/
enum jourSem {lundi,mardi,mercredi,jeudi,vendredi,samedi,dimanche};
typedef enum jourSem JourSem;
/*----------------------------------------------------------------------------------*/
void afficheJourSemaine(JourSem jour);
/*----------------------------------------------------------------------------------*/
void main(void)
{
    JourSem j1 = lundi;
    JourSem j2 = mardi;
    /*mercr, jeudi, vendredi, samedi*/
    JourSem j3 = dimanche;
    afficheJourSemaine(j1);
    afficheJourSemaine(j2);
    afficheJourSemaine(j3);
}
/*----------------------------------------------------------------------------------*/
void afficheJourSemaine(JourSem jour)
{
    switch (jour)
    {
    case lundi:
        printf("jour semaine = lundi\n");
        break;
    case mardi:
        printf("jour semaine = mardi\n");
        break;
    case dimanche:
        printf("jour semaine = dimanche\n");
        break;
    default:
        printf("Error\n");
        break;
    }
}
/*----------------------------------------------------------------------------------*/