#include <stdio.h>
#include <math.h>

int main(){
    int n;
    printf("Nhap vao so phan tu: ");
    scanf("%d",&n);
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
    for(int i = 0; i < n; i++){
        printf("%d ",a[i]);
    }

}
