#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
	std::cout << "Constructor of WrongAnimal class is call" << std::endl;
	this->type = "undefine";
}

WrongAnimal::WrongAnimal(const WrongAnimal& other){
	std::cout << "Copy Constructor of WrongAnimal class is call" << std::endl;
	*this = other;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other){
	std::cout << "Contructor assignement operator of WrongAnimal class is call" << std::endl;
	if (this != &other){
		this->type = other.getType();
	}
	return (*this);
}

WrongAnimal::~WrongAnimal(){
	std::cout << "Destructor of WrongAnimal class is call" << std::endl;
}

std::string WrongAnimal::getType() const{
	return (this->type);
}

void WrongAnimal::makeSound() const {
	std::cout << "Pouak Pouak" << std::endl;
}