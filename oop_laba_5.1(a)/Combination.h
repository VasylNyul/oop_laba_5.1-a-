#pragma once

#include <iostream>
#include <string>
#include"BadException.h"

using namespace std;

class Combination
{
private:

	int first, second;

public:

	Combination();
	Combination(int, int) throw(BadException);
	Combination(const Combination&);
	~Combination() { };

	void set_k(int value) { first = value; };
	void set_n(int value) { second = value; };
	int get_k() const { return first; };
	int get_n() const { return second; };

	Combination& operator = (const Combination&);
	operator string() const;

	friend ostream& operator << (ostream&, const Combination&);
	friend istream& operator >> (istream&, Combination&);

	Combination& operator ++();
	Combination& operator --();
	Combination operator ++(int);
	Combination operator --(int);

	double combination();
};

