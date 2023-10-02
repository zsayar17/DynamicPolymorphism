#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog Constructore Has Been Worked" << std::endl;
	this->type = "Dog";
	brain = new Brain;
}

Dog::~Dog()
{
	delete brain;
	std::cout << "Dog Destructore Has Been Worked" << std::endl;
}

Dog::Dog(const Dog& other) : Animal()
{
	std::cout << "Dog Copy Constructore Has Been Worked" << std::endl;
	this->type = other.type;
	brain = new Brain;
}

Dog& Dog::operator=(const Dog& other)
{
	std::cout << "Dog Copy Assignment Has Been Worked" << std::endl;
	this->type = other.type;
	if (brain) delete brain;
	brain = new Brain;
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Haw Haw Haw hrrrrrrrrrrrrr" << std::endl;
}
