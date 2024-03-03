#include<stdio.h>
int main(){
    char s[1000];
    int ans=1;
    scanf("%[^
]",s);
    for(int i=1;s[i]!=NULL;i++){
        if(s[i]>=65&&s[i]<=90){
            ans++;
        }
    }
    printf("%d",ans);
}