#pragma once
class Ans3
{
public:
	int num[10] = { 0,1,2,3,4,5,6,7,8,9 };
	int num_size = 10;
	int getEven(int* num,int num_size);
	int  getOdd(int* num, int num_size);
	int GetEvemMinusOdd(int* num, int num_size);
};

