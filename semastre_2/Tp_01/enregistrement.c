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
    struct date d1;
};
int main(){
// Les donnes de person
    struct person p1;
    printf("Entrez votre nome : ");
    scanf("%s", &p1.nome);
    printf("Entrez votre prenome : ");
    scanf("%s", &p1.prenome);
    printf("Entrez votre matricule : ");
    scanf("%d", &p1.matricule);
    printf("Entrez votre jour de naissance : ");
    scanf("%d",&p1.d1.jour);
    printf("Entrez votre mois de naissance : ");
    scanf("%s",&p1.d1.mois);
    printf("Entrez votre annee de naissance : ");
    scanf("%d",&p1.d1.annee);
 //L'affichage de Les information d'un person
    printf("Le nome est : %s\n" ,p1.nome);
    printf("Le prenome est : %s\n" ,p1.prenome);
    printf("Le matricule est : %d\n" ,p1.matricule);
    printf("La date de naissance : %d/%s/%d\n",p1.d1.jour,p1.d1.mois,p1.d1.annee);
    return 0;
}
