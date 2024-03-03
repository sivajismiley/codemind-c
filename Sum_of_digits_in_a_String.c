#include<stdio.h>
int main(){
    char s[1000];
    int ans=0;
    scanf("%[^
]",s);
    for(int i=0;s[i]!=NULL;i++){
        if(s[i]>='0'&&s[i]<='9'){
            ans+=(s[i]-'0');
        }
    }
    printf("%d",ans);
}