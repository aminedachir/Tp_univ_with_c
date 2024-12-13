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

int swap(int table[],int i,int k){
    int x = table[i];
    table[i] = table[k];
    table[k] = x; 
}

int selection_sort(int n,int table[n]){
    for(int i=0;i<n-1;i++){
        int min = i;
        for(int j=i+1;j<n;j++){
            if(table[j]<table[min]){
                min = j;
            }
        }
        swap(table,i,min);
    }
}

void reverse_table(int n,int table[n]){
    int table_1[n];
    int index = 0;
    for (int i=n-1;i>=0;i--){
            table_1[index++] = table[i];
    } 
    for(int i=0;i<n;i++){
        printf("%d ",table_1[i]);
    }
    printf("\n");
}

void reverse_without_table(int n,int table[n]){
    int k=n-1;
    for (int i=0;i<n/2;i++){
        swap(table,i,k--);
    }
}
int nombre_total(int n,int table[n]){
    int s = 0;
    for(int i=0;i<n;i++){
        s += table[i];
    }
    return s*2;
}
/*
void add_element(int n,int table_[n],int pos,int number){
    table_[pos] = number
    
}*/