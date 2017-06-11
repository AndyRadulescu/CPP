#include "stdafx.h"
#include "math.h"
#include "Triangle.h"
#include <string>

double p = 0;
Triangle::Triangle()
{
	this->line1 = 2;
	this->line2 = 2;
	this->line3 = 2;
}

Triangle::Triangle(double line1, double line2, double line3)
{
	this->line1 = line1;
	this->line2 = line2;
	this->line3 = line3;
}

void Triangle::Perimeter()
{
	p = line1 + line2 + line3;
	cout << "The perimeter of the Triangle : " << p << endl;
}

void Triangle::Surface()
{
	cout << "The surface of the Triangle is : " << sqrt(p*(p - line1)*(p - line2)*(p - line3)) << endl;
}

string Triangle::apeldefunctievirtuala()
{
	return "The lines of the triangel are : " + to_string(line1) + " , " + to_string(line2) + " , " + to_string(line2);
}

void Triangle::NumberOfLines()
{
	cout << "Triangle's number of lines : 3" << endl;
}


Triangle::~Triangle()
{
}
