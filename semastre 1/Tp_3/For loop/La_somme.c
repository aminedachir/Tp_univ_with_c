#include <stdio.h>
int n,s;
int main()
{
    printf("Entrez une valeur : ");
    scanf("%d",&n);
    s=0;
    printf("S=");
    for(int i=1;i<=n;i++){
        s=s+i;
        printf("%d",i);
        if(i<n){printf("+");}
    }
    printf("=%d\n",s);
    return 0;
}
