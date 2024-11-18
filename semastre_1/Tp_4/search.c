#include <stdio.h>
#include <string.h>

int main()
{
    int s_vo = 0;
    int s_co = 0;
    int s_no = 0;
    int s_char = 0;
    printf("Entrez un Mot :");
    char ch[50];
    scanf("%s",&ch[50]);
    for(int i=0;i<strlen(ch);i++){
        if((ch[i]=='a' || ch[i]=='e') || (ch[i]=='u' || ch[i]=='o') || (ch[i]=='i' || ch[i]=='y')){
            s_vo+=1;
        }
        else if(((int)ch[i]<=57) && ((int)ch[i]>=48)){
            s_no+=1;
        }
        else if((((int)ch[i]<=47) && ((int)ch[i]>=32)) || (((int)ch[i]<=64) && ((int)ch[i]>=58)) || (((int)ch[i]<=96) && ((int)ch[i]>=91))){
            s_char+=1;
        }
        else{
            s_co+=1;
        }
    }
    printf("nombre de voi : %d\n",s_vo);
    printf("nombre de const : %d\n",s_co);
    printf("nombre des nombres : %d\n",s_no);
    printf("nombre des char : %d\n",s_char);
}
