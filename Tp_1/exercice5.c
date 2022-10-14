#include <stdio.h>
int a = 2;
int b = 4;
int c = 6;
int main()
{
    c = a+b+c;
    a = c-a-b;
    b = c-a-b;
    c = c-a-b;
    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d\n",c);
}
