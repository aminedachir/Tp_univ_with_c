#include <stdio.h>
int a = 5;
int b = 6;
int main ()
{
    a = a+b;
    b = a-b;
    a = a-b;
    printf("a: %d\n", a);
    printf("b: %d", b);
}
