#include <stdio.h>
#include <math.h>

int main() {
long long so_von;
int so_nam;

printf("nhap so von muon gui: ");
scanf ("%lld", &so_von);
printf("nhap so nam muon lay: ");
scanf ("%d", &so_nam);
double tong_tien = so_von * pow(1.0512, so_nam);
printf("tong so tien la: %.2lf", tong_tien);


    return 0;
}