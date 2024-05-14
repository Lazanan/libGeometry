#include <iostream>
#include <string>
#include "Triangle.hpp"

using namespace std;

void Triangle::setSideOne(float so)
{
	sideOne = so;
}

void Triangle::setSideTwo(float stw)
{
	sideTwo = stw;
}

void Triangle::setSideThree(float sth)
{
	sideThree = sth;
}

void Triangle::setColor(string c)
{
	color = c;
}

void Triangle::setName(string n)
{
	name = n;
}

float Triangle::getSideOne()
{
	return (sideOne);
}

float Triangle::getSideTwo()
{
	return (sideTwo);
}

float Triangle::getSideThree()
{
	return (sideThree);
}

string Triangle::getColor()
{
	return (color);
}

string Triangle::getName(){
	return (name);
}

void Triangle::display()
{
	cout << "\nThe Triangle: " << name << " have a color: " << color << ", a first side a second side and a third side with lenght : " << sideOne <<", "<< sideTwo <<", "<< sideThree << endl << endl;
}

Triangle::Triangle()
{
}

Triangle::~Triangle()
{
	cout << "Triangle destroyed" << endl;
}
