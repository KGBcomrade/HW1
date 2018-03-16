#pragma once
#include "Animal.h"
class Predator :
	public Animal
{
public:
	Predator();
	~Predator();
	void eat(Animal *a);
};

