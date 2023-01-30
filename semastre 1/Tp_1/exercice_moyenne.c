#include <stdio.h>
float a,b,c,d,moyenne;
int main ()
{
    printf("donnez la valeur de a : ");
    scanf("%f", &a);
    printf("donnez la valeur de b : ");
    scanf("%f", &b);
    printf("donnez la valeur de c : ");
    scanf("%f", &c);
    printf("donnez la valeur de d : ");
    scanf("%f", &d);
    moyenne = (a+b+c+d)/4;
    printf("Moyenne : %f\n",moyenne);
    if ((moyenne >= 10) && (moyenne < 20)){
        printf("Succed");
    }
    else if  ((moyenne > 0) && (moyenne < 10)) {
        printf("Failed");
    }
    else {
        printf("Error");
    }
}
