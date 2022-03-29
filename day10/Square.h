#ifndef SQUARE_H
#define SQUARE_H

#include <iostream>
using namespace std;

#include "Shape.h"

class Square : public Shape
{
public:
	Square(int side)
	{
		m_nSide = side;
		cout << "Square Const" << endl;
	}
	~Square()
	{
		cout << "Square Dest" << endl;
	}
	virtual void Area()
	{
		cout << "Area of Square = " << m_nSide * m_nSide << endl;
	}
	virtual void Perimeter()
	{
		cout << "Perimeter of Square = " << 4 * m_nSide << endl;
	}


private:
	int m_nSide;
};

#endif

