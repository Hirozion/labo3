/*
Declarez deux variables entieres int et affichez les valeurs de leurs adresses respectives.
Qu’observez-vous?
•Meme question mais avec des variables entieres char.  
Qu’observez-vous?  
Que pouvez-vous en conclure?
•Trouvez combien de bytes sont utilises pour representer une adresse sur votre systeme(utilisezsizeof()).  
Quel est le rapport entre ce nombre et votre systeme?
*/
#include <stdio.h>

void main(void)
{
    int nb1 = 10;
    int nb2 = 20;
    int nb3 = 8888;
    int nb4 = 45;
    printf("%p size of int %d\n",&nb1,sizeof(int)); // 0061FF1C
    printf("%p size of int %d\n",&nb2,sizeof(int)); // 0061FF18
    printf("%p size of int %d\n",&nb3,sizeof(int)); // 0061FF14
    printf("%p size of int %d\n",&nb4,sizeof(int)); // 0061FF10
    // emplacement mémoire 4 octets  

    char str1 = 1;
    char str2 = 2;
    char str3 = 3;
    printf("%p size of char %d\n",&str1,sizeof(str1)); // 0061FF0F
    printf("%p size of char %d\n",&str2,sizeof(str2)); // 0061FF0E
    printf("%p size of char %d\n",&str3,sizeof(str3)); // 0061FF0D
    // emplacement mémoire 1 octets de F -> E -> D

    // taille de sizeof dépend de OS 32 bits 64 bits

}