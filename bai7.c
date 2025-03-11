#include <stdio.h>
#include <math.h>
int main(){
    float n;
    scanf("%f",&n);
    if(n >= 0 && n <= 10){
    if(n<5)
        printf("Yeu");
    else if(n >= 5 && n < 7)
        printf("TB");
    else if(n >= 7 && n < 8)
        printf("Kha");
    else if(n >= 8 && n < 9)
        printf("Gioi");
    else
        printf("Xuat sac");
    }
}
