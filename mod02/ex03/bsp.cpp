#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point){
	Fixed denom;
	Fixed alpha;
	Fixed betha;
	Fixed gamma;

	denom = (((b.gety() - c.gety()) * (a.getx() - c.getx())) + ((c.getx() - b.getx()) * (a.gety() - c.gety())));
	alpha = (((b.gety() - c.gety()) * (point.getx() - c.getx()) + ((c.getx() - b.getx()) * (point.gety() - c.gety()))) / denom.toFloat());
	betha = (((c.gety() - a.gety()) * (point.getx() - c.getx()) + ((a.getx() - c.getx()) * (point.gety() - c.gety()))) / denom.toFloat());
	gamma = Fixed(1) - alpha - betha;
	if (alpha > 0 && betha > 0 && gamma > 0 && (alpha + betha + gamma) == 1)
		return (true);
	return (false);
}

int main(){
	bool e = bsp(Point(0, 0), Point(4, 0), Point(2 ,3), Point(2, 1)); // dans
	if (e)
		std::cout << "success\n"<< std::endl;
	else
		std::cout << "ERROR\n" << std::endl;
	bool e1 = bsp(Point(0, 0), Point(4, 0), Point(2 ,3), Point(2, 0)); // sur
	if (e1)
		std::cout << "success\n"<< std::endl;
	else
		std::cout << "ERROR\n" << std::endl;
	bool e2 = bsp(Point(0, 0), Point(4, 0), Point(2 ,3), Point(5, 5)); // hors
	if (e2)
		std::cout << "success\n" << std::endl;
	else
		std::cout << "ERROR\n" << std::endl;	
}
