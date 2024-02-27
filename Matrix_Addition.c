#include<stdio.h>
int main(){
    int m,n,r,c;
    scanf("%d %d",&m,&n);
    int a[m][n],d[10][10];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    scanf("%d %d",&r,&c);
    int b[r][c];
    for(int k=0;k<r;k++){
        for(int l=0;l<c;l++){
            scanf("%d",&b[k][l]);
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
           d[i][j]=a[i][j]+b[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",d[i][j]);
        }
        printf("
");
    }
    
}