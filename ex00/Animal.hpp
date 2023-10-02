#ifndef __ANIMAL_HPP__
#define __ANIMAL_HPP__

#include <iostream>

class Animal
{
	protected:
		std::string type;
	public:
		Animal(); //Default Constructore
		Animal(const Animal& other); //Copy Constructore;
		Animal& operator=(const Animal& other); // Copy Assignment
		virtual ~Animal();

		std::string getType() const;
		virtual void makeSound() const;
};

#endif
