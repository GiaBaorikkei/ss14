#include <stdio.h>

int main() {
    int var = 10;  // Khai bao bien
    int *ptr;      // Khai bao con tro

    ptr = &var;    // Gan dia chi cua bien cho con tro

    printf("Gia tri cua bien var: %d\n", var);
    printf("Dia chi cua bien var: %p\n", &var);
    printf("Gia tri ma con tro ptr tro toi: %d\n", *ptr);
    printf("Dia chi ma con tro ptr tro toi: %p\n", ptr);
    printf("Dia chi cua con tro ptr: %p\n", &ptr);

    return 0;
}

