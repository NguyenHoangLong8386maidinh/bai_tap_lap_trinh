#include <stdio.h>
#include <math.h>

int main(){
    int a,b,c;
    double chu_vi,dien_tich;
    printf("Nhap vao 3 canh cua tam giac: ");
    scanf("%d %d %d",&a,&b,&c);
    if(a>0 && b>0 && c>0 && a+b>c && a+c>b && b+c>a){
        double p = (1.0*a+b+c)/2;
        chu_vi = a+b+c;
        dien_tich = sqrt(p*(p-a)*(p-b)*(p-c));
        if(a == b && b == c){
            printf("Tam giac deu\n");
        }
        else if(a == b || b == c || c == a){
            printf("Tam giac can\n");
        }
        else if(pow(a,2) == pow(b,2)+pow(c,2) || pow(b,2) == pow(a,2)+pow(c,2) || pow(c,2) == pow(b,2)+pow(a,2)){
            printf("Tam giac vuong\n");
        }
        else if((a == b && c*c == b*b + a*a) || (a == c && b*b == a*a + c*c) || (b == c && a*a == b*b + c*c)){
            printf("Tam giac vuong can\n");
        }
        else{
            printf("Tam giac thuong\n");
        }
        printf("Chu vi tam giac la: %.2lf\n",chu_vi);
        printf("Dien tich tam giac la: %.2lf\n",dien_tich);
    }
    else{
        printf("Khong phai tam giac");
    }
}
