#include <iostream>
#include <string>
#include "Sphere.hpp"

using namespace std;

void Sphere::setRadius(float r)
{
	radius = r;
}

void Sphere::setColor(string c)
{
	color = c;
}

void Sphere::setName(string n)
{
	name = n;
}

float Sphere::getRadius()
{
	return (radius);
}

string Sphere::getColor()
{
	return (color);
}

string Sphere::getName()
{
	return (name);
}

void Sphere::display()
{
	cout << "\nThe Sphere: " << name << " have a color: " << color << " and a radius: " << radius << endl << endl;
}

Sphere::Sphere()
{
}

Sphere::~Sphere()
{
	cout << "Sphere destroyed" << endl;
}
