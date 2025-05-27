#include "header/Cat.hpp"

Cat::Cat() : Animal(){
	std::cout << "Constructor of Cat is call" << std::endl;
	this->type = "Cat";
	this->brain = new Brain;
}

Cat::Cat(const Cat& other) : Animal(other){
	std::cout << "Copy Constructor of Cat is call" << std::endl;
	*this = other;
}

Cat& Cat::operator=(const Cat& other){
	std::cout << "Constructor assignmement operator of Cat is call" << std::endl;
	if (this != &other){
		Animal::operator=(other);
		*this->brain = *other.brain;
	}
	return (*this);
}

Cat::~Cat(){
	std::cout << "Destructor of Cat is call" << std::endl;
	delete this->brain;
}

void Cat::makeSound() const{
	std::cout << "Miaouuuuu" << std::endl;
}


