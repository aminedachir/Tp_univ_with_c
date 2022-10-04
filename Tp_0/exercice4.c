#include <stdio.h>
int a = 4;
int b = 3;
int x;
int main ()
{
    x = a;
    a = b;
    b = x;
    printf("a: %d\n", a);
    printf("b: %d", b);
}
