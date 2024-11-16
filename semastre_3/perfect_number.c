#include <stdio.h>
#include <stdbool.h>

bool perfect(long n){
    int s=0;
    for (int i=1;i<=n/2;i++){
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
    int a;
    scanf("%d",&a);
    int i = 0;
    long n;
    while (i<a)
    {
        scanf("%ld",&n);
        if (perfect(n)){
            printf("the number %ld is perfect\n",n);
        }
        else{
            printf("the number is %ld not perfect\n",n);
        }
        i++;
    }

}

