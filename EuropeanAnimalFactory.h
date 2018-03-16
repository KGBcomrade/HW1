#pragma once
#include "AnimalFactory.h"
#include "Goat.h"
#include "Wolf.h"
class EuropeanAnimalFactory :
	public AnimalFactory
{
public:
	EuropeanAnimalFactory();
	~EuropeanAnimalFactory();
	Herbivore* getHerbivore();
	Predator* getPredator();
};

