#include "Cat.hpp"

Cat::Cat() : Animal(){
	std::cout << "Constructor of Cat is call" << std::endl;
	this->type = "Cat";
}

Cat::~Cat(){
	std::cout << "Destructor of Cat is call" << std::endl;
}

void Cat::makeSound() const{
	std::cout << "Miaouuuuu" << std::endl;
}


