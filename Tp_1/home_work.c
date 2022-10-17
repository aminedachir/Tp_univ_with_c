#include <stdio.h>
#include <math.h>
int a,b,c,delta,X1,X2,X;
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
    if (delta > 0){
        printf("Il y a deux solutions\n");
        X1 = (-b-(sqrt(delta)))/(2*a);
        printf("X1 : %d\n", X1);
        X2 = (-b+(sqrt(delta)))/(2*a);
        printf("X2 : %d\n", X2);
    }
    else if (delta == 0){
        X = ((-b)/2*a);
        printf("Il y a un double solutions \n");
        printf("X : %d\n", X);
    }
    else {
        printf("Il y a Pas de solution\n");
    }
}
