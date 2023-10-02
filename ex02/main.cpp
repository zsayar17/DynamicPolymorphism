#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


int main()
{
	AAnimal *a1 = new Cat;
	AAnimal *a2 = new Dog;

	a1->makeSound();
	a2->makeSound();

	delete a1;
	delete a2;

	/*AAnimal *a3 = new AAnimal;
	a3->makeSound();*/
	return 0;
}

