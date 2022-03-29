#ifndef _TOLLBOOTH_H_
#define _TOLLBOOTH_H_

#include <iostream>

using namespace std;

class tollBooth 
{
// Member functions
public:
	tollBooth();

	void payingCar();
	void nopayCar();
	void display() const;

// Member variables
private:
	int m_nPaidcar;
	int m_nNonpaidcar;
	double m_dCashTotal;

};


#endif // !_TOLLBOOTH_H_
