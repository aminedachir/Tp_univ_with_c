#include <stdio.h>
int number;
int main ()
{
    printf("Donnez un num : ");
    scanf("%d", &number);
    if (number < 0) {
        number = (-1)*(number);
        printf("La valeur absolue est : %d", number);
    }
    else {
        printf("La valeur absolue est : %d", number);
    }

}
