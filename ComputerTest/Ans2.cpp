#include "Ans2.h"

std::string Ans2::processing(std::string str) {
	int current = 0; //最初由 0 的位置開始找
	int next;
	while (1)
	{
		next = str.find_first_of(" :-", current);
		//std::cout << next << std::endl;
		if (next != current ||str.at(next)==':'|| str.at(next) == '-')
		{
			
				
			std::string tmp = str.substr(current, next - current);
			if (tmp.size() != 0) {
				if(tmp.compare(":")!=0|| tmp.compare("-"))
				std::cout << tmp;
			}
				
				
			if (next < str.size()) {
				if (str.at(next) == ':')
					std::cout<< "：" ;
				if (str.at(next) == '-')
					std::cout << " - ";
				//std::cout << str.at(next) << " " << next << " ";
			}
		}
		if (next == std::string::npos) break;
		current = next + 1; //下次由 next + 1 的位置開始找起。
		//std::cout << next << "   "<<str.size()<<"  ";
	}
	return "123";
}