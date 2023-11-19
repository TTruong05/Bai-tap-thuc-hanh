#include <stdio.h>
#include <stdlib.h>

/*
TH02
bai08

Vi?t chuong tr�nh nh?p v�o 2 s? x, y v� 1 trong 4 to�n t? +, -, *, /
N?u l� + th� in ra k?t qu? x + y
N?u l� � th� in ra k?t qu? x � y
N?u l� * th� in ra k?t qu? x * y
N?u l� / th� in ra k?t qu? x / y (n?u y = 0 th� th�ng b�o kh�ng chia du?c)   
*/

int main(int argc, char *argv[]) {
	
    int x, y;
    char dau;

    printf("Nhap so x: ");
    scanf("%d", &x);

    printf("Nhap so y: ");
    scanf("%d", &y);

    fflush(stdin); 
    printf("Nhap toan tu (+, -, *, /): ");
    scanf("%c", &dau);

    switch (dau) {
        case '+':
            printf("%d + %d = %d\n", x, y, x + y);
            break;
        case '-':
            printf("%d - %d = %d\n", x, y, x - y);
            break;
        case '*':
            printf("%d * %d = %d\n", x, y, x * y);
            break;
        case '/':
            if (y != 0) {
                printf("%d / %d = %0.2f\n", x, y, (float)x / y);
            } else {
                printf("Khong chia duoc cho 0!\n");
            }
            break;
        default:
            printf("Toan tu khong hop le!\n");
            break;
    }

	return 0;
}
