#include "Point.hpp"

Point::Point() : x(0), y(0){}

Point::Point(float x, float y) : x(x), y(y){}

Point::Point(const Point& p){
	*this = p;
}

Point::~Point(){}

Point &Point::operator=(const Point &p){
	if (this != &p){
		return (*this);
	}
	return (*this);
}

const Fixed& Point::getx()const{
	return (this->x);
}

const Fixed& Point::gety()const {
	return (this->y);
}