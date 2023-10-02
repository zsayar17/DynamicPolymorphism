#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << i->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << meta->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete j;
	delete i;


	std::cout << "-----------------Wrong--------------------" << std::endl;
	const WrongAnimal* meta1 = new WrongAnimal();
	const WrongAnimal* j1 = new WrongCat();

	std::cout << j1->getType() << " " << std::endl;
	j1->makeSound();
	meta1->makeSound();

	delete j1;
	delete meta1;
	return 0;
}

