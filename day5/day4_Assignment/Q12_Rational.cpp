#include <iostream>
#include "Rational.h"

using namespace std;

Rational::Rational(int n, int d)
{
	m_nNumr = n; 
	m_nDeno = d; 
	reduction(); 
}


Rational Rational::addition(const Rational& a)
{
	Rational q;
	q.m_nNumr = a.m_nNumr * m_nDeno;
	q.m_nNumr += a.m_nDeno * m_nNumr;
	q.m_nDeno = a.m_nDeno * m_nDeno;
	q.reduction(); 
	return q;
}


Rational Rational::subtraction(const Rational& s)
{
	Rational q; 
	q.m_nNumr = s.m_nDeno * m_nNumr;
	q.m_nNumr -= m_nDeno * s.m_nNumr;
	q.m_nDeno = s.m_nDeno * m_nDeno;
	q.reduction();
	return q;
}


Rational Rational::multiplication(const Rational& m)
{
	Rational q;
	q.m_nNumr = m.m_nNumr * m_nNumr;
	q.m_nDeno = m.m_nDeno * m_nDeno;
	q.reduction();
	return q;
}


Rational Rational::division(const Rational& v)
{
	Rational q;
	q.m_nNumr = v.m_nDeno * m_nNumr;
	q.m_nDeno = m_nDeno * v.m_nNumr;
	q.reduction();
	return q;
}


void Rational::printRational()
{
	if (m_nDeno == 0)
	{
		cout << "\nError!!! Divide by zero" << '\n';
	}
	else if (m_nNumr == 0)
	{
		cout << 0;
	}
	else
	{
		cout << m_nNumr << '/' << m_nDeno;
	}
}


void Rational::reduction()
{
	int largest;
	largest = m_nNumr > m_nDeno ? m_nNumr : m_nDeno;
	int gcd = 0;
	for (int i = 2; i <= largest; i++)
	{
		if (m_nNumr % i == 0 && m_nDeno % i == 0)
		{
			gcd = i;
		}
	}
	if (gcd != 0)
	{
		m_nNumr /= gcd;
		m_nDeno /= gcd;
	}
}
