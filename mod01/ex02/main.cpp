#include <string>
#include <iostream>

int main(){
	std::string str = "HI THIS IS BRAIN";

	std::string &stringREF = str;
	std::string *stringPTR = &str;
	std::cout << "variable : " << str << std::endl;
	std::cout << "Address var : " << &str << std::endl;
	std::cout << "ref : " << &stringREF << std::endl;
	std::cout << "val ref : " << stringREF << std::endl;
	std::cout << "pointeur : " << stringPTR << std::endl;
	std::cout << "val pointeur : " << *stringPTR << std::endl;
}