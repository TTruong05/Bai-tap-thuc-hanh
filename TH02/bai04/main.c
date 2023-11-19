#include <stdio.h>
#include <stdlib.h>

/*TH02 
bai04
Viet chuong tr�nh nhap v�o diem 3 m�n thi: To�n, L�, H�a cua hoc sinh. 
Neu tong diem >= 15 v� kh�ng c� m�n n�o duoi 4 th� in ket qua dau. 
Neu dau ma cac mon deu lon hon 5 thi in ra loi phe "Hoc dau c�c m�n", 
nguoc lai in ra "Hoc chua dau cac mon", cac truong hop khac la "Thi hong" */

int main(int argc, char *argv[]) {
    float toan, ly, hoa;
    
    printf("Nhap diem Toan: ");
    scanf("%f", &toan);

    printf("Nhap diem Ly: ");
    scanf("%f", &ly);

    printf("Nhap diem Hoa: ");
    scanf("%f", &hoa);
    
    if (toan >= 4 && ly >= 4 && hoa >= 4 && toan + ly + hoa >= 15) {
        if (toan > 5 && ly > 5 && hoa > 5) {
            printf("Dau - Hoc deu cac mon\n");
        } else {
            printf("Dau - Hoc chua deu cac mon\n");
        }
    } else {
        printf("Thi hong\n");
    }
	return 0;
}
