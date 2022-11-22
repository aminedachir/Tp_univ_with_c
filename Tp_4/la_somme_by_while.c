#include <stdio.h>
int s,n;
int main()
{
    printf("Entrez la valeur de n : ");
    scanf("%d",&n);
    printf("S=");
    int i=1;
    while(i<=n){
        s = s+i;
        printf("%d",i);
        if(i<n){printf("+");}
        i++;
    }
    printf("= %d",s);
    return 0;
}
