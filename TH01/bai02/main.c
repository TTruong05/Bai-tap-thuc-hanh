#include <stdio.h>
#include <stdlib.h>

/* bai 02 
tinh tong hieu tich thuong */

int main(int argc, char *argv[]) {
	 int soThuNhat, soThuHai;

    printf("Nhap vao so thu nhat: ");
    scanf("%d", &soThuNhat);

    printf("Nhap vao so thu hai: ");
    scanf("%d", &soThuHai);

    // Tính t?ng, hi?u, tích, thýõng
    int tong = soThuNhat + soThuHai;
    int hieu = soThuNhat - soThuHai;
    int tich = soThuNhat * soThuHai;

    if (soThuHai != 0) {
        float thuong = (float)soThuNhat / soThuHai;
        printf("Tong: %d\n", tong);
        printf("Hieu: %d\n", hieu);
        printf("Tich: %d\n", tich);
        printf("Thuong: %.2f\n", thuong);
    } else {
        printf("Khong the chia cho 0.\n");
    }
	return 0;
}
