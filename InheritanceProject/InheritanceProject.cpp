// InheritanceProject.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Shape.h"
#include "Circle.h"
#include "Square.h"
#include "triangle.h"

using namespace std;
int main()
{
	Shape *shapes[15];
	Poligon *poligons[15];
	double n;
	cout << "Introduce the radius for the circles(5 values) : " << std::endl << std::endl;
	for (int i = 0; i < 5; i++) {
		cin >> n;
		shapes[i] = new Circle(n);
	}
	cout << endl << "Circles perimeter:" << std::endl << std::endl;
	for (int i = 0; i < 5; i++) {
		shapes[i]->Perimeter();
		cout << *shapes[i];
	}
	std::cout << std::endl << "Introduce the line for the squares(5 values) : " << std::endl << std::endl;
	for (int i = 0; i < 5; i++) {
		cin >> n;
		poligons[i] = new Square(n);
	}
	cout << endl << "Squares perimeteres" << std::endl << std::endl;
	for (int i = 0; i < 5; i++) {
		poligons[i]->Perimeter();
	}
	cout << endl << "Triangle base values :2,2,2 " << std::endl << std::endl;
	Poligon *triangle = new Triangle();
	triangle->Perimeter();
	triangle->Surface();

	std::cout << std::endl << "Squares base value : 5" << endl << endl;
	Shape *square = new Square();  //this is a shape referenced object
	Poligon *square2 = new Square(); //this is a poigon referenced object
	square->Perimeter();
	square2->NumberOfLines();

	//example of polimorfism and always calling a virtual function to override the output for each type of shape.
	std::cout << endl << "Example of polimorfism and always calling a virtual function to override the output for each type of shape." << std::endl;


	Shape *polimorfShape = new Shape();
	Shape *polimorfPoligon = new Poligon();
	Shape *polimorfSquare = new Square(5);
	Shape *polimorfCircle = new Circle(5);
	Shape *polimorfTriangle = new Triangle(4, 4, 4);


	std::cout << std::endl << *polimorfShape << *polimorfPoligon << *polimorfSquare << *polimorfCircle << *polimorfTriangle;
	return 0;
}