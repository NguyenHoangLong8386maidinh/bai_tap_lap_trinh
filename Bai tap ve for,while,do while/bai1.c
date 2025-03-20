#include <stdio.h>
#include <math.h>

int main(){
   int n;
   printf("Nhap vao so phan tu: ");
   scanf("%d",&n);
   int a[n];
   printf("Nhap vao day so: ");
   for(int i=0;i<n;i++)
   {
    scanf("%d",&a[i]);
   }
   long long sum = 0;
   for(int i = 0; i < n; i++){
    sum += a[i];
   }
   printf("%ld",sum);
}
