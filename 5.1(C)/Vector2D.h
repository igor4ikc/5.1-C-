#pragma once
#include "Error.h"
#include<iostream>
#include <string>

using namespace std;

class Vector2D
{
private:
	double x, y;

public:
	Vector2D();
	Vector2D(double x, double y);
	Vector2D(const Vector2D&);

	double getX() const { return x; }
	double getY() const { return y; }
	void setX(double value) { x = value; }
	void setY(double value) { y = value; }
	double exp2(double x);
	double exp1(double y);
	friend istream& operator >> (istream& in, Vector2D& a);
	friend ostream& operator << (ostream& in, Vector2D& a);

	operator string() const;
};
