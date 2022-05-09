#include "Combination.h"
#include <sstream>

using namespace std;

Combination::Combination()
{
	first = 0;
	second = 0;

}

Combination::Combination(int f, int s)throw (BadException)
{
	if(first > second)
		throw BadException("Error (first > second)");
	if(first == 0 || second == 0 )
		throw BadException("Error (one of arguments == 0)");
		
	first = f;
	second = s;
}

Combination::Combination(const Combination& f)
{
	first = f.first;
	second = f.second;
}

Combination& Combination::operator = (const Combination& f)
{
	first = f.first;
	second = f.second;

	return *this;
}

Combination::operator string() const
{
	stringstream ss;
	ss << " k = " << first << endl;
	ss << " n = " << second << endl;

	return ss.str();
}

ostream& operator << (ostream& out, const Combination& f)
{
	out << string(f);
	return out;
}

istream& operator >> (istream& in, Combination& f) throw (const char*, bad_exception, invalid_argument)
{
	cout << " k = "; in >> f.first; cout << endl;
	cout << " n = "; in >> f.second; cout << endl;
	
	if (f.first > f.second)
		throw "Error(k > n)";
	if (f.first == 0 && f.second == 0)
		throw bad_exception();
	if (f.first == 0 || f.second == 0)
		throw invalid_argument("Error (one of arguments == 0)");
	return in;

}

Combination& Combination::operator ++()
{
	first++;
	return *this;
}

Combination& Combination::operator --()
{
	first--;
	return *this;
}

Combination Combination::operator ++(int)
{
	Combination t(*this);
	second++;
	return t;
}

Combination Combination::operator --(int)
{
	Combination t(*this);
	second--;
	return t;
}

double Combination::combination()
{
	int a, b, d, e;
	double c;
	a = 1;
	for (int i = 1; i <= second; i++)
	{
		a *= i;
	}

	b = second - first;
	d = 1;
	for (int i = 1; i <= b; i++)
	{
		d *= i;
	}

	e = 1;
	for (int i = 1; i <= first; i++)
	{
		e *= i;
	}

	c = a / (d * e);
	return c;
};
