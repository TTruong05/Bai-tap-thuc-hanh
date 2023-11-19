#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* bai04 */

int main(int argc, char *argv[]) {
 
    double x, c;

    printf("Nhap gia tri x: ");
    scanf("%lf", &x);
    
    c = sqrt(x);

    printf("Can bac hai cua %.2f = %.2f\n", x, c);

    return 0;
}

