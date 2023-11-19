#include <stdio.h>
#include <stdlib.h>

/* TH02
   bai02 
   viet chuong trinh nhap vao 3 so 
   tim so lon nhat*/

int main(int argc, char *argv[]) {
    int a, b, c, max;

    printf("Nhap a: ");
    scanf("%d", &a);

    printf("Nhap b: ");
    scanf("%d", &b);

    printf("Nhap c: ");
    scanf("%d", &c);

    max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }

    printf("Gia tri cuc dai la: %d\n", max);
	return 0;
}
