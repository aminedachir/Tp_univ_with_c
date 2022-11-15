#include <stdio.h>
int f,n,s;
int main()
{
    s=0;
    printf("Entrez une valeur de n: ");
    scanf("%d",&n);
    printf("S=");
    for(int i=1;i<=n;i++){
        f=1;
        for(int j=1;j<=i;j++){
            f = f*j;
        }
        s=s+f;
        printf("%d!",i);
        if(i<n){printf("+");}
    }
    printf("=%d",s);

}
