#include <stdio.h>
#include <stdlib.h>

/* bai 07
 viet chuong trinh nhap vao 2 canh cua hinh chu nhat 
 tinh chu vi dien tich hinh chu nhat  */

int main(int argc, char *argv[]) {
	   double a, b, chuVi, dienTich;

    printf("Nhap do dai canh a: ");
    scanf("%lf", &a);

    printf("Nhap do dai canh b: ");
    scanf("%lf", &b);

    chuVi = 2 * (a + b);
    dienTich = a * b;

    printf("Chu vi = %5.2f, va dien tich = %5.2f\n", chuVi, dienTich);
	return 0;
}
