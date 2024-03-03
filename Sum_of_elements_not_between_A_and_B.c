#include<stdio.h>
int main(){
    int n,p,q,s=0;
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
            s=s+a[i];
        }
    }
    printf("%d",s);
}