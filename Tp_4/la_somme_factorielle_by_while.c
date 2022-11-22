#include <stdio.h>
int f,n,s;
int main()
{
    s=0;
    printf("Entrez une valeur de n: ");
    scanf("%d",&n);
    printf("S=");
    int i=1;
    while(i<=n){
        f=1;
        int j=1;
        while(j<=i){
            f = f*j;
            j++;
        }
        s=s+f;
        printf("%d!",i);
        if(i<n){printf("+");}
        i++;
    }
    printf("=%d",s);

}
