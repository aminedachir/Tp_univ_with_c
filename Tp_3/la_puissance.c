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
    for (int i=1;i<=n;i++){
        s = s*x;
        printf("%.2f",x);
        if(i<n){printf("*");}
    }
    printf("=%.2f",s);
}
