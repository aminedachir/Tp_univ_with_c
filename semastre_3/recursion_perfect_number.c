#include <stdio.h>
#include <stdbool.h>
bool perfect(int i,int s, long n){
    if (i<=n/2){
        if(n%i == 0){
            return perfect(i+1, s+i, n);
        }else{
            return perfect(i+1, s, n);
        }
    }
    else{
        return s==n-1;
    }
}
int main(){
    int a;
    scanf("%d",&a);
    long n;
    for(int i=0;i<a;i++)
    {
        scanf("%ld",&n);
        if (perfect(2, 0, n)){
            printf("the number %ld is perfect\n",n);
        }
        else{
            printf("the number is %ld not perfect\n",n);
        }
    }
}