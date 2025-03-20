#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Nhap vao gia tri n: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Khong phai SNT\n");
    }

    int check = 1;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            check = 0;
            break;
        }
    }

    if (check == 1) {
        printf("%d la so nguyen to !!\n", n);
    } else {
        printf("%d khong phai SNT !!\n", n);
    }
}
