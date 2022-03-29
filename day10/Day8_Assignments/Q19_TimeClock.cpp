#include "TimeClock.h"

CTime::CTime(int nHr, int nMin, int nSec)
{
	m_nHr = nHr;
	m_nMin = nMin;
	m_nSec = nSec;
}

CTime::CTime(const CTime& oTime)
{
	m_nHr = oTime.m_nHr;
	m_nMin = oTime.m_nMin;
	m_nSec = oTime.m_nSec;
}

void CTime::Increment()
{

	if (m_nSec < 59)
	{
		m_nSec = m_nSec + 1;
	}
	else
	{
		m_nSec = 00;
		if (m_nMin < 59)
		{
			m_nMin = m_nMin + 1;
		}
		else
		{
			m_nMin = 0;
			if (m_nHr < 23)
			{
				m_nHr = m_nHr + 1;
			}
			else
			{
				m_nHr = 00;
			}
		}
	}
}

void CTime::Get(int& nHr, int& nMin, int& nSec) const
{
	nHr = m_nHr;
	nMin = m_nMin;
	nSec = m_nSec;
}

CClock::CClock(int nHr, int nMin, int nSec) :CurTime(nHr, nMin, nSec){}

CClock::CClock(CTime CurTime) {}

void CClock::DispCurTime() const
{
	int Hour, Minute, Second;
	CurTime.Get(Hour, Minute, Second);
	cout << Hour << ":" << Minute << ":" << Second << endl;
}

void CClock::IncrTime()
{
	CurTime.Increment();
}
