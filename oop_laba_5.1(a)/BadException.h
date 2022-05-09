#pragma once
#include <iostream>
#include <string>

using namespace std;

class BadException
{
private:
	string what;
public:
	BadException(string w) :what(w) {}

	string What() { return what; }
};