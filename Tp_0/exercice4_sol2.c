#include <stdio.h>
int a = 4;
int b = 3;
int x;
int main ()
{
    a = a-(a%b);
    b = b+(a%b);
    printf("a: %d\n", a);
    printf("b: %d", b);
}
