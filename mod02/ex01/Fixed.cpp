#include "Fixed.hpp"

Fixed::Fixed(){
	std::cout << "Default constructor called" << std::endl;
	this->number = 0;
}

Fixed::Fixed(const int nbr){
	std::cout << "Int constructor called" << std::endl;
	this->setRawBits(nbr << (this->bits));
}

Fixed::Fixed(const float nbr){
	std::cout << "Float constructor called" << std::endl;
	this->number = roundf(nbr * (1 << this->bits));
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& fixed){
		std::cout << "Copy constructor called" << std::endl;
		*this = fixed;
}

Fixed& Fixed::operator=(const Fixed& fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &fixed){
		this->setRawBits(fixed.getRawBits());
	}
	return (*this);
}

int Fixed::getRawBits( void ) const{
	return (this->number);
}

void Fixed::setRawBits( int const raw ){
	this->number = raw;
}

int Fixed::toInt( void ) const{
	return (this->number >> this->bits);
}

float Fixed::toFloat( void ) const{
	return ((float)this->number / (1 << this->bits));
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed){
	os << fixed.toFloat();
	return (os);
}
