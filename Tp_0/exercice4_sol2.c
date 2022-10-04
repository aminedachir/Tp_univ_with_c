#include <stdio.h>
int a,b;
int main ()
{
    printf("Donnez la valeur de a :");
    scanf("%d", &a);
    printf("Donnez la valeur de b :");
    scanf("%d", &b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("a: %d\n", a);
    printf("b: %d", b);
}
