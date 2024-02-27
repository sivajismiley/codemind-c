#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n],j=n-1;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    if(n%2!=0){
    for(int i=0;i<=n/2;i++){
        printf("%d ",a[i]);
        if(i==n/2&&n%2!=0){
            break;
        }
        printf("%d ",a[j]);
        j--;
   }      
    }
    if(n%2==0){
    	 for(int i=0;i<n/2;i++){
        printf("%d ",a[i]);
        printf("%d ",a[j]);
        j--;
    }
}
    if(n%2!=0)
    printf("0");
}