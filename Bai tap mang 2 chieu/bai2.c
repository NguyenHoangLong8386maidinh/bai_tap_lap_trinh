#include <stdio.h>
#include <math.h>

void nhap(int a[][100],int n, int m){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%d",&a[i][j]);
        }
    }
}
void in(int a[][100],int n,int m){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int n,m,a[100][100],b[100][100];
    printf("Nhap vao so hang va so cot: ");
    scanf("%d%d",&n,&m);
    printf("Ma tran A la: \n");
    nhap(a,n,m);
    printf("Ma tran B la: \n");
    nhap(b,n,m);
    int c[100][100];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("Tong cua 2 ma tran la: \n");
    in(c,n,m);

}
