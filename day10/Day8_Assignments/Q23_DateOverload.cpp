#include "DateOverload.h"

const int Date::days[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

ostream& operator<<(ostream& output, const Date& d)
{

	output << d.m_nDay << " / " << d.m_nMonth << " / " << d.m_nYear;
	return output;
}


Date::Date(int m, int d, int y)
{
	setDate(m, d, y);
}

void Date::setDate(int mm, int dd, int yy)
{
	m_nMonth = (mm >= 1 && mm <= 12) ? mm : 1;
	m_nYear = (yy >= 1900 && yy <= 2100) ? yy : 1900;

	// test for a leap year
	if (m_nMonth == 2 && leapYear(m_nYear))
	{
		m_nDay = (dd >= 1 && dd <= 29) ? dd : 1;
	}
	else
	{
		m_nDay = (dd >= 1 && dd <= days[m_nMonth]) ? dd : 1;
	}
}


Date& Date::operator++()
{
	helpIncrement();
	return *this;
}


bool Date::leapYear(int testYear) const
{
	if (testYear % 400 == 0 || (testYear % 100 != 0 && testYear % 4 == 0))
	{
		return true;
	}
	else
	{
		return false;
	}
}


bool Date::endOfMonth(int testDay) const
{
	if (m_nMonth == 2 && leapYear(m_nYear))
	{
		return testDay == 29;
	}
	else
	{
		return testDay == days[m_nMonth];
	}
}


int Date::operator==(const Date& second) const
{
	if (m_nDay == second.m_nDay && m_nMonth == second.m_nMonth && m_nYear == second.m_nYear)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}


int Date::operator>(const Date& second) const
{
	if (m_nYear > second.m_nYear)
	{
		return 1;
	}
	if (m_nYear == second.m_nYear && m_nMonth > second.m_nMonth)
	{
		return 1;
	}
	if (m_nYear == second.m_nYear && m_nMonth == second.m_nMonth && m_nDay > second.m_nDay)
	{
		return 1;
	}

	return 0;
}


int Date::operator<(const Date& second) const
{
	if (m_nYear < second.m_nYear)
	{
		return 1;
	}
	if (m_nYear == second.m_nYear && m_nMonth < second.m_nMonth)
	{
		return 1;
	}
	if (m_nYear == second.m_nYear && m_nMonth == second.m_nMonth && m_nDay < second.m_nDay)
	{
		return 1;
	}

	return 0;
}


void Date::helpIncrement()
{
	if (!endOfMonth(m_nDay))
	{
		m_nDay++;
	}
	else
	{
		if (m_nMonth < 12)
		{
			m_nMonth++;
			m_nDay = 1;
		}
		else
		{
			m_nYear++;
			m_nMonth = 1;
			m_nDay = 1;
		}
	}
}