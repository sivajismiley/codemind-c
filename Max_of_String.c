#include<stdio.h>
int main(){
    char s[1000],ch;
    scanf("%[^
]",s);
    ch=s[0];
    for(int i=1;s[i]!=NULL;i++){
        if(ch<s[i])
        ch=s[i];
    }
    printf("%c",ch);
}