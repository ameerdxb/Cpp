#ifndef _RATIONAL_H
#define _RATIONAL_H

class Rational
{
// Member functions
public:
	Rational (int = 0, int = 1);
	Rational addition(const Rational&);
	Rational subtraction(const Rational&);
	Rational multiplication(const Rational&);
	Rational division(const Rational&);
	void printRational();

// Member variables
private:
	int m_nNumr;
	int m_nDeno;
	void reduction();
};

#endif //!_RATIONAL_H