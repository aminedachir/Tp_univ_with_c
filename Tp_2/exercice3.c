#include <stdio.h>
int year;
int main ()
{
    printf(" Entrez une année : ");
    scanf("%d", &year);
    if ((year%4 == 0) && ((year%400 == 0)||(year%100 != 0))) {
        printf("une année bissextille");
        }
    else {
        printf("une année normal");
    }
}
