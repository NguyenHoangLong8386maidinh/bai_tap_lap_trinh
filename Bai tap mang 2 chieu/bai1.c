#include <stdio.h>
#include <math.h>

void inMaTran(int a[3][3]){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

}
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
    int a[3][3] = {
    {1,2,3},
    {4,5,6},
    {7,8,9},
    };
    inMaTran(a);
    int n,m;
    printf("Nhap vao so hang va so cot: ");
    scanf("%d%d",&n,&m);
    int b[100][100];
    printf("Nhap vao ma tran: \n");
    nhap(b,n,m);
    printf("Ma tran B la: \n");
    in(b,n,m);

}
