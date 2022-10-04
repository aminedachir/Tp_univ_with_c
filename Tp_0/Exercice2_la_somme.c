#include <stdio.h>
int a;
int b;
int somme;

int main ()
{
    printf("Entrez la valeur de a :");
    scanf("%d", &a);
    printf("Entrez la valeur de b :");
    scanf("%d", &b);
    somme = a+b;
    printf("La somme est : %d", somme);
}
