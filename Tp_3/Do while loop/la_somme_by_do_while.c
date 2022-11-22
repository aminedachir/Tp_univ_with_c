#include <stdio.h>
int n,s;
int main()
{
    printf("Entrez une valeur : ");
    scanf("%d",&n);
    s=0;
    printf("S=");
    int i=1;
    do{
        printf("%d",i);
        if(i<n){printf("+");}
        s=s+i;
        i++;
    }while(i<=n);
    printf("=%d\n",s);
    return 0;
}

