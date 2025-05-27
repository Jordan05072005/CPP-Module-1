#include "Fixed.hpp"

Fixed::Fixed(){
	this->number = 0;
}

Fixed::Fixed(const int nbr){
	this->setRawBits(nbr << (this->bits));
}

Fixed::Fixed(const float nbr){
	this->number = roundf(nbr * (1 << this->bits));
}

Fixed::~Fixed(){}

Fixed::Fixed(const Fixed& fixed){
		*this = fixed;
}

Fixed& Fixed::operator=(const Fixed& fixed){
	if (this != &fixed){
		this->setRawBits(fixed.getRawBits());
	}
	return (*this);
}
	
bool Fixed::operator!=(const Fixed& fixed) const{
	if (this->getRawBits() != fixed.getRawBits())
		return (1);
	return (0);
}

bool Fixed::operator==(const Fixed& fixed) const{
	if (this->getRawBits() == fixed.getRawBits())
		return (1);
	return (0);
}

bool Fixed::operator<=(const Fixed& fixed) const{
	if (this->getRawBits() <= fixed.getRawBits())
		return (1);
	return (0);
}

bool Fixed::operator>=(const Fixed& fixed) const{
	if (this->getRawBits() >= fixed.getRawBits())
		return (1);
	return (0);
}

bool Fixed::operator<(const Fixed& fixed) const{
	if (this->getRawBits() < fixed.getRawBits())
		return (1);
	return (0);
}

bool Fixed::operator>(const Fixed& fixed) const{
	if (this->getRawBits() > fixed.getRawBits())
		return (1);
	return (0);
}

Fixed Fixed::operator+(const Fixed& fixed) const{
	return (Fixed(this->toFloat() + fixed.toFloat()));
}

Fixed Fixed::operator-(const Fixed& fixed) const{
	return (Fixed(this->toFloat() - fixed.toFloat()));
}

Fixed Fixed::operator*(const Fixed& fixed) const{
	return (Fixed(this->toFloat() * fixed.toFloat()));
}

Fixed Fixed::operator/(const Fixed& fixed) const{
	if (fixed.number == 0)
		std::cout << "Erreur de division" << std::endl;
	else
		return (Fixed(this->toFloat() / fixed.toFloat()));
	return (*this);
}

Fixed& Fixed::operator++(){ // ++val
	this->number++;
	return (*this);
}

Fixed& Fixed::operator--(){
	this->number--;
	return (*this);
}

Fixed Fixed::operator++(int){ // val++
	Fixed cpy = *this;
	this->number++;
	return (cpy);
}

Fixed Fixed::operator--(int){
	Fixed cpy = *this;
	this->number--;
	return (cpy);
}

Fixed &Fixed::min(Fixed& nbr1, Fixed& nbr2){
	if (nbr1.getRawBits() < nbr2.getRawBits())
		return (nbr1);
	return (nbr2);
}

const Fixed &Fixed::min(const Fixed& nbr1, const Fixed& nbr2){
	if (nbr1.getRawBits() < nbr2.getRawBits())
		return (nbr1);
	return (nbr2);
}

Fixed &Fixed::max(Fixed& nbr1, Fixed& nbr2){
	if (nbr1.getRawBits() > nbr2.getRawBits())
		return (nbr1);
	return (nbr2);
}

const Fixed &Fixed::max(const Fixed& nbr1, const Fixed& nbr2){
	if (nbr1.getRawBits() > nbr2.getRawBits())
		return (nbr1);
	return (nbr2);
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed){
	os << fixed.toFloat();
	return (os);
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
