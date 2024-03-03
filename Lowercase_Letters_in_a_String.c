#include<stdio.h>
int main()
{
    char s[1000];
    int c=0,i;
    scanf("%[^
]",s);
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]>=97&&s[i]<=122){
        c++;
   }
   }
    printf("%d",c);
}