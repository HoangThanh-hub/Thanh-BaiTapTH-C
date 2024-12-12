#include <stdio.h>

int main() {

    printf("==========CHUONG TRINH CHUYEN DOI TIEN TE==========\n\n    1.   USA to VND\n    2.   EUR to VND\n    3.   GBP to VND\n    4.   JPY to VND\n    5.   VND to USD\n    6.   VND to EUR\n    7.   VND to GBP\n    8.   VND to JPY\n\n");
    printf("Nhap don vi ban muon chuyen doi (1-8) ?");
    int number;
    scanf("%d", &number);

    if(number < 1 || number >8){
        printf("so khong hop le\n");
        return 0;
    }
 
    float soTien, tienDaChuyen;
    printf("nhap so tien muon chuyen: ");
    scanf("%f", &soTien);

    switch(number) {
        case 1:
        tienDaChuyen = soTien * 23.500;
        printf("%.0f USD = %.3f VND\n", soTien, tienDaChuyen);
        break;
        case 2:
        tienDaChuyen = soTien * 25.000;
        printf("%.0f EUR = %.3f VND\n", soTien, tienDaChuyen);
        break;
        case 3:
        tienDaChuyen = soTien * 28.000;
        printf("%.0f GBP = %.3f VND\n", soTien, tienDaChuyen);
        break;
        case 4: 
        tienDaChuyen = soTien * 180;
        printf("%.0f JPY = %.0f VND\n", soTien, tienDaChuyen);
        break;
        case 5:
        tienDaChuyen = soTien / 23500;
        printf("%.0f VND = %.2f USD\n", soTien, tienDaChuyen);
        break;
        case 6: 
        tienDaChuyen = soTien / 25000;
        printf("%.0f VND = %.2f EUR\n", soTien, tienDaChuyen);
        break;
        case 7: 
        tienDaChuyen = soTien / 28000;
        printf("%.0f VND = %.2f GBP\n", soTien, tienDaChuyen);
        break;
        case 8: 
        tienDaChuyen = soTien / 180;
        printf("%.0f VND = %.2f JPY\n", soTien, tienDaChuyen);
        break;
        

    }
    
    return 0;
}