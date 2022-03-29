#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
using namespace std;

class Shape //Abstract class 
{
public:
	Shape()
	{
		cout << "Shape Const" << endl;
	}
	~Shape()
	{
		cout << "Shape Dest" << endl;
	}
	void print()
	{
		cout << "SHape Print";
	}
	virtual void Area() = 0;//pure virtual function
	virtual void Perimeter() = 0;//pure virtual function

private:

};

#endif

