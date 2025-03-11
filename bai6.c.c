#include <stdio.h>
#include <math.h>
// Bai 6: giai he phuong trinh
// su dung cong thuc Cramer:D la dinh thuc
// D = 0 va Dx + Dy = 0 thi he phuong trinh co vo so nghiem
// D = 0 va Dx + Dy !=0 thi he phuong trinh vo nghiem
// D != 0 thi x = Dx/D , y = Dy/D
int main(){
    float x,y,D,Dx,Dy;
    float a,b,c,d,e,f;
    printf("Nhap a,b,c,d,e,f: ");
    scanf("%f %f %f %f %f %f", &a,&b,&c,&d,&e,&f);
    D = a*e - b*d;
    Dx = c*e - f*b;
    Dy = a*f - d*c;
    if(D == 0 ){
        if(Dx+Dy == 0){
        printf("He phuong trinh co vo so nghiem");
        }
        else{
            printf("He phuong trinh vo nghiem");
        }
    }
    else{
        x = Dx/D;
        y = Dy/D;
        printf("Nghiem cua he phuong trinh la (x,y) = (%.2f,%.2f)",x,y);
    }


}

