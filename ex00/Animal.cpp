#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal Constructore Has Been Worked" << std::endl;
	type = "Animal";
}

Animal::Animal(const Animal& other)
{
	std::cout << "Animal Copy Constructore Has Been Worked" << std::endl;
	type = other.type;
}

Animal& Animal::operator=(const Animal& other)
{
	std::cout << "Animal Copy Assignment Has Been Worked" << std::endl;
	type = other.type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal Destructore Has Been Worked" << std::endl;
}

std::string Animal::getType() const
{
	return (this->type);
}

void Animal::makeSound() const
{
	std::cout << "Animal soundddd" << std::endl;
}
