#pragma once
#include<iostream>
using namespace std;

class CTime
{
	
public:
	CTime(int nHour=0, int nMinute=0, int nSecond=0);
	CTime(const CTime&);
	void Increment();
	void Get(int&, int&, int&)const;

private:
	 int m_nHour;
	 int m_nMinute;
	 int m_nSecond;
};

