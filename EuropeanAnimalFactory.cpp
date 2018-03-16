//#include "stdafx.h"
#include "EuropeanAnimalFactory.h"


EuropeanAnimalFactory::EuropeanAnimalFactory()
{
}


EuropeanAnimalFactory::~EuropeanAnimalFactory() = default;

Herbivore* EuropeanAnimalFactory::getHerbivore() {
	return new Goat();
}

Predator* EuropeanAnimalFactory::getPredator() {
	return new Wolf();
}