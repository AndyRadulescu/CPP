#pragma once
#ifndef SQUARE_H
#define SQUARE_H
#include<iostream>
#include "Poligon.h"

using namespace std;

class Square : public Poligon
{
public:
	Square();
	Square(double lenght);
	void Perimeter();
	void Surface();
	void Diagonal();
	void NumberOfLines();
	string apeldefunctievirtuala() override;

	~Square();
private:
	double lenght;
};
#endif // !SQUARE_H

