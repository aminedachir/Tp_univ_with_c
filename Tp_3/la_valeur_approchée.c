#include <stdio.h>
int n,f;
float x,s,m;
int main()
{
    printf("Entrez une valeur de x: ");
    scanf("%f",&x);
    printf("Entrez une valeur de n: ");
    scanf("%d",&n);
    s=0;
    m=0;
    printf("S=");
    for (int i=0;i<=n;i++){
        m = m*x;
        m++;
        f=1;
        for(int j=1;j<=i;j++){
            f = f*j;
        }
        if(i<1){printf("%.0f+",m);}
        else if (i==1){printf("x/%d+",f);}
        else {printf("(x^%d)/%d!",i,i);}
        s = s + (x/f);
        if(i>1&&i<n){printf("+");}
    }
    printf("=%.2f",s);
}
