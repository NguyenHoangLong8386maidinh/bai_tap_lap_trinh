#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Nhap vao gia tri n: ");
    scanf("%d", &n);
    int sum = 0;
    for(int i = 1; i <= n; i++){
        if(i % 2 != 0){
            sum += i;
        }
    }
    printf("%d",sum);
}


