#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <iostream>
using namespace std;

#include "Shape.h"

class Triangle : public Shape
{
public:
	Triangle(int b, int h)
	{
		m_nBase = b;
		m_nHeight = h;
		cout << "Triangle Const" << endl;
	}
	~Triangle()
	{
		cout << "Triangle Dest" << endl;
	}
	virtual void Area()
	{
		cout << "Area of Triangle = " << 0.5 * m_nBase * m_nHeight << endl;
	}

	virtual void Perimeter()
	{
		cout << "Perimeter of Triangle = " << m_nBase + m_nHeight << endl;
	}
private:
	int m_nBase;
	int m_nHeight;
};

#endif