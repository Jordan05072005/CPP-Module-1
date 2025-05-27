#include "header/Dog.hpp"
#include "header/Cat.hpp"
#include "header/Animal.hpp"
#include "header/WrongAnimal.hpp"
#include "header/WrongCat.hpp"

int main()
{
	int j = 10;
	const Animal *a[j];
	for (int i = 0; i < j; i++){
		if (i % 2 == 0){
			a[i] = new Dog();
		}
		else{
			a[i] = new Cat;
		}
	}
	for (int i = 0; i < j; i++){
		delete a[i];
	}
	return 0;
}