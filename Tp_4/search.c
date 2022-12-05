#include <stdio.h>
char ch[50];
int s_vo;
int main()
{
    s_vo = 0;
    scanf("%s",&ch);
    for(int i=0;i<50;i++){
        if(ch[i]=="a" || ch[i]=="e" || ch[i]=="u" || ch[i]=="o" || ch[i]=="i" || ch[i]=="y"){
            s_vo = s_vo + 1;
        }
    }
    printf("%d",s_vo);
}
