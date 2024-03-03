#include<stdio.h>
#include<math.h>
int main(){
    int n,e=0,o=0,tot;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        if(i%2==0){
        e=e+a[i];
        }
        else{
        o=o+a[i];
        }
    }
    tot=abs(e-o);
    printf("%d",tot);
}