#pragma once
#include <iostream>
#include "Shape.h"

using namespace std;

class Poligon : public Shape
{
public:
	Poligon();
	virtual void Perimeter();
	virtual void Surface();
	virtual void NumberOfLines();
	string apeldefunctievirtuala() override;
	~Poligon();
};

