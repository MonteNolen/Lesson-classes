#pragma once
#include "iostream"
#include "Mammal.h"

using namespace std;

class Mammal
{
protected:
	int hp;
	double speed;

public:
	Mammal();
	~Mammal();
	void breathe();
	virtual void talk();
	virtual void walk() = 0;
};