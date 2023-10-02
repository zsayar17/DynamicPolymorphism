#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat Constructore Has Been Worked" << std::endl;
	this->type = "Cat";
}

Cat::~Cat()
{
	std::cout << "Cat Destructore Has Been Worked" << std::endl;
}

Cat::Cat(const Cat& other) : Animal()
{
	std::cout << "Cat Copy Constructore Has Been Worked" << std::endl;
	this->type = other.type;
}

Cat& Cat::operator=(const Cat& other)
{
	std::cout << "Cat Copy Assignment Has Been Worked" << std::endl;
	this->type = other.type;
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Meowwwwww" << std::endl;
}
