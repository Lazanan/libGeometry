#include <iostream>
#include <string>
#include "Cylinder.hpp"

using namespace std;

void Cylinder::setRadius(float r)
{
	radius = r;
}

void Cylinder::setHeight(float h)
{
	height = h;
}

void Cylinder::setColor(string c)
{
	color = c;
}

void Cylinder::setName(string n)
{
	name = n;
}

float Cylinder::getRadius()
{
	return (radius);
}

float Cylinder::getHeight()
{
	return (height);
}

string Cylinder::getColor()
{
	return (color);
}

string Cylinder::getName()
{
	return (name);
}

void Cylinder::display()
{
	cout << "\nThe Cylinder: " << name << " have a color: " << color << " with height: " << height <<" and a radius: " << radius << endl << endl;
}

Cylinder::Cylinder()
{
}

Cylinder::~Cylinder()
{
	cout << "Cylinder destroyed" << endl;
}
