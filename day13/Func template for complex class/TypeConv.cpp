// Function template example.
#include <iostream>
using namespace std;
#include "Complex.h"
// This is a function template.
template <class X>
void swapargs(X& a, X& b)
{
	X temp;
	temp = a;
	a = b;
	b = temp;
}
int main()
{
	int i = 10, j = 20;
	double x = 10.1, y = 23.3;
	char a = 'x', b = 'z';
	cout << "Original i, j: " << i << ' ' << j << '\n';
	cout << "Original x, y: " << x << ' ' << y << '\n';
	cout << "Original a, b: " << a << ' ' << b << '\n';
	swapargs(i, j); // swap integers
	swapargs(x, y); // swap floats
	swapargs(a, b); // swap chars
	cout << "Swapped i, j: " << i << ' ' << j << '\n';
	cout << "Swapped x, y: " << x << ' ' << y << '\n';
	cout << "Swapped a, b: " << a << ' ' << b << '\n';

	Complex c1(4.5, 6.7), c2(8.9, 3.4);
	cout << c1 << endl; 
	cout << c2 << endl;
	swapargs(c1, c2);// swap Complex Nos

	cout << c1 << endl;
	cout << c2 << endl;

	return 0;
}