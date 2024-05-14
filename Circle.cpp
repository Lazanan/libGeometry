#include <iostream>
#include <string>
#include "Circle.hpp"

using namespace std;

void Circle::setRadius(float r)
{
	radius = r;
}

void Circle::setColor(string c)
{
	color = c;
}

void Circle::setName(string n)
{
	name = n;
}

float Circle::getRadius()
{
	return (radius);
}

string Circle::getColor()
{
	return (color);
}

string Circle::getName()
{
	return (name);
}

void Circle::display()
{
	cout << "\nThe circle: " << name << " have a color: " << color << " and a radius: " << radius << endl << endl;
}

Circle::Circle()
{
}

Circle::~Circle()
{
	cout << "Circle destroyed" << endl;
}
