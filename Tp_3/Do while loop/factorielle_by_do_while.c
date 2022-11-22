#include <stdio.h>
int f,n;
int main()
{
    f=1;
    printf("Entrez une valeur de n: ");
    scanf("%d",&n);
    printf("S=");
    int i=1;
    do{
        f = f*i;
        printf("%d",i);
        if(i<n){printf("*");}
        i++;
    }while(i<=n);
    printf("=%d",f);

}

