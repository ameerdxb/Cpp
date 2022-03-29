#include <iostream>
#include "Rational.h"

using namespace std;

int main()
{
	Rational a(4, 5), b(6, 3), r;

	a.printRational();
	cout << " + ";
	b.printRational();
	r = a.addition(b);
	cout << " = ";
	r.printRational();
	cout << '\n';
	
	a.printRational();
	cout << " - ";
	b.printRational();
	r = a.subtraction(b);
	cout << " = ";
	r.printRational();
	cout << '\n';
	
	a.printRational();
	cout << " x ";
	b.printRational();
	r = a.multiplication(b);
	cout << " = ";
	r.printRational();
	cout << '\n';
	
	a.printRational();
	cout << " / ";
	b.printRational(); 
	r = a.division(b);
	cout << " = ";
	r.printRational();
	cout << endl;

	return 0;
}