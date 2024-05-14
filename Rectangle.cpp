#include <iostream>
#include <string>
#include "Rectangle.hpp"

using namespace std;

void Rectangle::setWidth(float w)
{
	width = w;
}

void Rectangle::setHeight(float h)
{
	height = h;
}

void Rectangle::setColor(string c)
{
	color = c;
}

void Rectangle::setName(string n)
{
	name = n;
}

float Rectangle::getHeight()
{
	return (height);
}

float Rectangle::getWidth()
{
	return (width);
}

string Rectangle::getColor()
{
	return (color);
}

string Rectangle::getName()
{
	return (name);
}

void Rectangle::display()
{
	cout << "\nThe Rectangle: " << name << " have a color: " << color << ", a height and width: " << height << width << endl << endl;
}

Rectangle::Rectangle()
{
}

Rectangle::~Rectangle()
{
	cout << "Rectangle destroyed" << endl;
}
