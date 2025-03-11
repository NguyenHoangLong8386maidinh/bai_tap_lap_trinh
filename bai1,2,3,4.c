#include <stdio.h>
#include <math.h>
int main(){
//Bai 1
  int x;
  scanf("%d", &x);
  int y,z,t;
  printf("%d\n",y = pow(x,2));
  printf("%d\n",z = pow(x,3));
  printf("%d\n",t = pow(x,4));
// Bai 2
  int d,m,y;
  scanf("%d %d %d", &d,&m,&y);
  printf("Hom nay la: %d/%d/%d", d,m,y);
// Bai 3
    int x,y,c,t,n;
    float ch;
    scanf("%d %d",&x, &y);
    c = x + y;
    t = x - y;
    n = x*y;
    ch = 1.0*x/y;
    printf("Tong 2 so nguyen la:%d\n",c);
    printf("Hieu 2 so nguyen la:%d\n",t);
    printf("Tich 2 so nguyen la:%d\n",n);
    printf("Thuong 2 so nguyen la:%.2f\n",ch);
// Bai 4
    int r;
    float pi = 3.14;
    printf("Nhap vao ban kinh R: ");
    scanf("%d",&r);
    double dienTich, theTich;
    dienTich = 4*pi*(1.0*r*r);
    theTich = (4/3)*pi*(double)pow(r,3);
    printf("Dien tich hinh cau la: %.2lf\n", dienTich);
    printf("The tich hinh cau la: %.2lf\n", theTich);
}
