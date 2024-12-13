#include <stdio.h>

int main() {
    int x,i;
    printf("nhap so nguyen duong n: ");
    scanf("%d", &x);

    if(x < 2){
        printf("%d khong la so nguyen to\n", x);
        return 0;
    }



    for(i = 2;i = x/2 ;i++) {
        if (x % i == 0){
            printf("%d khong phai la so nguyen to\n", x);
            return 0;
        }
    
    }
    printf("%d la so nguyen to\n", x);


    return 0;

}