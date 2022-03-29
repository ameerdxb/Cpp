#include "Clock.h"
#include"Time.h"

CClock::CClock(int nHour, int nMinute, int nSecond):CurTime(nHour,nMinute,nSecond)
{
	
}

CClock::CClock(CTime CurTime)
{
	/*int Hour, Minute, Second;
	CurTime.Get(Hour, Minute, Second);*/
}

void CClock::DispCurTime() const
{
	int Hour, Minute, Second;
	CurTime.Get(Hour, Minute, Second);
	cout << endl << Hour << ":" << Minute << ":" << Second;
}

void CClock::IncrTime()
{
	CurTime.Increment();
}
