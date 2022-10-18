#include <stdio.h>
int num_des_copies,prix,prix1,prix2,copies;

int main ()
{
    printf("Entrez le num des copies : ");
    scanf("%d", &num_des_copies);
    if (num_des_copies > 30){
        copies = num_des_copies-20;
        prix2 = copies*3;
    }
    else if ((copies > 10) && (copies <= 30)) {
        copies = num_des_copies-10;
        prix1 = copies*4;
    }
    else if (copies <= 10) {
            prix = num_des_copies*5;
    }
    else {
        printf("Error");
    }
    prix = prix + prix1 + prix2;
    printf("%d", prix);
}
