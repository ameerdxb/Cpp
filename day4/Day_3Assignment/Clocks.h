#ifndef _CLOCKS_H_
#define _CLOCKS_H_

#include <iostream>

using namespace std;

class CClocks
{
// Member variables
private:
	int m_nHr;
	int m_nMin;
	int m_nSec;

// Member functions
public:
	CClocks(int hours, int minutes, int seconds)
	{
		setTime(hours, minutes, seconds);
	}
	CClocks()
	{
		setTime(0, 0, 0);
	}

	void setTime(int hours, int minutes, int seconds)
	{
		if (0 <= hours && hours < 24)
		{
			m_nHr = hours;
		}
		else
		{
			m_nHr = 0;
		}

		if (0 <= minutes && minutes < 60)
		{
			m_nMin = minutes;
		}
		else
		{
			m_nMin = 0;
		}

		if (0 <= seconds && seconds < 60)
		{
			m_nSec = seconds;
		}
		else
		{
			m_nSec = 0;
		}
	}
	

	void incrementTime()
	{
		m_nSec++;
		if (m_nSec > 59)
		{
			m_nSec = 0;
		}
	}
	void display(int)
	{
		cout << m_nHr << ":" << m_nMin << ":" << m_nSec << endl;
	}
	void display()
	{
		cout << m_nHr << ":" << m_nMin << ":" << m_nSec << endl;
	}


	
};


#endif // !_CLOCKS_H_
