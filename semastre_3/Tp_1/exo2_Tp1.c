#include <stdio.h>
#include "functions_Tp2.c"

int main(){
    int n;
    scanf("%d",&n);
    int table[n];
    registre_table(n,table);
    print_table(n,table);
    reverse_table(n,table);
}
