#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* bai06
nhap vao do dai ba canh cua mot tam giac
sau do tinh chu vi và dien tich cua tam giac do*/

int main(int argc, char *argv[]) {

    double a, b, c, p, s;

    printf("Nhap do dai canh a: ");
    scanf("%lf", &a);

    printf("Nhap do dai canh b: ");
    scanf("%lf", &b);

    printf("Nhap do dai canh c: ");
    scanf("%lf", &c);

    p = (a + b + c) / 2;
    s = sqrt(p * (p - a) * (p - b) * (p - c));


    printf("Chu vi = %5.2f, va dien tich = %5.2f\n", 2 * p, s);

    return 0;
}
