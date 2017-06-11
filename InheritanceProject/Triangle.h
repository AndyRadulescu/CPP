#pragma once
#include "poligon.h"
using namespace std;

class Triangle : public Poligon
{
public:
	Triangle();
	Triangle(double line1, double line2, double line3);
	void Perimeter();
	void Surface();
	string apeldefunctievirtuala() override;
	void NumberOfLines();
	~Triangle();
private:
	double line1, line2, line3;
};

