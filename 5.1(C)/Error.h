#pragma once
#include <iostream>
#include <string>

using namespace std;

class Error
{
	string name;
public:
	Error()
		:name("Error") {}
	Error(string name)
		:name(name) {}
	string what() const { return name; }
};
