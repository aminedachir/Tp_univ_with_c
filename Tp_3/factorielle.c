#include <stdio.h>
int f,n;
int main()
{
    f=1;
    printf("Entrez une valeur de n: ");
    scanf("%d",&n);
    printf("S=");
    for(int i=1;i<=n;i++){
        f = f*i;
        printf("%d",i);
        if(i<n){printf("*");}
    }
    printf("=%d",f);

}
