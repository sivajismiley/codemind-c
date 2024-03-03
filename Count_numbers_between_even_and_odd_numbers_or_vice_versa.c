#include<stdio.h>
int main(){
    int n,c,d=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=1;i<n-1;i++){
        c=0;
        if(a[i-1]%2==0&&a[i+1]%2!=0){
        c++;
        }
        else if(a[i-1]%2!=0&&a[i+1]%2==0){
        c++;
        }
        if(c!=0)
        d++;
        
    }
    printf("%d",d);
}