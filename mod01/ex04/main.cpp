#include "ReplaceLine.hpp"
#include <iostream>

int main(int argc, char **argv){
	if (argc != 4)
	{
		std::cout << "Number of argument invalid" << std::endl;
		return 1;
	}
	ReplaceLine test = ReplaceLine(argv[1], argv[2], argv[3]);
	test.remplaceS2();
	// ReplaceLine test1 = ReplaceLine("test.txt", "a", "b");
	// test1.remplaceS2();
	// ReplaceLine test2 = ReplaceLine("test.txt", "b", " ");
	// test2.remplaceS2();
}