#include<stdio.h>
#include<math.h>
int main(){
    int n,g=0,s,c=0,t=0,k;
    scanf("%d",&n);
    int f=n;
    for(int i=n;i>0;i/=10){
        s=i%10;
        g=g*10+s;
        c++;
    }
    for(int j=1;j<=c;j++){
        s=g%10;
        t+=pow(s,j);
        g=g/10;
        
    }
    if(t==f)
    printf("True");
    else
    printf("False");
}