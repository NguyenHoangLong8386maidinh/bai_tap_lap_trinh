#include <stdio.h>
#include <math.h>

void nhap(int a[][100],int b[][100],int n, int m,int p){
    printf("Nhap vao ma tran A: \n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Nhap vao ma tran B: \n");
    for(int i = 0; i < m ; i++){
        for(int j = 0; j < p ; j++){
            scanf("%d",&b[i][j]);
        }
    }
}
void in(int a[][100],int n,int p){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < p; j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int n,m,p;
    scanf("%d%d%d",&n,&m,&p);
    int a[100][100],b[100][100],c[100][100];
    nhap(a,b,n,m,p);
    for(int i = 0; i < n;i++){
        for(int j = 0; j < p; j++){
            c[i][j] = 0;
            for(int k = 0; k < m; k++){
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    printf("Tich 2 ma tran la: \n");
    in(c,n,p);
}
