#include <stdio.h>
#include <stdbool.h>
bool perfect(long n){
    int s=0;
    for (int i=2;i<=n/2;i++){
         if(n%i == 0){
             s = s+i;
         }
    }
    if (s==n-1){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int a;
    scanf("%d",&a);
    long n;
    for(int i=0;i<a;i++)
    {
        scanf("%ld",&n);
        if (perfect(n)){
            printf("the number %ld : is perfect\n",n);
        }
        else{
            printf("the number %ld : is not perfect\n",n);
        }
    }
}