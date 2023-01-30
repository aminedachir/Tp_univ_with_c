#include <stdio.h>
int number;
int main ()
{
    printf("Donnez un nomber de 1 à 7 : ");
    scanf("%d", &number);
    switch (number){
        case 1: printf("Dimanche"); break;
        case 2: printf("Lundi");break;
        case 3: printf("Mardi");break;
        case 4: printf("Mercredi");break;
        case 5: printf("Jeudi");break;
        case 6: printf("Vendredi");break;
        case 7: printf("Samedi");break;
        default : printf("Error");
    }
}
