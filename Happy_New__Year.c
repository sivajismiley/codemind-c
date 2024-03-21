#include<stdio.h>
int main(){
    int h,m,ans,r;
    scanf("%d%d",&h,&m);
    
    r=(h*60)+m;
    ans=1440-r;
    printf("%d",ans);
    
}