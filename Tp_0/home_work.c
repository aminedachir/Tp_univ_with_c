#include <stdio.h>
int a,b,c,delta,X1,X2,jdr1,jdr2;
int main ()
{
    printf("Entrez la valeur de a:");
    scanf("%d", &a);
    printf("Entrez la valeur de b:");
    scanf("%d", &b);
    printf("Entrez la valeur de c:");
    scanf("%d", &c);
    delta = b*b-4*a*c;
    printf("%d\n", delta);
    jdr1 = -b-(delta/8);
    jdr2 = 2*a;
    X1 = jdr1/jdr2;
    printf("%d", X1);
}
