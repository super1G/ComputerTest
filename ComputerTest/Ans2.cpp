#include "Ans2.h"

std::string Ans2::processing(std::string str) {
	int current = 0; //�̪�� 0 ����m�}�l��
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
					std::cout<< "�G" ;
				if (str.at(next) == '-')
					std::cout << " - ";
				//std::cout << str.at(next) << " " << next << " ";
			}
		}
		if (next == std::string::npos) break;
		current = next + 1; //�U���� next + 1 ����m�}�l��_�C
		//std::cout << next << "   "<<str.size()<<"  ";
	}
	return "123";
}