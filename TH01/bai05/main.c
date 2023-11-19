#include <stdio.h>
#include <stdlib.h>
 #include <math.h>
 
/* bai05 */

int main(int argc, char *argv[]) {
	 double x, c;
    int k;

    printf("Nhap gia tri x: ");
    scanf("%lf", &x);

    printf("Nhap gia tri k: ");
    scanf("%d", &k);

    if (k <= 0) {
        printf("Vui long nhap gia tri k lon hon 0.\n");
    } else {

        c = exp(log(x) / k);

        printf("Can bac %d cua %.2f = %.2f\n", k, x, c);
    }
    
	return 0;
}
