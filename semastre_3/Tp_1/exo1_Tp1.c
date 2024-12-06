#include <stdio.h>
#include "functions_Tp1.c"

int main(){
    int n;
    scanf("%d",&n);
    int table[n];
    registre_table(n,table);
    printf("<------This is the unsorted array------>\n");
    print_table(n,table);
    selection_sort(n,table);
    printf("<------This is the sorted array------>\n");
    print_table(n,table);
}