#include <stdio.h>
#include <stdbool.h>
bool perfect(int n){
    int s=0;
    for (int i=1;i<n;i++){
         if(n%i == 0){
             s = s+i;
         }
    }
    if (s==n){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    perfect(n);
    if (perfect(n)==true){
        printf("the number is perfect");
    }
    else{
        printf("the number is not perfect");
    }

}

