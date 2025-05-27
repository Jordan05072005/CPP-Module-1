#include "header/Dog.hpp"

Dog::Dog() : Animal(){
	std::cout << "Constructor of Dog is call" << std::endl;
	this->type = "Dog";
	this->brain = new Brain;
}

Dog::Dog(const Dog& other) : Animal(other){
	std::cout << "Copy Constructor of Dog is call" << std::endl;
	*this = other;
}

Dog& Dog::operator=(const Dog& other){
	std::cout << "Constructor assignmement operator of Dog is call" << std::endl;
	if (this != &other){
		Animal::operator=(other);
		*this->brain = *other.brain;
	}
	return (*this);
}

Dog::~Dog(){
	std::cout << "Destructor of Dog is call" << std::endl;
	delete this->brain;
}

void Dog::makeSound()const{
	std::cout << "Ouaf Ouaf" << std::endl;
}
