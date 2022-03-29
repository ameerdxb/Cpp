#ifndef _TIMECLOCK_H_
#define _TIMECLOCK_H_

#include<iostream>

using namespace std;

class CTime
{
public:
	CTime(int nHr = 0, int nMin = 0, int nSec = 0);
	CTime(const CTime&);
	void Increment();
	void Get(int&, int&, int&)const;

private:
	int m_nHr;
	int m_nMin;
	int m_nSec;
};

class CClock
{
private:
	CTime CurTime;

public:
	CClock(int nHr, int nMinu, int nSec);
	CClock(CTime);
	void DispCurTime() const;
	void IncrTime();
};
#endif // !_TIMECLOCK_H_
