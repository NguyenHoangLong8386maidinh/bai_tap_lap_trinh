#include <stdio.h>
#include <math.h>

int main(){
    int n;
    printf("Nhap vao so n: ");
    scanf("%d",&n);
    int sum = 0;
    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            sum += i;
        }
    }
    if(sum / n == 2){
        printf("%d la so hoan hao\n",n);
    }
    else{
        printf("%d khong phai so hoan hao\n",n);
    }
}
