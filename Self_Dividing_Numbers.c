#include<stdio.h>
int main(){
    int a,b,s=0,d,c,i,l,k;
    scanf("%d %d",&a,&b);
    for(i=a;i<=b;i++){
        s=0;
        c=0;
        l=0;

     if(i%10==0)
        continue;
         k=i;
         while(k!=0){
             s=k%10;
             l++;
             if(i%s==0)
             c++;
             k/=10;
         }
         if(l==c)
         printf("%d ",i);
     }
       
    }
