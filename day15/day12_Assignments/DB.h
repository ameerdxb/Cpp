#ifndef DB_H
#define DB_H
#include"DM.h"

class DM; //Forward declaraton

class DB
{
public:
	DB();
	DB(double dFeet, double dInches);
	operator DM();
	double GetMeter();
	double GetCentimeter();
    DB operator+ ( DM&);
	void Display();

private:
	double m_dDFeet;
	double m_dDInches;
	double m_dMeters;
	double m_dCentimeters;
};

#endif // !DB_H