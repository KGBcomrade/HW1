#pragma once
#include "Predator.h"
#include "Herbivore.h"
class AnimalFactory
{
public:
	AnimalFactory();
	~AnimalFactory();
	virtual Predator* getPredator();
	virtual Herbivore* getHerbivore();
};

