//#include "stdafx.h"
#include "Animal.h"

using namespace std;

Animal::Animal() {
	
}

Animal::~Animal() = default;

void Animal::kill() {
	if (!alive)
		cout << name << " is already dead." << endl;
	else {
		alive = false;
		cout << name << " killed." << endl;
	}
}
