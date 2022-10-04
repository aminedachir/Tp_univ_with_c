#include <stdio.h>
int a,b,c,delta,X1,X2;
int main ()
{
    printf("Entrez la valeur de a:");
    scanf("%d", &a);
    printf("Entrez la valeur de b:");
    scanf("%d", &b);
    printf("Entrez la valeur de c:");
    scanf("%d", &c);
    delta = b*b-4*a*c;
    printf("Delta : %d\n", delta);
    X1 = (-b-(delta/8))/(2*a);
    printf("X1 : %d\n", X1);
    X2 = (-b+(delta/8))/(2*a);
    printf("X2 : %d", X2);
}
