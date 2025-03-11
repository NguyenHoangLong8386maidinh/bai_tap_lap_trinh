#include <stdio.h>
#include <math.h>
// Bai 5 : Phuong trinh bac 2
int main(){
    int a,b,c;
    float x,x1,x2;
    printf("Nhap vao 3 gia tri: ");
    scanf("%d %d %d", &a, &b, &c);
    if(a == 0){
       if(b != 0){
        x = (float)-c/b;
        printf("%.2lf", x);
       }
       else{
        printf("Vo Nghiem");
       }
    }
    else{
        float delta = b*b - 4*a*c;
       if(delta < 0){
        printf("Vo nghiem");
       }
       else if(delta == 0){
        x1 = x2 = -b/(2*a);
        printf("Co nghiem duy nhat x= %.2lf",x1);
       }
       else if(delta > 0){
        x1 = (-b+ sqrt(delta))/(2*a);
        x2 = (-b- sqrt(delta))/(2*a);
        printf("Phuong trinh co 2 nghiem phan biet x1=%.2lf,x2=%.2lf", x1,x2);

       }
    }
}





