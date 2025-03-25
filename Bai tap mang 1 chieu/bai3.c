#include <stdio.h>
#include <math.h>
void tong(int a[], int n){
    int sum = 0, sumDuong = 0, sumAm = 0;
    int cntDuong = 0, cntAm = 0;
    for(int i = 0; i < n; i++){
        sum += a[i];
        if(a[i] > 0){
            sumDuong += a[i];
            if(a[i] > 0){
            cntDuong++;
            }
        }
        else{
            sumAm += a[i];
            cntAm++;
        }
    }

    float tbc = (float)sum / n;
    float tbcd = (float)sumDuong / cntDuong;
    float tbca = (float)sumAm / cntAm;

    printf("Tong cua %d phan tu la:%d\n",n,sum);
    printf("Trung binh cong cua %d phan tu trong mang la: %.2f\n",n,tbc);
    printf("Tong cua cac phan tu duong la:%d\n", sumDuong);
    printf("Trung binh cong cua cac phan tu duong trong mang la: %.2f\n",tbcd);
    printf("Tong cua cac phan tu am la:%d\n", sumAm);
    printf("Trung binh cong cua cac phan tu am trong mang la: %.2f\n",tbca);
}

int main(){

    int n;
    printf("Nhap vao so phan tu: ");
    scanf("%d",&n);
    int a[n];
    printf("Nhap cac phan tu cua mang:\n");
    for(int i = 0; i < n ; i++){
        printf("a[%d] = ", i);
        scanf("%d",&a[i]);
    }
    tong(a,n);
}

