#include <stdio.h>
#include <math.h>
int main(){
    double GDP,rate;
    printf("Nhap vao GDP va toc do tang truong: ");
    scanf("%lf%lf",&GDP,&rate);
    double sum = GDP;
    int i = 2014;
    printf("Nam     GDP\n");
    printf("%d     %lf\n",i,GDP);
    while(sum <= 2*GDP/((rate + 100)/100)){
        i++;
       sum += sum*rate/100;
       printf("%d     %.2lf\n",i,sum);
    }


}


