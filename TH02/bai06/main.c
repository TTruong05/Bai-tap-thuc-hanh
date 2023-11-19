#include <stdio.h>
#include <stdlib.h>

/* 
TH02
bai06 
 
Vi?t chuong trình tính ti?n di?n g?m các kho?ng sau:
- Ti?n thuê bao di?n k?: 1000d/tháng
- Ð?nh m?c s? d?ng di?n cho m?i h? là: 50 KW v?i giá 230d/KW
- N?u ph?n vu?t d?nh m?c <= 50KW thì tính giá 480d/KW
- N?u 50KW < ph?n vu?t d?nh m?c < 100KW thì tính giá 700d/KW
- N?u ph?n vu?t d?nh m?c <= 100KW thì tính giá 900d/KW
Ch? s? m?i và cu du?c nh?p vào t? bàn phím
- In ra màn hình ch? s? cu, ch? s? m?i, t?ng ti?n ph?i tr?.
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
