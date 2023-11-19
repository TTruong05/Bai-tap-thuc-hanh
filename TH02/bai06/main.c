#include <stdio.h>
#include <stdlib.h>

/* 
TH02
bai06 
 
Vi?t chuong tr�nh t�nh ti?n di?n g?m c�c kho?ng sau:
- Ti?n thu� bao di?n k?: 1000d/th�ng
- �?nh m?c s? d?ng di?n cho m?i h? l�: 50 KW v?i gi� 230d/KW
- N?u ph?n vu?t d?nh m?c <= 50KW th� t�nh gi� 480d/KW
- N?u 50KW < ph?n vu?t d?nh m?c < 100KW th� t�nh gi� 700d/KW
- N?u ph?n vu?t d?nh m?c <= 100KW th� t�nh gi� 900d/KW
Ch? s? m?i v� cu du?c nh?p v�o t? b�n ph�m
- In ra m�n h�nh ch? s? cu, ch? s? m?i, t?ng ti?n ph?i tr?.
*/
int main(int argc, char *argv[]) {
    int socu, somoi, diensd;
    float tongtien = 1000.0; 

    printf("Nhap chi so cu: ");
    scanf("%d", &socu);

    printf("Nhap chi so moi: ");
    scanf("%d", &somoi);

    diensd = somoi - socu;

    if (diensd <= 50) {
        tongtien += diensd * 230;
    } else {
        if (diensd <= 100) {
            tongtien += 50 * 230 + (diensd - 50) * 480;
        } else {
            if (diensd <= 150) {
                tongtien += 50 * 230 + 50 * 480 + (diensd - 100) * 700;
            } else {
                tongtien += 50 * 230 + 50 * 480 + 50 * 700 + (diensd - 150) * 900;
            }
        }
    }

    printf("Chiso cu: %d, Chiso moi: %d\n", socu, somoi);
    printf("Tong tien phai tra la: %10.0f\n", tongtien);
	return 0;
}
