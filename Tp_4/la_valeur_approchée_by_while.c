#include <stdio.h>
#include <math.h>
int n,f;
float x,s,m;
int main()
{
    printf("Entrez une valeur de x: ");
    scanf("%f",&x);
    printf("Entrez une valeur de n: ");
    scanf("%d",&n);
    s=1;
    m=1;
    printf("S=");
    int i=1;
    while(i<=n){
        m = m*x;
        f=1;
        int j=1;
        while(j<=i){
            f = f*j;
            j++;
        }
        if(i<1){printf("%.0f+",m);}
        else if (i==1){printf("x/%d+",f);}
        else {printf("(x^%d)/%d!",i,i);}
        s = s + (m/f);
        if(i>1&&i<n){printf("+");}
        i++;
    }
    printf("=%.2f\n",s);
    printf("%f",exp(x));
}

