#ifndef _VECTORPALINDROME_H_
#define _VECTORPALINDROME_H_
#include <iostream>
using namespace std;
class CComplex
{
public:
	//Member functions
	CComplex(int, int);
	bool operator != (CComplex&);
	friend ostream& operator<<(ostream&, CComplex&);

private:
	//Member variables
	int m_nReal;
	int m_nImaginary;
};

#endif // !_VECTORPALINDROME_H_
