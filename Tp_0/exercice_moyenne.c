#include <stdio.h>
int a,b,c,d,moyenne;
int main ()
{
    printf("donnez la valeur de a : ");
    scanf("%d", &a);
    printf("donnez la valeur de b : ");
    scanf("%d", &b);
    printf("donnez la valeur de c : ");
    scanf("%d", &c);
    printf("donnez la valeur de d : ");
    scanf("%d", &d);
    moyenne = (a+b+c+d)/4;
    printf("Moyenne : %d\n",moyenne);
    if (moyenne >= 10 && moyenne < 20){
        printf("Succed");
    }
    else if  (moyenne > 0 && moyenne < 10) {
        printf("Failed");
    }
    else {
        printf("Error");
    }
}
