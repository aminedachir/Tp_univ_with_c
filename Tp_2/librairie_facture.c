#include <stdio.h>
int num_des_copies,prix,prix_5DA,prix_4DA,prix_3DA;
int main () {
    printf("Entrez le num des copies : ");
    scanf("%d", &num_des_copies);
    if (num_des_copies > 0){
        for (int i=0;i<=10;i++){
            prix_3DA = i*5;
        }
        for (int i=10;i<=30;i++){
            prix_4DA = i*4;
        }
        for (int i=0;i<num_des_copies-30;i++){
            prix_5DA = i*5;
        }
    }
    prix = prix_5DA + prix_4DA + prix_3DA;
    printf("%d\n", prix_5DA);
    printf("%d\n", prix_4DA);
    printf("%d\n", prix_3DA);
    printf("%d", prix);
}
