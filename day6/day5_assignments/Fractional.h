#ifndef _FRACTIONAL_H
#define _FRACTIONAL_H

class fraction
{
// Member functions
public:
	fraction (long = 0, long = 1);
	friend fraction add(const fraction&, const fraction&);
	friend fraction subtract(const fraction&, const fraction&);
	friend fraction multiply(const fraction&, const fraction&);
	friend fraction divide(const fraction&, const fraction&);
	void print();
	fraction inc() const;

// Member variables
private:
	long m_lNumr;
	long m_lDeno;
	void reduction(long);
};

#endif //!_fraction_H