#include <stdio.h>
#include "functions_Tp1.c"

int main(){
    int n;
    scanf("%d",&n);
    int table[n];
    registre_table(n,table);
    printf("<----------This is The table reversed with another table--------->\n");
    reverse_table(n,table);
    reverse_without_table(n,table);
    printf("<--------This is The table reversed without another table-------->\n");
    print_table(n,table);
}