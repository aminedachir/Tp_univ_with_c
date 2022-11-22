#include <stdio.h>
float x,s;
int n;
int main()
{
    s=1;
    printf("Entrez une valeur de x: ");
    scanf("%f",&x);
    printf("Entrez une valeur de n: ");
    scanf("%d",&n);
    printf("S=");
    int i=1;
    do{
        s = s*x;
        printf("%.2f",x);
        if(i<n){printf("*");}
        i++;
    }while(i<=n);
    printf("=%.2f",s);
}
