#include <stdio.h>
int table[5];
int min,max;
int main()
{
    for(int i=0;i<5;i++){
        printf("Entrez table[%d] : ",i);
        scanf("%d",&table[i]);
    }
    max = table[0];
    min = table[0];
    for(int i=1;i<5;i++){
        if(table[i]<min){
            min = table[i];
        }
        if(table[i]>max){
            max = table[i];
        }
    }
    printf("Min : %d\n",min);
    printf("Max : %d\n",max);
}
