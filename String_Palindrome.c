#include<stdio.h>
#include<string.h>
int main(){
    char s[1000];
    scanf("%[^
]",s);
    int l=strlen(s);
    int c=0,d=0;
    for(int i=l-1;i>=0;i--){
       if(s[i]==s[c])
       d++;
       c++;
    }
    if(d==l)
    printf("Palindrome");
    else
    printf("Not Palindrome");
}