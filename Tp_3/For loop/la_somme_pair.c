#include <stdio.h>
int n,s,x;
int main()
{
    printf("Entrez une valeur : ");
    scanf("%d",&n);
    s=0;
    printf("S=");
    for(int i=1;i<=n;i++){
        x = (i*2)*(i*2);
        s = s+x;
        printf("(%d^2)",i*2);
        if(i<n){printf("+");}
    }
    printf("=%d",s);
    return 0;
}

