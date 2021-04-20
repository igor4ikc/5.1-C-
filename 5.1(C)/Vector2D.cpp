#include "Vector2D.h"
#include<iostream>
#include <string>
#include <sstream>
using namespace std;
Vector2D::Vector2D()
	: x(0), y(0)
{}

Vector2D::Vector2D(double x, double y)
try
	:x(exp2(x)), y(exp1(y))
{}
catch (bad_exception& e)
{
	cout << e.what() << endl;
	exit(1);
}
catch (exception* e)
{
	cout << e->what() << endl;
	exit(1);
}
catch (Error e)
{
	cout << e.what() << endl;
	exit(1);
}

double Vector2D::exp1(double y) throw(exception, Error)
{
	if (y == 1)
		throw new exception;
	if (y < 0 && y > -10)
		throw Error("y < 0 && y > -10");
	return y;
}

double Vector2D::exp2(double x) throw(bad_exception)
{
	if (x == 0)
		throw bad_exception();
	return x;
}

Vector2D::Vector2D(const Vector2D& t)
{
	this->x = t.x;
	this->y = t.y;
}
istream& operator >> (istream& in, Vector2D& a)
{
	double x, y;
	cout << "x = "; in >> x;
	cout << "y = "; in >> y;
	if (x == 0)
		throw new Error("x = 0");
	if (y == 1)
		throw bad_exception();
	a.setX(x), a.setY(y);
	return in;
}
Vector2D::operator string() const
{
	stringstream sout;
	sout << "(" << this->x << "; " << this->y << ")" << endl;
	return sout.str();
}

ostream& operator << (ostream& out, Vector2D& a)
{
	out << string(a) << endl;
	return out;
}