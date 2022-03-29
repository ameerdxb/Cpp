#include <iostream>
#include "Fractional.h"

using namespace std;

long gcd(long x, long y)
{
	return (x == 0) ? y : gcd(y % x, x);
}

fraction::fraction(long n, long d)
{
	long g;
	m_lNumr = n;
	m_lDeno = d;
	if (m_lDeno == 0)
	{
		m_lDeno = 1;
	}

	g=gcd(m_lNumr, m_lDeno);
	reduction(g);
}

fraction add(const fraction& a, const fraction& b)
{
	fraction q;
	long g;
	q.m_lNumr = a.m_lNumr * b.m_lDeno;
	q.m_lNumr += a.m_lDeno * b.m_lNumr;
	q.m_lDeno = a.m_lDeno * b.m_lDeno;
	g = gcd(q.m_lNumr, q.m_lDeno);
	q.reduction(g);
	return q;

}

fraction subtract(const fraction& a, const fraction& b)
{
	fraction q;
	long g;
	q.m_lNumr = b.m_lDeno * a.m_lNumr;
	q.m_lNumr -= a.m_lDeno * b.m_lNumr;
	q.m_lDeno = a.m_lDeno * b.m_lDeno;
	g = gcd(q.m_lNumr, q.m_lDeno);
	q.reduction(g);
	return q;
}

fraction multiply(const fraction& a, const fraction& b)
{
	fraction q;
	long g;
	q.m_lNumr = a.m_lNumr * b.m_lNumr;
	q.m_lDeno = a.m_lDeno * b.m_lDeno;
	g = gcd(q.m_lNumr, q.m_lDeno);
	q.reduction(g);
	return q;
}

fraction divide(const fraction& a, const fraction& b)
{
	fraction q;
	long g;
	q.m_lNumr = a.m_lNumr * b.m_lDeno;
	q.m_lDeno = a.m_lDeno * b.m_lNumr;
	g = gcd(q.m_lNumr, q.m_lDeno);
	q.reduction(g);
	return q;
}

inline fraction fraction::inc()const
{
	fraction q;
	return add(q,fraction(1));
}


void fraction::print()
{
	cout << m_lNumr << '/' << m_lDeno << endl;
}


void fraction::reduction(long gcd)
{
	if (gcd != 0)
	{
		m_lNumr /= gcd;
		m_lDeno /= gcd;
	}
}

