#include <stdio.h>
#include <stdlib.h>

/*TH02
bai05
Viet chuong trình nhap so gio lam va luong/gio 
roi tinh so tien luong tong cong. 
Neu so gio lam lon hon 40 thì nhung gio lam doi ra duoc tinh 1,5*/

int main(int argc, char *argv[]) {
	 int gio;
    float luong, tongluong;

    printf("Nhap so gio: ");
    scanf("%d", &gio);

    printf("Nhap luong/gio: ");
    scanf("%f", &luong);

    if (gio >= 40) {
        tongluong = 40 * luong + (gio - 40) * luong * 1.5;
    } else {
        tongluong = gio * luong;
    }

    printf("Tong luong la: %0.2f\n", tongluong);
	return 0;
}
