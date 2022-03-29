#include <iostream>
#include "Date.h"

using namespace std;

void Date::SetData (int dd, int mm, int yy)
{
	SetDay(dd);
	SetMonth(mm);
	SetYear(yy);
}


void Date::SetDay(int dd)
{
	m_nDay = dd;
}


int Date::GetDay()
{
	return m_nDay;
}


void Date::SetMonth (int mm)
{
	if ((1 <= mm) && (mm <= 12))
	{
		m_nMonth = mm;
	}
	else
	{
		m_nMonth = 1;
	}
}


int Date::GetMonth()
{
	return m_nMonth;
}


void Date::SetYear (int yy)
{
	m_nYear = yy;
}


int Date::GetYear()
{
	return m_nYear;
}


void Date::displayDate()
{
	cout << GetDay() << "/" << GetMonth() << "/" << GetYear() << endl;
}


int main(int argc, const char* argv[])
{
	Date date_1;
	date_1.SetData(3, 9, 1999);
	date_1.displayDate();

}