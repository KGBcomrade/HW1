#pragma once
#include <string>
#include <iostream>

class Animal {
public:
	bool alive;
	std::string name;
	Animal();
	~Animal();
	void kill();
};