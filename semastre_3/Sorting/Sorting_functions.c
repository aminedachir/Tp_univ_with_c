#include <stdio.h>

void selection_sort(int n,int table[n]){
    int min,z;
    for(int i=0;i<n;i++){
        min = i;
        for(int j=i+1;j<n;j++){
            if(table[j]<table[min]){min=j;}
        }
        z = table[min];
        table[min] = table[i];
        table[i] = z;

    }
}
void bubble_sort(int n,int table[n]){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(table[j]<table[i]){
                int x = table[i];
                table[i] = table[j];
                table[j] = x;
            }
        }
    }
}
void insertion_sort(int n,int table[n]){
    int key,j;
    for(int i=1;i<n;i++){
        key = table[i];
        j= i-1;
        while(j>=0 && table[j]>key){
            table[j+1] = table[j];
            j = j-1;
        }
        table[j+1] = key;
    }
}
void Merge(int n,int l,int mid,int r,int table[n]){
    int n1 = mid-l +1;
    int n2 = r-mid;
    int table1[n1];
    int table2[n2];
    for(int i=0;i<n1;i++){
        table1[i] = table[l+i];
    }
    for(int i=0;i<n2;i++){
        table1[i] = table[mid+1+i];
    }
    int j=0;
    int i=0;
    int k=l;
    while(i<n1 && j<n2){
        if(table1[i]<=table2[j]){
            table[k] = table1[i];
            i++;
        }
        else{
            table[k] = table2[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        table[k] = table1[i];
        i++;
        k++;
    }
    while(j<n2){
        table[k] = table2[j];
        j++;
        k++;
    }
}
void merge_sort(int n,int table[n],int left,int right){
    if(left<right){
        int mid = left+(right-left)/2;
        merge_sort(n,table,left,mid);
        merge_sort(n,table,mid+1,right);
        Merge(n,left,mid,right,table);
    }
}
int partition(int n,int table[n],int left,int right){
    int pivot;
    int i = left-1;
    pivot = table[right];
    for(int j=left;j<right;j++){
        if(table[j]<pivot){
            i++;
            int temp = table[i];
            table[i] = table[j];
            table[j] = temp;
        }
    }
    int temp = table[i+1];
    table[i+1] = table[right];
    table[right] = temp;
    return i+1;
}
void quick_sort(int n,int table[n],int left,int right){
    if(left<right){
        int pivot_ = partition(n,table,left,right);
        quick_sort(n,table,left,pivot_-1);
        quick_sort(n,table,pivot_+1,right);
    }
}
int main (){
    int n;
    scanf("%d",&n);
    int table[n];
    for(int i=0;i<n;i++){
        scanf("%d,",&table[i]);
    }
    quick_sort(n,table,0,n-1);
    for(int i=0;i<n;i++){
        printf("%d ",table[i]);
    }
    printf("\n");
}