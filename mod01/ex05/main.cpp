#include "Harl.hpp"

int main(){
	Harl test = Harl();
	test.complain("DEBUG");
	test.complain("ERROR");
	test.complain("INFO");
	test.complain("WARNING");
}