#include<stdio.h>
int main(){
    int n,s=0,avg,c=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        s=s+a[i];
    }
    avg=s/n;
    for(int i=0;i<n;i++){
        if(a[i]==avg)
        c++;
    }
    if(c!=0)
    printf("True");
    else
    printf("False");
    
}