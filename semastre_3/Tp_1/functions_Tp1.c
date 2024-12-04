#include <stdio.h>

void registre_table(int n,int table[n]){
    for (int i=0;i<n;i++){
        scanf("%d,",&table[i]);
    }
}

void print_table(int n,int table[n]){
    for(int i=0;i<n;i++){
        printf("%d ",table[i]);
    }
    printf("\n");
}

int selection_sort(int n,int table[n]){
    int x;
    for(int i=0;i<n-1;i++){
        int min = i;
        for(int j=i+1;j<n;j++){
            if(table[j]<table[min]){
                min = j;
            }
        }
        x = table[i];
        table[i] = table[min];
        table[min] = x;
    }
}

void reverse_table(int n,int table[n]){
    int table_1[n];
    int index = 0;
    for (int i=n-1 ; i>= 0 ; i--)
    {
            table_1[index] = table[i];
            index++;
    } 
    for(int i=0;i<n;i++){
        printf("%d ",table_1[i]);
    }
    printf("\n");
}



