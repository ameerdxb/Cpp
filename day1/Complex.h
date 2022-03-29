#ifndef CMP_H
#define CMP_H

#include <iostream>
using namespace std;

class Complex
{
public:
	Complex(float, float);
	Complex(float);
	void display() const;
	friend Complex operator + (const Complex&, const Complex&);
	friend ostream& operator << ( ostream&, const Complex&);
	//Complex operator + (const Complex&);
private:
	float m_fReal;
	float m_fImag;
};

#endif