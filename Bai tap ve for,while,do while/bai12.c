#include <stdio.h>
#include <math.h>
#define pi 3.14
long long giai_thua(int n){
    long long gt = 1;
    for(int i = 1; i <= n;i++){
        gt *= i;
    }
    return gt;

}
int main(){
    double x, x1, Eps, sum = 0.0, term;
    int n = 0;
    printf("Nhap vao gia tri x va Eps: ");
    scanf("%lf %lf",&x ,&Eps);
    x1 = x*pi/180;
    do {
        term = pow(-1,n)*pow(x1,2*n + 1)/giai_thua(2*n + 1);
        sum += term;
        n++;
    } while (fabs(term) > Eps);
    printf("Sin(x) = %.6lf\n",sum);
    return 0;

}


