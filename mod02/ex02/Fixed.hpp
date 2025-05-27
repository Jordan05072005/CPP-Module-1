#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int number;
	const static int bits = 8;
public:
	Fixed();
	Fixed(const int nbr);
	Fixed(const float nbr);
	Fixed(const Fixed& fixed);
	Fixed& operator=(const Fixed& fixed);
	~Fixed();
	bool operator!=(const Fixed& fixed)const;
	bool operator==(const Fixed& fixed)const;
	bool operator<=(const Fixed& fixed)const;
	bool operator>=(const Fixed& fixed)const;
	bool operator>(const Fixed& fixed)const;
	bool operator<(const Fixed& fixed)const;
	Fixed operator+(const Fixed& fixed)const;
	Fixed operator-(const Fixed& fixed)const;
	Fixed& operator++(); //++x
	Fixed& operator--();
	Fixed operator++(int); // x++
	Fixed operator--(int);
	Fixed operator*(const Fixed& fixed)const;
	Fixed operator/(const Fixed& fixed)const;
	static Fixed& min( Fixed& nbr1,  Fixed& nbr2);
	const static Fixed& min(const Fixed& nbr1, const Fixed& nbr2);
	static Fixed& max(Fixed& nbr1, Fixed& nbr2);
	const static Fixed& max(const Fixed& nbr1, const Fixed& nbr2);
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	int toInt( void ) const;
	float toFloat( void ) const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif