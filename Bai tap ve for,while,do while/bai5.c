#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Nhap vao gia tri n: ");
    scanf("%d", &n);
    if(n == 0){
        printf("Khong co uoc so !!");
    }
    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            printf("%d ",i);
        }
    }
}



