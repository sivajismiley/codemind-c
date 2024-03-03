#include<stdio.h>
int main(){
    char s[1000];
    scanf("%[^/n]",s);
    int re=0;
    for(int i=0;s[i]!=NULL;i++){
        if(s[i]>=48&&s[i]<=57){
            re=re+(s[i]-'0');
        }
    }
    printf("%d",re);
}