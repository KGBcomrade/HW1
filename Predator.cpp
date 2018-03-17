//#include "stdafx.h"
#include "Predator.h"

using namespace std;

Predator::Predator()
{
}


Predator::~Predator() = default;

void Predator::eat(Animal *a) {
	if (!alive)
		cout << name << " is dead." << endl;
	else if (!a->alive)
		cout << a->name << " is already dead." << endl;
	else {
		a->kill();
		cout << name << " ate " << a->name << '.' << endl;
	}
	
}
