#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
private:
	/* data */
public:
	Dog();
	virtual ~Dog();
	virtual void makeSound()const;
};

#endif