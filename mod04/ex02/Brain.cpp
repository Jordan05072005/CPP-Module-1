#include "header/Brain.hpp"

Brain::Brain(){
	std::cout << "Constructor of Brain is call" << std::endl;
}

Brain::Brain(const Brain& other){
	std::cout << "Copy Constuctor of Brain is call" << std::endl;
	*this = other;
}

Brain& Brain::operator=(const Brain& other){
	std::cout << "Constructor assignement opérator of Brain is call";
	if (this != &other){
		for (int i = 0; i < 100; i++){
			this->ideas[i] = other.ideas[i];
		}
	}
	return (*this);
}
Brain::~Brain(){
	std::cout << "Destructor of Brain is call" << std::endl;
}

