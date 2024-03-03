#include<stdio.h>
int main(){
    int n,z,c=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&z);
    for(int i=0;i<n;i++){
        if(a[i]==z)
        c++;
    }
    printf("%d",c);
}