#ifndef DM_H
#define DM_H
#include"DB.h"

class DB; //Forward declaraton

class DM
{
public:
	DM();
	DM(double dMeters, double dCentiMeters);
	operator DB();
	double GetFeet();
	double GetInches();
	DM operator+ ( DB&);
	void SetData(double, double);
	void Display();

private:
	double m_dDMeters;
	double m_dDCentiMeters; 
	double m_dFeet;
	double m_dInches;

};

#endif // !DM_H