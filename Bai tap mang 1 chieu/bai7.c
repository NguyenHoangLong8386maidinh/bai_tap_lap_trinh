#include <stdio.h>
#include <math.h>
void sapXep(int a[], int n){
    for(int i = 0; i < n -1 ; i++){
    // di tim phan tu nho nhat chua duoc sap xep
        int min_pos = i;// ban dau coi i la nho nhat
        for(int j = i + 1; j < n; j++){
            if(a[j] < a[min_pos]){
                min_pos = j;
            }
        }
        int tmp = a[i]; a[i] = a[min_pos]; a[min_pos] = tmp;
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
    sapXep(a,n);
    printf("Mang theo thu tu tang dan la:\n");
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
}


