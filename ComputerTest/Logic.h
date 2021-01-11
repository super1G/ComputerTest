#pragma once
#ifndef LOGIC
#include<iostream>
#include<vector>
#endif // !LOGIC

class Logic
{
public:
	int a[12] = { 77,5,5,22,13,55,97,4,796,1,0,9 };
	int b[10] = { 0,1,2,3,4,5,6,7,8,9 };
	int a_size = 12;
	int b_size = 10;
	std::vector<int> getIntersection(int* a, int a_size, int* b, int b_size);
	std::vector<int>  getUnion(int* a, int a_size, int* b, int b_size);
	std::vector<int> getDifference(int* a, int a_size, int* b, int b_size);
};

