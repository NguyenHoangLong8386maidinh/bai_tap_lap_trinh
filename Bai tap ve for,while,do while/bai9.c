#include <stdio.h>
#include <math.h>

int main(){
    int n;
    printf("Nhap vao so n: ");
    scanf("%d",&n);
    long long gt = 1;
    double sum = 0;
    for(int i = 1; i <= n; i++){
        gt *= 1ll*i;
        sum += 1 / (double)gt;
    }
    printf("%.4lf",sum);

}

