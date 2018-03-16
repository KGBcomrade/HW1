// lom2.cpp: определяет точку входа для консольного приложения.
//

//#include "stdafx.h"

#include <iostream>
#include <vector>
#include "EuropeanAnimalFactory.h"
#include "AfricanAnimalFactory.h"

using namespace std;


int main()
{
	EuropeanAnimalFactory* f1 = new EuropeanAnimalFactory();
	AfricanAnimalFactory* f2 = new AfricanAnimalFactory();

	Predator* a1 = f1->getPredator();
	Herbivore* a2 = f2->getHerbivore();
	a1->eat(a2);

	system("pause");
    return 0;
}

