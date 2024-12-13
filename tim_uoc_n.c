#include <stdio.h>

int main () {
    int x,i;

    printf ("nhap so nguyen n: ");
    scanf ("%d", &x);
    printf("uoc cua %d la: \n", x);

     for(i = 1; i = x; i++) {
        if(x % i ==0){
            printf("%d\n",i);
        }
        
    }



    return 0;

}