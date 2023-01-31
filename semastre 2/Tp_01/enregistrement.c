#include <stdio.h>
struct date{
    int jour;
    char mois[10];
    int annee;
};
struct person{
    char nome[10];
    char prenome[10];
    int matricule;
    float moyenne;
    struct date d1;

};
int main(){
// Les donnes de person
    struct person table[5]={

    for (int i=0;i<5;i++){
        printf("Entrez votre nome : ");
        scanf("%s", &table.nome);
        printf("Entrez votre prenome : ");
        scanf("%s", &table.prenome);
        printf("Entrez votre matricule : ");
        scanf("%d", &table.matricule);
        printf("Entrez votre moyenne : ");
        scanf("%d", &table.moyenne);
        printf("Entrez votre jour de naissance : ");
        scanf("%d",&table.d1.jour);
        printf("Entrez votre mois de naissance : ");
        scanf("%s",&table.d1.mois);
        printf("Entrez votre annee de naissance : ");
        scanf("%d",&table.d1.annee);


    };
     };
 //L'affichage de Les information d'un person
    printf("Le nome est : %s\n" ,table.nome);
    printf("Le prenome est : %s\n" ,table.prenome);
    printf("Le matricule est : %d\n" ,table.matricule);
    printf("La date de naissance : %d/%s/%d\n",table.d1.jour,table.d1.mois,table.d1.annee);
    return 0;


}
