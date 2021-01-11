#include "sort.h"

void sort::sort_num(int* num,int n) {
	int *box = new int[n];
	for (int i = 0; i < n; i++) {

		box[i] = num[i];
	}
	int j = 0;
	for (int i = 0; i < n; i++) {
		for(int j=i;j<n;j++)
		if (box[i] < box[j]) {
			int state = box[i];
			box[i] = box[j];
			box[j] = state;
		}
	}
	for (int i = 0; i < n; i++) {
		std::cout << box[i] << " ";
	}
	std::cout << std::endl;
}
