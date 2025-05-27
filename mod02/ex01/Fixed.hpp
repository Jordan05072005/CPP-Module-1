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
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	int toInt( void ) const;
	float toFloat( void ) const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif