#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Nhap vao so luong so nguyen: \n");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        int x;
        scanf("%d",&x);
        if(x % 2 == 0){
            printf("%d ",x);
        }
    }
}

