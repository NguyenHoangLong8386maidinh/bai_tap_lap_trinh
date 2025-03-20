#include <stdio.h>
#include <math.h>

int main(){
    double A;
    double r = 0.45;
    int n;
    double P;
    printf("Nhap so tien gui ban dau: ");
    scanf("%lf", &A);
    printf("Nhap so thang: ");
    scanf("%d", &n);
    P = A * pow(1 + r, n);
    printf("So tien nhan duoc sau %d thang la: %.2lf dong\n", n,P);

    return 0;
}
