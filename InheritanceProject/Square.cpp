#include "stdafx.h"
#include "Square.h"
#include "math.h"
#include <iostream>
#include <string>

using namespace std;

Square::Square()
{
	this->lenght = 5;
}

Square::Square(double lenght)
{
	this->lenght = lenght;
}

void Square::Perimeter()
{
	cout << "The primeter of the square : " << this->lenght * 4 << endl;
}

void Square::Surface()
{
	cout << "The surface of the square : " << pow(this->lenght, 2) << endl;
}

void Square::Diagonal() {
	cout << "The suare's diagonal: " << this->lenght*sqrt(2) << endl;
}
void Square::NumberOfLines()
{
	cout << "Number of lines for this square : " << 4 << endl;
}
string Square::apeldefunctievirtuala()
{
	return "The line of the square is : " + to_string(lenght);
}

Square::~Square()
{
}
