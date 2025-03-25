#include <stdio.h>
#include <math.h>
void LonBe(int a[], int n){
    int max = -1e9;//-10^9
    int max_index = 0;
    int min = 1e9;
    int min_index = 0;
    for(int i = 0; i < n; i++){
        if(a[i] > max){
            max = a[i];
            max_index = i;
        }
        else{
            min = a[i];
            min_index = i;
        }
    }
    printf("Phan tu lon nhat la %d va o vi tri %d\n",max,max_index);
    printf("Phan tu lon nhat la %d va o vi tri %d\n",min,min_index);

}
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
    LonBe(a,n);
}
