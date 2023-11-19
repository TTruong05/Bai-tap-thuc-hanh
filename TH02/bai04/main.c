#include <stdio.h>
#include <stdlib.h>

/*TH02 
bai04
Viet chuong trình nhap vào diem 3 môn thi: Toán, Lý, Hóa cua hoc sinh. 
Neu tong diem >= 15 và không có môn nào duoi 4 thì in ket qua dau. 
Neu dau ma cac mon deu lon hon 5 thi in ra loi phe "Hoc dau các môn", 
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
