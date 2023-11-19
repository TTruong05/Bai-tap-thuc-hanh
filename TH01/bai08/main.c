#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* bai08
viet chuong trinh nhap vao ban kinh cua hinh tron
tinh chu vi va dien tich hinh tron */

int main(int argc, char *argv[]) {

    double banKinh;

    printf("Nhap ban kinh hinh tron: ");
    scanf("%lf", &banKinh);

    double chuVi = 2 * M_PI * banKinh;
    double dienTich = M_PI * banKinh * banKinh;

    printf("Chu vi = %.2f, va dien tich = %.2f\n", chuVi, dienTich);

	return 0;
}
