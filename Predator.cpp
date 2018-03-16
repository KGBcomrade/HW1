//#include "stdafx.h"
#include "Predator.h"


Predator::Predator()
{
}


Predator::~Predator() = default;

void Predator::eat(Animal *a) {
	health += a->getSaturity();
	a->~Animal();
}
