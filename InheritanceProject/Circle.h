#pragma once
#ifndef CIRCLE_H
#define CIRCLE_H
#include "Shape.h"
#include<iostream>

using namespace std;

class Circle : public Shape
{
public:
	Circle();
	Circle(int radius);
	int GetRaze();
	void SetRaze(double raze);
	void Perimeter();
	void Surface();
	string apeldefunctievirtuala() override;
	~Circle();
private:
	double radius;
};
#endif // !CIRCLE_H

