#pragma once
#include<iostream>
using namespace std;
class Complex
{
public:
	Complex(float r = 0.0, float i = 0.0)
	{
		cout << "Complex Const" << endl;
		m_fReal = r;
		m_fImg = i;
	}
	friend ostream& operator<<(ostream& o, const Complex& cmp)
	{
		o << cmp.m_fReal << "\t" << cmp.m_fImg;
		return o;
	}
private:
	float m_fReal, m_fImg;
};