#include <stdio.h>
int a,b,reset;
int main ()
{
    printf("Donnez la valeur de a :");
    scanf("%d", &a);
    printf("Donnez la valeur de b :");
    scanf("%d", &b);
    reset = a%b;
    printf("le reset est : %d", reset);
}

