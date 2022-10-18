#include <stdio.h>

int number ;
int main ()
{
    printf("Donnez un num : ");
    scanf("%d", &number);
    if ((number%2) == 0){
        printf("pair");
    }
    else {
        printf("impair");
    }
}
