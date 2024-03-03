#include<stdio.h>
int main(){
    int n,a,b,s=0,c=0;
   scanf("%d",&n);
   int arr[n];
   for(int i=0;i<n;i++){
       scanf("%d",&arr[i]);
   }
    scanf("%d %d",&a,&b);
    for(int i=0;i<n;i++){
        if(arr[i]>=b){
            c++;
            if(arr[i]>s)
            s=arr[i];
        }
    }
    if(c!=0)
    printf("%d",s);
    else
    printf("-1");
    
}