#include <stdio.h>

int main () {
    int soGio;
    long mucLuong;

    printf("nhap so gio lam viec: ");
    scanf("%d", &soGio);
    printf("nhap muc luong theo gio: ");
    scanf("%ld", &mucLuong);

    float luongCoBan = soGio * mucLuong;
    float phuCap = (soGio * mucLuong) * 0.1;

    if(soGio > 160){
        float tongTien = luongCoBan + phuCap ;
        printf("tong so tien nhan duoc la: %.2f\n", tongTien);
    } else {
        float tongTien = luongCoBan ;
        printf("tong so tien nhan duoc la: %.2f\n", tongTien);
    }
    
    return 0;
}