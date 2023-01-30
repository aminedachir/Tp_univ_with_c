#include <stdio.h>
int a,b;
int main(){
    scanf("%d",&a);
    b=a/2;
    if(a%b==0){
        printf("non premier");
    }
    int i=1;
    while(i<=b){
        b=b-1;
        if(a%b==0){
            printf("premier");
        }
        i=i+1;
    }
}
