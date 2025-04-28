#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){
	this->n_contact = 0;
	this->max_contact = 8;
}

PhoneBook::~PhoneBook() {
}

std::string resizeString(std::string str, long unsigned int size){
	if (str.length() > size){
		return (str.substr(0, size - 1) + ".");
	}
	else{
		str.resize(size, ' ');
		return (str);
	}
}

void PhoneBook::printContacts(){
	int i;

	i = -1;
	while (++i < this->n_contact){
		std::cout << i + 1 << "         |";
		std::cout << resizeString(this->contact[i].getFistname(), 10) << "|";
		std::cout << resizeString(this->contact[i].getLastname(), 10) << "|";
		std::cout << resizeString(this->contact[i].getNickname(), 10) << "|\n";
	}
	std::cout << "\n" << std::endl;
}

void PhoneBook::printContact(int index){
	if (index < 0 || index > this->n_contact)
		std::cout << "Bad Index" << std::endl;
	else{
		std::cout << "Contact : \n";
		std::cout << this->contact[index - 1].getFistname() << std::endl;
		std::cout << this->contact[index - 1].getLastname() << std::endl;
		std::cout << this->contact[index - 1].getNickname() << std::endl;
		std::cout << this->contact[index - 1].getPhoneNumber() << std::endl;
		std::cout << this->contact[index - 1].getDarkestSecret() << std::endl;
	}

}

void	PhoneBook::addContact(){
	std::string firstname;
	std::string lastname;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;
	if (this->n_contact + 1 > this->max_contact)
		std::cout << "Max Contact Atteint" << std::endl;
	else{
		while (firstname.empty()){
			std::cout << "Enter the Firstname of the user : \n";
			std::getline(std::cin, firstname);
		}
		while (lastname.empty()){
			std::cout << "Enter the Lastname of the user : \n";
			std::getline(std::cin, lastname);
		}
		while (nickname.empty()){
			std::cout << "Enter the Nickname of the user : \n";
			std::getline(std::cin, nickname);
		}
		while (phone_number.empty()){
			std::cout << "Enter the Phone Number of the user : \n";
			std::getline(std::cin, phone_number);
		}
		while (darkest_secret.empty()){
			std::cout << "Enter the Darkest Secret of the user : \n";
			std::getline(std::cin, darkest_secret);
		}
		this->contact[this->n_contact] = Contact(firstname, lastname, nickname, phone_number, darkest_secret);
		this->n_contact++;
	}
}