#include <stdio.h>
#include <math.h>

int main(){
    int n;
    printf("Nhap vao so n: ");
    scanf("%d",&n);
    double sum = 0;
    for(int i = 1; i <= n; i++){
        sum += 1 / (double)i ;
    }
    printf("%.2lf",sum);
}

