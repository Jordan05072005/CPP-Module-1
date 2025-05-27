
#include "PhoneBook.hpp"
#include <sstream> 

long unsigned int	atoi(std::string str){
	std::istringstream number(str);
	long unsigned int	num;

	number >> num;
	return (num);
}

int main(){
	std::string	cmd;
	PhoneBook	phoneBook;
	std::string index;

	while (cmd != "EXIT"){
		std::cout << "Command :" << std::endl;
		std::getline(std::cin, cmd);
		if (cmd == "ADD")
			phoneBook.addContact();
		else if (cmd == "SEARCH"){
			phoneBook.printContacts();
			std::cout << "Get index of the contact : ";
			std::getline(std::cin, index);
			phoneBook.printContact(atoi(index));
		}
	}
	return (0);
}