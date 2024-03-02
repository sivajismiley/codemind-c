#include<stdio.h>
int main(){
    char str[1000],ch;
    int c=0;
    scanf("%[^
] %c",str,&ch);
    for(int i=0;str[i]!=NULL;i++){
        if(str[i]==ch){
            printf("True
%d",i);
            c++;
            break;
        }
    }
    if(c==0){
        printf("False");
    }
}