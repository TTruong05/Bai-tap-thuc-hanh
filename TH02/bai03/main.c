#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//TH02
//bai03 
//nhap 3 so tinh chu vi dien tich hinh tam giac
//neu 3 so khong tao thanh hinh tam giác thi thong bao 

int main(int argc, char *argv[]) {

    float a, b, c, p, s;

    printf("Nhap vao a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a) {

        p = (a + b + c) / 2;
        s = sqrt(p * (p - a) * (p - b) * (p - c));

        printf("Chu vi = %5.2f, va dien tich = %5.2f\n", 2 * p, s);
    } else {
        printf("Ba so khong tao thanh tam giac.\n");
    }

    return 0;
}
