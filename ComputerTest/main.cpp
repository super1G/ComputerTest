#include<iostream>
#include "Ans2.h"
#include "Ans3.h"
#include "sort.h"
#include "Logic.h"
using namespace std;


int main(){
	Ans2 a;
	//a.processing(a.date);                                     //ANS 2
	Ans3 b;
	/*cout << b.getEven(b.num, b.num_size) << endl;
	cout << b.getOdd(b.num, b.num_size) << endl;
	cout << b.GetEvemMinusOdd(b.num, b.num_size) << endl;*/     //ANS 3
	sort c;
	//c.sort_num(c.num, c.num_size);                            //ANS 4

	Logic d;
	/*vector<int> e(d.getIntersection(d.a, d.a_size, d.b, d.b_size));
	for (int i = 0; i < e.size(); i++)
		cout << e.at(i) << "  ";
	cout << endl;

	vector<int> f(d.getDifference(d.a, d.a_size, d.b, d.b_size));
	for (int i = 0; i < f.size(); i++)
		cout << f.at(i) << "  ";
	cout << endl;

	vector<int> g(d.getUnion(d.a, d.a_size, d.b, d.b_size));
	for (int i = 0; i < g.size(); i++)
		cout << g.at(i) << "  ";
	cout << endl;*/														//Ans5
	
	system("PAUSE");
	return 0;
}
