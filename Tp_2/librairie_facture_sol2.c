#include <stdio.h>
int num_des_copies,prix,prix_5DA,prix_4DA,prix_3DA;
int main () {
    printf("Entrez le num des copies : ");
    scanf("%d", &num_des_copies);
    for (int i=0;i<=num_des_copies;i++) {
        if (i<=10){
            prix_5DA = i*5;
            }
        else if ((i>10) && (i<=30)){
            prix_4DA = (i-10)*4;
        }
        else if (i>30){
            prix_3DA = (i-30)*3;
        }
        else {
            printf("Error");
        }
    }
    prix = prix_3DA+prix_4DA+prix_5DA;
    printf("%d",prix);
}
