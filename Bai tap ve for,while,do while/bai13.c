#include <stdio.h>
#include <math.h>

long long giai_thua(int n){
    long long gt = 1;
    for(int i = 1; i <= n; i++){
        gt *= i;
    }
    return gt;
}

int main(){
    double x,Eps,sum = 0.0,term;
    int i = 0;
    printf("Nhap vao gia tri cua x va Eps: ");
    scanf("%lf%lf",&x,&Eps);
    do{
        term = pow(x,i) / giai_thua(i);
        sum += term;
        i++;
    } while(fabs(term) > Eps);
    printf("e mu x = %.6lf", sum);
    return 0;
}


