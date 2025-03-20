#include <stdio.h>
#include <math.h>
int ucln(int a, int b){
    int min = fmin(a,b);
    for(int i = min; i>= 1; i--){
        if(a % i == 0 && b % i == 0){
            return i;
        }
    }
    return 1;
}
int bcnn(int a, int b){
    return (a * b)/ucln(a,b);
}
int main() {
    int a,b;
    printf("Nhap vao gia tri a va b: ");
    scanf("%d%d", &a, &b);
    printf("UCLN cua 2 so %d va %d la: %d\n",a ,b ,ucln(a,b));
    printf("BCNN cua 2 so %d va %d la: %d\n",a ,b, bcnn(a,b));
}




