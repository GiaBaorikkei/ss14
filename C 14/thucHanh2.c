#include <stdio.h>

// Ham su dung con tro de tính tong cac so nguyen tu doan cho truoc
int tinhTong(int *batDau, int *ketThuc) {
    int tong = 0;
    int *ptr = batDau;

    while (ptr <= ketThuc) {
        tong += *ptr;
        ptr++;
    }

    return tong;
}

int main() {
    int batDau, ketThuc;

    // Nhap doan so nguyen
    printf("Nhap gia tri bat dau: ");
    scanf("%d", &batDau);
    printf("Nhap gia tri ket thuc: ");
    scanf("%d", &ketThuc);

    // Tinh tong su dung con tro
    int tong = tinhTong(&batDau, &ketThuc);

    // Hien thi tong
    printf("Tong cac so nguyen tu %d den %d la: %d\n", batDau, ketThuc, tong);

    return 0;
}
