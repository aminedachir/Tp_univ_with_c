#include <stdio.h>
int year;
int main ()
{
    printf(" Entrez une ann�e : ");
    scanf("%d", &year);
    if ((year%4 == 0) && ((year%400 == 0)||(year%100 != 0))) {
        printf("une ann�e bissextille");
        }
    else {
        printf("une ann�e normal");
    }
}
