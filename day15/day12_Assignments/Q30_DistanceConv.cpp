#include "DB.h"
#include "DM.h"
#include <iostream>
using namespace std;

//DB Definitions
DB::DB()
{
	m_dDFeet = 0.0;
	m_dDInches = 0.0;
}


DB::DB(double dFeet, double dInches)
{
	m_dDFeet = dFeet;
	m_dDInches = dInches;
}


DB::operator DM()
{
	m_dMeters = m_dDFeet * 0.3;
	m_dCentimeters = m_dDInches * 2.5;
	return DM(m_dMeters, m_dCentimeters);
}


double DB::GetMeter()
{
	return m_dMeters;
}

double DB::GetCentimeter()
{
	return m_dCentimeters;
}


DB DB::operator+( DM& b)
{
	b.operator DB();
	m_dDFeet = m_dDFeet + b.GetFeet();
	m_dDInches = m_dDInches + b.GetInches();
	return *this;
}


void DB::Display()
{
	cout << m_dDFeet << " feet  " << m_dDInches<<" inches" << endl;
}


//DM Definitions
DM::DM()
{
	m_dDMeters = 0.0;
	m_dDCentiMeters = 0.0;
}


DM::DM(double dMeters, double dCentiMeters)
{
	m_dDMeters = dMeters;
	m_dDCentiMeters = dCentiMeters;
}


DM::operator DB()
{
	SetData(10, 20);
	m_dFeet = m_dDMeters * 3.28;
	m_dInches = m_dDCentiMeters * 0.39;
	return DB(m_dFeet, m_dInches);
}


double DM::GetFeet()
{
	return m_dFeet;
}


double DM::GetInches()
{
	return m_dInches;
}


DM DM::operator+(DB& c)
{
	c.operator DM();
	m_dDMeters = m_dDMeters + c.GetMeter();
	m_dDCentiMeters = m_dDCentiMeters + c.GetCentimeter();
	return *this;
}


void DM::SetData(double dMeter, double dCentimeter)
{
	m_dDMeters = dMeter;
	m_dDCentiMeters = dCentimeter;
}


void DM::Display()
{
	cout << m_dDMeters << " meters  " << m_dDCentiMeters << " centimeters" << endl;
}
