#include "Letter.h"
#include <iostream>
#include <cctype>
using namespace std;

void CInput::getLetter()
{
	char szCh;
	CUpper_case oU1;
	CLower_case oLo1;
	CError oE1;
	oL1 = &oE1;
	cout << "Enter a letter: ";
	cin >> szCh;
	if (isalpha(szCh) == 0)
	{
		oL1->display(szCh);
	}
	else
	{
		if(isupper(szCh) == 0)
		{
			oL1 = &oU1;
			oL1->display(szCh);
		}
		else
		{
			oL1 = &oLo1;
			oL1->display(szCh);
		}
	}
}


void CError::display(char szLetter)
{
	cout << "Error" << endl;
}


void CUpper_case::display(char szLetter)
{
	szLetter = szLetter - 32;
	cout << szLetter << endl;
}


void CLower_case::display(char szLetter)
{
	szLetter = szLetter + 32;
	cout << szLetter << endl;
}