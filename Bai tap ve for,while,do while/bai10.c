#include <stdio.h>
#include <math.h>

int inFibo(int n){
    if(n == 1) return n;
    long long fn1 = 1, fn2 = 1, fn;// fn1 nghia la f[n -1] , fn2 la f[n -2]
    for(int i = 3; i <= n; i++){
        fn = fn1 + fn2;
    fn2 = fn1;
    fn1 = fn;
    }
    return fn;
}
int main(){
    int n;
    scanf("%d", &n);
    printf("So fibonacci thu %d la: %lld\n", n, inFibo(n));
}
