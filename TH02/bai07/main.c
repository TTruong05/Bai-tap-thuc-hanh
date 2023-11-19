#include <stdio.h>
#include <stdlib.h>

/* 
TH02
bai07

viet chuong trinh choi oan tu ti
nguoi choi phai luon thua may */

int main(int argc, char *argv[]) {
	int n;

    printf("Chon 1 bua, 2 bao, 3 keo: ");
    scanf("%d", &n);

    switch (n) {
        case 1:
            printf("Vay may ra bao, thang roi nhe!!!\n");
            break;
        case 2:
            printf("Vay may ra keo, thang roi nhe!!!\n");
            break;
        case 3:
            printf("Vay may ra bua, thang roi nhe!!!\n");
            break;
        default:
            printf("Nhap sai gia tri! Chi chon 1, 2 hoac 3.\n");
            break;
    }
	return 0;
}
