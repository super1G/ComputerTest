#include "Logic.h"
std::vector<int> Logic::getIntersection(int* a, int a_size, int* b, int b_size) {
	std::vector<int> c;
	//int c_size = 0;
	for (int i = 0; i < a_size; i++){
		for (int j = 0; j < b_size; j++) {
			if (a[i] == b[j] ){
				std::cout << a[i] << " ";
				
				
			}
		}
	}
	return c;
}
std::vector<int>  Logic::getUnion(int* a, int a_size, int* b, int b_size) {
	std::vector<int> c(getDifference(a, a_size, b, b_size));
	
	for (int i = 0; i < b_size; i++) {
		c.push_back(b[i]);
		
	}
	
	
	return c;
	
}
std::vector<int> Logic::getDifference(int* a, int a_size, int* b, int b_size) {

	int flag = 0;
	std::vector<int> c;
	//int c_size = 0;
	for (int i = 0; i < a_size; i++) {
		for (int j = 0; j < b_size; j++) {
			if (a[i] == b[j]) {
				flag = 1;
			}
		}
		if (flag == 1)
		{
			flag = 0;
		}
		else
		{
			std::cout << a[i] << " ";
			//c.push_back(a[i]);
		}
	}
	return c;
}