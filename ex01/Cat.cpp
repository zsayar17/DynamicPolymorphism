#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat Constructore Has Been Worked" << std::endl;
	this->type = "Cat";
	brain = new Brain;
}

Cat::~Cat()
{
	delete brain;
	std::cout << "Cat Destructore Has Been Worked" << std::endl;
}

Cat::Cat(const Cat& other) : Animal()
{
	std::cout << "Cat Copy Constructore Has Been Worked" << std::endl;
	this->type = other.type;
	brain = new Brain;
}

Cat& Cat::operator=(const Cat& other)
{
	std::cout << "Cat Copy Assignment Has Been Worked" << std::endl;
	this->type = other.type;
	if (brain) delete brain;
	brain = new Brain;
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Meowwwwww" << std::endl;
}
