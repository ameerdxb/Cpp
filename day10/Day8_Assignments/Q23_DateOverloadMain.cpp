#include "DateOverload.h"

using namespace std;

int main()
{
	Date d1;
	Date d2(12, 27, 1992);
	Date d3(12, 28, 1992);

	cout << "d1 is " << d1 << endl;
	cout << "d2 is " << d2 << endl;
	cout << "d3 is " << d3 << endl;
	// Increment day by one
	cout << "d2 + 1 = " << ++d2 << endl;
	if (d2 == d3)
	{
		cout << "d2 is equal to d3" << endl;
	}
	else
	{
		cout << "d2 is not equal to d3" << endl;
	}
	if (d2 > d3)
	{
		cout << "d2 is greater than d3" << endl;
	}
	else
	{
		cout << "d2 is not greater than d3" << endl;
	}

	if (d2 < d3)
	{
		cout << "d2 is less than d3" << endl;
	}
	else
	{
		cout << "d2 is not less than d3" << endl;
	}
}