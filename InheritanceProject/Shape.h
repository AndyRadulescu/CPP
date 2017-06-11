#pragma once

#ifndef SHAPE_H
#define SHAPE_H
#include<iostream>

using namespace std;

class Shape
{
public:
	Shape();
	virtual void Perimeter();
	virtual void Surface();
	friend ostream &operator<<(ostream & os, Shape &shape);
	virtual string apeldefunctievirtuala();
	~Shape();
};

#endif 
