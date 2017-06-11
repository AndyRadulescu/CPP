#include "stdafx.h"
#include "Shape.h"
#include <string>
#include <iostream>

using namespace std;

Shape::Shape()
{
}

void Shape::Perimeter()
{
}

void Shape::Surface()
{
}

Shape::~Shape()
{

}

string Shape::apeldefunctievirtuala()
{
	return "Shape from shape";
}

ostream & operator<<(ostream & os, Shape & shape)
{
	os << shape.apeldefunctievirtuala() << endl;
	return os;
}
