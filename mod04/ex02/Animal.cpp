#include "header/Animal.hpp"

Animal::Animal(){
	this->type = "undefine";
	std::cout << "Constructor of Animal class is call" << std::endl;
}

Animal::Animal(const Animal& other){
	std::cout << "Copy Constructor of Animal class is call" << std::endl;
	*this = other;
}

Animal& Animal::operator=(const Animal& other){
	std::cout << "Contructor assignement operator of Animal class is call" << std::endl;
	if (this != &other){
		this->type = other.type;
	}
	return (*this);
}

Animal::~Animal(){
	std::cout << "Destructor of Animal class is call" << std::endl;
}

std::string Animal::getType() const{
	return (this->type);
}