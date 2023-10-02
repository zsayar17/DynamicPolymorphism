#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal Constructore Has Been Worked" << std::endl;
	type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
	std::cout << "WrongAnimal Copy Constructore Has Been Worked" << std::endl;
	type = other.type;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
	std::cout << "WrongAnimal Copy Assignment Has Been Worked" << std::endl;
	type = other.type;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructore Has Been Worked" << std::endl;

}

void WrongAnimal::makeSound() const
{
	std::cout << "Animal Sound" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return(type);
}
