#include <stdio.h>
int a,b,x;
int main ()
{
    printf("Donnez la valeur de a :");
    scanf("%d", &a);
    printf("Donnez la valeur de b :");
    scanf("%d", &b);
    x = a;
    a = b;
    b = x;
    printf("a: %d\n", a);
    printf("b: %d", b);
}
