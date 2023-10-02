#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat Constructore Has Been Worked" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal()
{
	std::cout << "WrongCat Copy Constructore Has Been Worked" << std::endl;
	this->type = other.type;
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
	std::cout << "WrongCat Copy Assignment Has Been Worked" << std::endl;
	this->type = other.type;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructore Has Been Worked" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "Wrong Meowwwwww" << std::endl;
}
