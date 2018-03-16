#pragma once
#include "AnimalFactory.h"
#include "Giraffe.h"
#include "Lion.h"
class AfricanAnimalFactory :
	public AnimalFactory
{
public:
	AfricanAnimalFactory();
	~AfricanAnimalFactory();
	Predator* getPredator();
	Herbivore* getHerbivore();
};

