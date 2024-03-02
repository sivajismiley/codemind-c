
#include<stdio.h>
int main(){
    int n,c,d=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        c=0;
        for(int j=0;j<n;j++){
            if(a[i]==a[j]){
                c++;
            }
        }
        if(c==a[i]&&c>=i){
            d++;
            printf("%d ",a[i]);
        }
    }
    if(d==0)
    printf("-1");
    
}