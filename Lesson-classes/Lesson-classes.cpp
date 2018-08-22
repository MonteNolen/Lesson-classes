// Lesson-classes.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "iostream"
#include "Mammal.h"
#include "Dog.h"
#include "Cat.h"
#include "Human.h"

using namespace std;

Mammal::Mammal() // Обратите внимание на: use of :: (оператор разрешения области
				 // видимости)
{
	hp = 100;
	speed = 1.0;
	cout << "Млекопитающее создано!" << endl;
}
Mammal::~Mammal()
{
	cout << "Млекопитающее скончалось!" << endl;
}
void Mammal::breathe()
{
	cout << "Вдох… выдох" << endl;
}
void Mammal::talk()
{
	cout << "Млекопитающее говорит... подмените эту функцию!" << endl;
}

int main()
{
	setlocale(LC_ALL, "rus");

    return 0;
}

