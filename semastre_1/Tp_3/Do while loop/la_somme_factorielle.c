#include <stdio.h>
int f,n,s;
int main()
{
    s=0;
    printf("Entrez une valeur de n: ");
    scanf("%d",&n);
    printf("S=");
    int i=1;
    do{
        f=1;
        int j=1;
        do{
            f = f*j;
            j++;
        }while(j<=i);
        s=s+f;
        printf("%d!",i);
        if(i<n){printf("+");}
        i++;
    }while(i<=n);
    printf("=%d",s);

}
