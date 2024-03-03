#include<stdio.h>
int main(){
    int n,p,q,d=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d %d",&p,&q);
    for(int i=0;i<n;i++){
        if(a[i]>=p&&a[i]<=q){
        continue;
        }
        else{
        printf("%d ",a[i]);
        d++;
        }
    }
    if(d==0)
    printf("-1");
}