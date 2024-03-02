#include<stdio.h>
int main(){
    char str[1000];
    int d=1;
    scanf("%[^
]",str);
    for(int i=0;str[i]!=NULL;i++){
        if(str[i]==' ')
        d++;
    }
    printf("%d",d);
}