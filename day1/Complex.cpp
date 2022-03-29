#include "Complex.h"

Complex::Complex(float r, float img)
{
	//cout << "Two Parameter Const" << endl;
	m_fReal = r;
	m_fImag = img;
}

Complex::Complex(float r)
{
	//cout << "One Parameter Const" << endl;
	m_fReal = r;
	m_fImag = 0.0;
}

void Complex::display() const
{
	cout << m_fReal << "\t" << m_fImag << endl;
}

Complex operator + (const Complex& cmp1, const Complex& cmp2)
{
	return Complex(cmp1.m_fReal + cmp2.m_fReal, cmp1.m_fImag + cmp2.m_fImag);
}
/*Complex Complex::operator+(const Complex& c)
{
	return Complex(m_fReal + c.m_fReal, m_fImag + c.m_fImag);
}*/

ostream& operator << ( ostream& out, const Complex& cmp)
{
	out<< cmp.m_fReal << "\t" << cmp.m_fImag << endl;
	return out;
}

void main()
{
	Complex c1(2.3,6.7);
	Complex c2(8.9);
	Complex c3 = c1 + c2; //c1.operator +(c2)
	//operator +(c1,c2);
	//c3.display();
	//cin >> c1;
	cout << c3;// << c2 << c1;
//	int a = 9, b = 8, c = 7;
//	cout << a << b << c;
}
