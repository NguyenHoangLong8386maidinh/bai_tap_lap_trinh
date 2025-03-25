#include <stdio.h>
#include <math.h>

int main(){
    int n,m;
    printf("Nhap vao so luong phan tu mang 1 va mang 2: ");
    scanf("%d%d",&n, &m);
    int a[n], b[m];
    printf("Nhap vao cac phan tu cua mang a: ");
    for(int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
    printf("Nhap vao cac phan tu cua mang b: ");
    for(int i = 0; i < m; i++){
        scanf("%d",&b[i]);
    }
    int i = 0, j = 0;// tron 2 mang a va b
    while(i < n && j < m){
        if(a[i] <= b[j]){
            printf("%d ",a[i]);
            i++;
        }
        else{
            printf("%d ",b[j]);
            j++;
        }
    }
    // Kiem tra xem cac chi so cuoi cung cua 2 mang , neu con thi in not ra
    while(i < n){
        printf("%d ",a[i]);
        i++;
    }
    while(j < m){
        printf("%d",b[j]);
        j++;
    }
}
