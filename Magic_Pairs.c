#include<stdio.h>
int main(){
    int n,s=0,c=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if((i+j)%2!=0){
                c++;
            }
        }
    }
    printf("%d",c);
}