#include "stdafx.h"
#include "Circle.h"
#define _USE_MATH_DEFINES   
#include <cmath>
#include <math.h>
#include <iostream>
#include <string>

using namespace std;

Circle::Circle()
{
	this->radius = 5;
}

Circle::Circle(int radius)
{
	this->radius = radius;
}

int Circle::GetRaze()
{
	return radius;
}
void Circle::Perimeter()
{
	cout << "The circle's perimeter : " << 2 * this->radius*M_PI << endl;
}

void Circle::Surface()
{
	cout << "The circle's surface : " << M_PI*pow(radius, 2) << endl;
}

string Circle::apeldefunctievirtuala()
{
	return "The radius of the circle : " + to_string(radius);
}

void Circle::SetRaze(double radius)
{
	this->radius = radius;
}

Circle::~Circle()
{
}
