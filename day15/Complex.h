#pragma once
#include<iostream>
using namespace std;
class Complex
{
public:
	Complex(float r, float i )
	{
		cout << "Complex Const" << endl;
		m_fReal = r;
		m_fImg = i;
	}

	Complex()
	{
		cout << "Complex Default Const" << endl;
	}
	friend ostream& operator<<(ostream& o, const Complex& cmp)
	{
		o << cmp.m_fReal << "\t" << cmp.m_fImg;
		return o;
	}
private:
	float m_fReal, m_fImg;
};