#include <stdio.h>
#include <math.h>
void change(int a[],int n){
    for(int i = 0; i < n; i++){
        if(a[i] < 0){
            a[i] = 0;
        }
        printf("%d ",a[i]);
    }
}
int main(){
    int n;
    printf("Nhap vao so phan tu: ");
    scanf("%d",&n);
    int a[n];
    printf("Nhap cac phan tu trong mang\n");
    for(int i = 0; i < n; i++){
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    change(a,n);
}

