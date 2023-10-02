#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Constructore has been worked" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain Destructore Has Been Worked" << std::endl;
}

Brain::Brain(const Brain& other)
{
	for (int i = 0; i < 100; i++) this->ideas[i] = other.ideas[i];
	std::cout << "Brain Copy Constructore Has Been Worked" << std::endl;

}

Brain& Brain::operator=(const Brain& other)
{
	for (int i = 0; i < 100; i++) this->ideas[i] = other.ideas[i];
	std::cout << "Brain Copy Assignment Has Been Worked" << std::endl;
	return *this;
}

