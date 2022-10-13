#include <stdio.h>
int a,b,c;
int main ()
{
    printf("Donnez la valeur de a : ");
    scanf("%d",&a);
    printf("Donnez la valeur de b : ");
    scanf("%d",&b);
    printf("Donnez la valeur de c : ");
    scanf("%d",&c);
    if (a<b){
        if (b<c){printf("%d\n%d\n%d",a,b,c);}
        else{printf("%d\n%d\n%d",a,c,b);}
    }
    else if (b<a){
        if (a<c){printf("%d\n%d\n%d",b,a,c);}
        else {printf("%d\n%d\n%d",b,c,a);}
    }
    else if (c<b) {
        if (b<a) {printf("%d\n%d\n%d",c,b,a);}
        else {printf("%d\n%d\n%d",c,a,b);}
    }
}
