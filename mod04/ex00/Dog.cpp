#include "Dog.hpp"

Dog::Dog() : Animal(){
	std::cout << "Constructor of Dog is call" << std::endl;
	this->type = "Dog";
}

Dog::~Dog(){
	std::cout << "Destructor of Dog is call" << std::endl;
}

void Dog::makeSound()const{
	std::cout << "Ouaf Ouaf" << std::endl;
}


