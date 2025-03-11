#include <stdio.h>
#include <math.h>
int main(){
    int thang,nam;
    printf("Nhap vao thang va nam: ");
    scanf("%d %d",&thang,&nam);
    if(nam > 0 && thang > 0 && thang < 13){
       if(thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12){
        printf("Thang %d nam %d co 31 ngay\n",thang,nam);
       }
       else if(thang == 4 || thang == 6 || thang == 9 || thang == 11){
        printf("Thang %d nam %d co 30 ngay\n",thang,nam);
        }
       else if(thang == 2){
        if(nam % 400 == 0 && (nam % 4 == 0 || nam % 100 !=0)){
            printf("Thang %d nam %d co 29 ngay\n",thang,nam);
        }
        else{
            printf("Thang %d nam %d co 28 ngay\n",thang,nam);
        }
       }
    }
    else{
        printf("Thang nam khong hop le");
    }
}
