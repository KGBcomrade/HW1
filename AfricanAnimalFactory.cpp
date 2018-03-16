//#include "stdafx.h"
#include "AfricanAnimalFactory.h"


AfricanAnimalFactory::AfricanAnimalFactory()
{
}


AfricanAnimalFactory::~AfricanAnimalFactory() = default;

Herbivore* AfricanAnimalFactory::getHerbivore() {
	return new Giraffe();
}

Predator* AfricanAnimalFactory::getPredator() {
	return new Lion();
}