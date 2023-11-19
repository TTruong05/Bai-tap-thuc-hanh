#include <stdio.h>
#include <stdlib.h>

//TH02 
//bai01
//viet chuong trinh nhap vao so nguyen 
//in ra so do la chan hay le 

int main(int argc, char *argv[]) {
    int n;

    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("%d la so chan\n", n);
    } else {
        printf("%d la so le\n", n);
    }
	return 0;
}
