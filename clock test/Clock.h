#pragma once
#include<iostream>
#include"Time.h"
using namespace std;

class CClock
{
private:
	// Declaring an object of CTime class
	CTime CurTime;

public:
	// Argumented constructor
	CClock(int nHour, int nMinute, int nSecond);
	CClock(CTime);
	// Function to display current time
	void DispCurTime() const;
	// Function to increment the time
	void IncrTime();
};

