#include <stdio.h>
#include <math.h>

int main(){
    int n;
    printf("Nhap vao so phan tu: ");
    scanf("%d",&n);
    int a[n];
    printf("Nhap cac phan tu cua mang:\n");
    for(int i = 0; i < n; i++){
        printf("a[%d] = ", i);
        scanf("%d",&a[i]);
    }
    int x;
    printf("Nhap vao phan tu can tim: ");
    scanf("%d",&x);
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(a[i] == x){
            ++cnt;
        }
    }
    printf("Gia tri %d xuat hien %d lan", x, cnt);

}

