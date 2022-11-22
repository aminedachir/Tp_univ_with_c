#include <stdio.h>
int n,s,x;
int main()
{
    printf("Entrez une valeur : ");
    scanf("%d",&n);
    s=0;
    printf("S=");
    int i=1;
    while(i<=n){
        x = (i*2)*(i*2);
        s = s+x;
        printf("(%d^2)",i*2);
        if(i<n){printf("+");}
        i++;
    }
    printf("=%d",s);
    return 0;
}
