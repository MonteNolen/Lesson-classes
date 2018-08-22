#pragma once
#include "iostream"

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
	// чистая виртуальная функция,
	virtual void walk() = 0;
};