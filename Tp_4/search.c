#include <stdio.h>
#include <string.h>
char ch[50];
int s_vo,s_co,s_no,x;
int main()
{
    s_vo = 0;
    s_co = 0;
    s_no = 0;
    printf("Entrez un Mot :");
    scanf("%s",&ch);
    for(int i=0;i<strlen(ch);i++){
        if((ch[i]=='a' || ch[i]=='e') || (ch[i]=='u' || ch[i]=='o') || (ch[i]=='i' || ch[i]=='y')){
            s_vo = s_vo + 1;
        }
        else{
            s_co = s_co + 1;
        }
        x = atoi(ch[i]);
        if((x*2)%2==0){
            s_no = s_no + 1;
        }
    }
    printf("nombre de voi : %d\n",s_vo);
    printf("nombre de const : %d",s_co);
    printf("nombre des nombres : %d",s_no);
}
