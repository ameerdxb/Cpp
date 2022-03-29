#include "Time.h"

CTime::CTime(int nHour, int nMinute, int nSecond)
{
	m_nHour = nHour;
	m_nMinute = nMinute;
	m_nSecond = nSecond;
}

CTime::CTime(const CTime& oTime)
{
	m_nHour = oTime.m_nHour;
	m_nMinute = oTime.m_nMinute;
	m_nSecond = oTime.m_nSecond;
}

void CTime::Increment()
{

	if (m_nSecond < 59)
	{
		m_nSecond = m_nSecond + 1;
	}
	else
	{
		m_nSecond = 00;
		if (m_nMinute < 59)
		{
			m_nMinute = m_nMinute + 1;
		}
		else
		{
			m_nMinute = 0;
			if (m_nHour < 23)
			{
				m_nHour = m_nHour + 1;
			}
			else
			{
				m_nHour = 00;
			}
		}
	} 
}

void CTime::Get(int& nHour, int& nMinute, int& nSecond) const
{
	 nHour= m_nHour;
	 nMinute = m_nMinute;
	 nSecond=m_nSecond;
}


