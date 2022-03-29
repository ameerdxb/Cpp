#include "Q34_VectorPalindrome.h"
#include <vector>

template<typename T>
bool CheckPalVector(vector <T> v)
{
	int flag = 0;
	for (int i = 0; i < v.size(); )
	{
		for (int j = v.size() - 1; j >= 0; )
		{
			if (v[i] != v[j])
			{
				flag = 1;
				return false;
			}
			else
			{
				flag = 0;
			}
			i++;
			j--;
		}
	}
	return true;
}


CComplex::CComplex(int nReal, int nImaginary)
{
	m_nReal = nReal;
	m_nImaginary = nImaginary;
}


bool CComplex::operator!=(CComplex& complex)
{
	if ((complex.m_nReal != m_nReal) && (complex.m_nImaginary != m_nImaginary))
	{
		return true;
	}
	else
	{
		return false;
	}
}


ostream& operator<<(ostream& out, CComplex& oComplex)
{
	out << oComplex.m_nReal << " + " << oComplex.m_nImaginary << "i" << endl;
	return out;
}


int main()
{
	int nLength;
	char chVal;
	vector<char> v;

	cout << "Enter the total length of characters required: " << endl;
	cin >> nLength;
	cout << "Input: ";

	for (int i = 0; i < nLength; i++)
	{
		cin >> chVal;
		v.push_back(chVal);
	}

	if (CheckPalVector(v) != 0)
	{
		cout << "The vector is palindrome" << endl;
	}
	else
	{
		cout << "Thw vector is not a palindrome" << endl;
	}

	vector<CComplex>c;
	vector<CComplex>::iterator p;

	c.push_back(CComplex(3, 4));
	c.push_back(CComplex(5, 6));
	c.push_back(CComplex(1, 1));
	c.push_back(CComplex(5, 6));
	c.push_back(CComplex(3, 4));

	cout << "Complex numbers: ";
	for (p = c.begin(); p < c.end(); p++)
	{
		cout << *p;
	}

	if (CheckPalVector(c) != 0)
	{
		cout << "The complex numbers are palindrome" << endl;
	}
	else
	{
		cout << "The complex numbers are not palindrome" << endl;
	}

	return 0;

}
