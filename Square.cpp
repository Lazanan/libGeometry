#include <iostream>
#include <string>
#include "Square.hpp"

using namespace std;

void Square::setWidth(float w)
{
	width = w;
}

void Square::setColor(string c)
{
	color = c;
}

void Square::setName(string n)
{
	name = n;
}

float Square::getWidth()
{
	return (width);
}

string Square::getColor()
{
	return (color);
}

string Square::getName()
{
	return (name);
}

void Square::display()
{
	cout << "\nThe Square: " << name << " have a color: " << color << ", and width: " << width << endl << endl;
}

Square::Square()
{
}

Square::~Square()
{
	cout << "Square destroyed" << endl;
}
