#pragma once
#include "Predator.h"
#include "Herbivore.h"
class AnimalFactory
{
public:
	~AnimalFactory() = default;
	virtual Predator* getPredator() = 0;
	virtual Herbivore* getHerbivore() = 0;
};

