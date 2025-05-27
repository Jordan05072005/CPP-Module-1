#ifndef POINT_H
# define  POINT_H

# include "Fixed.hpp"

class Point
{
private:
	const Fixed x;
	const Fixed y;
public:
	Point();
	Point(float x, float y);
	Point(const Point &p);
	Point& operator=(const Point& p);
	~Point();
	const Fixed& getx()const;
	const Fixed& gety()const;
};



#endif