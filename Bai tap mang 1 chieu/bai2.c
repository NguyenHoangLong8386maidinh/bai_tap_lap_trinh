#include <stdio.h>
#include <math.h>
void daoChieu(int a[], int n){
    printf("Mang theo chieu dao nguoc: ");
    for(int i = n - 1; i >= 0; i--){
        printf("%d ",a[i]);
    }
    printf("\n");
}


int main(){
    int a[100];
    int n;
    printf("Nhap vao so phan tu: ");
    scanf("%d",&n);
    printf("Nhap cac phan tu cua mang:\n");
    for(int i = 0; i < n ; i++){
        printf("a[%d] = ", i);
        scanf("%d",&a[i]);
    }
    daoChieu(a,n);

}

