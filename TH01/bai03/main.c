#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* bai 03 */

int main(int argc, char *argv[]) {
	    double x_degrees;

    printf("Nhap gia tri x (do): ");
    scanf("%lf", &x_degrees);

    double x_radians = x_degrees * M_PI / 180.0;

    double sin_value = sin(x_radians);
    double cos_value = cos(x_radians);

    printf("Sin(%lf) = %lf\n", x_degrees, sin_value);
    printf("Cos(%lf) = %lf\n", x_degrees, cos_value);

    return 0;
}

