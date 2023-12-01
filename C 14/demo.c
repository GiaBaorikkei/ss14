#include <stdio.h>
// Con tro (Pointer);

//1. Khai bao con tro;
// type *pointerName;
// type *pointerName = &address

//2. Su dung con tro
// - Thao tac voi dia chi: pointerName
// - Gia tri ma con tro dang tro toi: pointerName;
// VD: *pointer =
// VD: (*pointer)++

//3. Khai bao con tro lam tham so trong mot ham

// Khi thuc thi ham thi truyen cac dia chi cua bien
// vao trong ham lam doi so
void displayNumbers(int arr[], int size){
	for(int i = 0; i < size; i++){
		printf("arr[%d] = %d \n", i, arr[i]);
	}
}
	int main(){
//	int arr[] = {3, 5, 7, 9};
//	printf("Day la la dia chi cua bien arr[] = %d\n", arr);
//	
//	int *pointer = arr;
//	printf("Day la dia chi ma pointer dang tro den = %d\n", pointer);
//	
//	printf("Day la dia chi cua bien arr[0] = %d\n", &arr[0]);
//	
//	int size = sizeof(arr) / sizeof(int);
//	for(int i = 0; i < size; i++){
//		printf("arr[%d] = %d, arr[%d] = %d\n", i, &arr[i], i, *(pointer + i));
//	}


	int numbers[] = {2, 4, 6, 8, 10};
	int size = sizeof(numbers) / sizeof(int); 
	
	displayNumbers(numbers, size);//displayNumbers(&addressnumbers, size)
	
	return 0;
}
