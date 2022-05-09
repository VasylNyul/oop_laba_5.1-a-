#include <iostream>
#include <exception>;
#include <stdexcept>;
#include "Combination.h"

using namespace std;

int main()
{
	bool result;
	Combination c;
	do
	{
		try
		{
			result = true;
			cin >> c;
			cout << "Combination of numbers:" << endl << endl;
			cout << "Combination(n,k) = " << c.combination() << endl;
		}

		catch (invalid_argument i)
		{
			result = false;
			cerr << i.what() << endl;
		}
		catch (const char* str)
		{
			result = false;
			cerr << str << endl;
		}
		catch (bad_exception& e)
		{
			result = false;
			cerr << e.what() << endl;
		}

	} while (!result);

	return 0;
}
