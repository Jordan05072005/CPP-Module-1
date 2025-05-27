#include "Harl.hpp"

int main(int argc, char **argv){
	if (argc != 2)
		return (1);
	Harl test = Harl();
	test.complain(argv[1]);
}