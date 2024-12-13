#include <stdio.h>
#include "functions_Tp1.c"

int main(){
    int n;
    scanf("%d",&n);
    int table[n];
    registre_table(n,table);
    printf("le nombre total d'elements est : ");
    int s = nombre_total(n,table);
    printf("%d\n",s);
}