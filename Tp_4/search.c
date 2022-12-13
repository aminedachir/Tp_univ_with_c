#include <stdio.h>
#include <string.h>
char ch[50];
int s_vo,s_co,s_no,s_char;
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
        else if(((int)ch[i]<=57) && ((int)ch[i]>=48)){
            s_no = s_no + 1;
        }
        else if((((int)ch[i]<=47) && ((int)ch[i]>=32)) || (((int)ch[i]<=64) && ((int)ch[i]>=58)) || (((int)ch[i]<=96) && ((int)ch[i]>=91))){
            s_char = s_char + 1;
        }
        else{
            s_co = s_co + 1;
        }

    }
    printf("nombre de voi : %d\n",s_vo);
    printf("nombre de const : %d\n",s_co);
    printf("nombre des nombres : %d\n",s_no);
    printf("nombre des char : %d\n",s_char);
}
