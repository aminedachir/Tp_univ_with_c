#include <stdio.h>
int num_des_copies,prix,prix_5DA,prix_4DA,prix_3DA;
int main () {
    printf("Entrez le num des copies : ");
    scanf("%d", &num_des_copies);
    if (num_des_copies > 0){
        for (int i=0;i<=num_des_copies && (i<=10);i++){
            prix_5DA = i*5;
            }
        for (int i=0;i<=(num_des_copies-10) && (i<=20);i++){
            prix_4DA = i*4;
            }
        for (int i=0;i<=(num_des_copies-30);i++){
            prix_3DA = i*3;
            }
        prix = prix_5DA + prix_4DA + prix_3DA;
        printf("La facture est : %d DA", prix);
        }
    else {
        printf("Error");
    }
}
