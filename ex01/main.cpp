#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


int main()
{
	const int count = 4;
	Animal	*animals[count];

	for (int i = 0; i < count; i++)
	{
		if (!(i % 2))
			animals[i] = new Dog;
		else
			animals[i] = new Cat;
	}
	std::cout << "-----------------------------\n";
	for (int i = 0; i < count; i++)
	{
		animals[i]->makeSound();
		std::cout << "-----------------------------\n";
		delete animals[i];
	}
	std::cout << std::endl;
	std::cout << "-----------------------------\n";
	Cat a;
	Cat b;
	b = a;
	std::cout << "-----------------------------\n";
	Cat c(a);
	std::cout << "-----------------------------\n";
	return 0;
}

