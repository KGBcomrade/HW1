//#include "stdafx.h"
#include "Predator.h"

using namespace std;

Predator::Predator()
{
}


Predator::~Predator() = default;

void Predator::eat(Animal *a) {
<<<<<<< HEAD
	if (!alive)
		cout << name << " is dead." << endl;
	else if (!a->alive)
		cout << a->name << " is already dead." << endl;
	else {
		a->kill();
		cout << name << " ate " << a->name << '.' << endl;
	}
	
=======
	health += a->getSaturity();
	delete a;
>>>>>>> 52f7bda0d4aa9aebdbe2ecbb4c87cdd1e0b84171
}
