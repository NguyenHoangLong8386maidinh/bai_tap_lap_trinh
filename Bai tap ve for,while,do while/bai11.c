#include <stdio.h>
#include <math.h>

void he2(long long n){
    int a[100], dem = 0;
    while(n != 0){
        a[dem] = n % 2;
        n /= 2;
        dem++;
    }
    for(int i = dem - 1; i >= 0; i--){
        printf("%lld", a[i]);
    }
    printf("\n");
}
void he8(long long n){
    int a[100], dem = 0;
    while(n != 0){
        a[dem] = n % 8;
        n /= 8;
        dem++;
    }
    for(int i = dem - 1; i >= 0; i--){
        printf("%d", a[i]);
    }
printf("\n");
}
void he16(long long n){
    int a[100], dem = 0;
    while(n != 0){
        a[dem] = n % 16;
        n /= 16;
        dem++;
    }
    for(int i = dem - 1; i >= 0; i--){
        if(a[i] <= 9) printf("%d",a[i]);
        else printf("%c", a[i]+55);
    }
    printf("\n");
}
int main(){
    long long n;
    scanf("%lld",&n);
    he2(n);
    he8(n);
    he16(n);


}

