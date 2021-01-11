#include "Ans3.h"

int Ans3::getEven(int* num, int num_size){
	int total = 0;
	for (int i = 0; i < num_size / 2; i++)
		total += num[i*2];
	return total;
}
int  Ans3::getOdd(int* num, int num_size) {
	int total = 0;
	for (int i = 0; i < num_size / 2; i++)
		total += num[i * 2+1];
	return total;
}
int Ans3::GetEvemMinusOdd(int* num, int num_size) {
	int total = 0;
	total = Ans3::getEven(num, num_size) - Ans3::getOdd(num, num_size);
	return total;
}