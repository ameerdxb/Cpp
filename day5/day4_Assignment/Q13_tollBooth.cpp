#include <iostream>
#include "Tollbooth.h"

using namespace std;

tollBooth::tollBooth() 
{
	m_nPaidcar = 0;
	m_nNonpaidcar = 0;
	m_dCashTotal = 0;
}

void tollBooth::payingCar() 
{
	m_nPaidcar += 1;
	m_dCashTotal += 5;
	cout << "Car Entry successfully added" << endl;
}


void tollBooth::nopayCar() 
{
	m_nNonpaidcar += 1;
	cout << "Non-paid Car Entry successfully added" << endl;
}


void tollBooth::display() const 
{
	cout << "\nNumber of paid cars passed by: " << m_nPaidcar 
		 << "\nNumber of nonpaid cars passed by: " << m_nNonpaidcar
		 << "\nCash collected(in Rupees): " << m_dCashTotal << endl;
}


int main() 
{
	tollBooth mainBridge;

	mainBridge.payingCar();
	mainBridge.payingCar();
	mainBridge.payingCar();
	mainBridge.payingCar();
	mainBridge.payingCar();
	mainBridge.nopayCar();
	mainBridge.nopayCar();
	mainBridge.nopayCar();
	mainBridge.nopayCar();

	mainBridge.display();

	return 0;
}