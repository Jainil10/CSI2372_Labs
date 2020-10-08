#include "myFile1.h"

void sort(int* myTab, int size) {
	int temp;
	for (int i = 0; i < size - 1; i++) {
		if (*(myTab + i) > *(myTab + (i + 1))) {
			temp = *(myTab + (i + 1));
			*(myTab + (i + 1)) = *(myTab + i);
			for (int j = i; j >= 0; j--) {
				if ((j == 0) || (temp > *(myTab + (j - 1)))){
					*(myTab + j) = temp;
					break;
				}
				else {
					*(myTab + j) = *(myTab + (j - 1));
					
				}
			}
		}
	}
}