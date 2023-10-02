#ifndef __AANIMAL_HPP__
#define __AANIMAL_HPP__

#include <iostream>

class AAnimal
{
	protected:
		std::string type;
	public:
		AAnimal(); //Default Constructore
		AAnimal(const AAnimal& other); //Copy Constructore;
		AAnimal& operator=(const AAnimal& other); // Copy Assignment
		virtual ~AAnimal();

		std::string getType() const;
		virtual void makeSound() const = 0;
};

#endif
