// Fig. 13.23: fig13_23.cpp
 // Processing Employee derived-class objects individually
 // and polymorphically using dynamic binding.
#include <iostream>
using std::cout;
using std::endl;
using std::fixed;

#include <iomanip>
using std::setprecision;

#include <vector>
using std::vector;

// include definitions of classes in Employee hierarchy
#include "Employee.h"
#include "Salaried.h"
#include "Hourly.h"
#include "CommissionEployee.h"
#include "BasePlusCommissionEmployee .h"

void virtualViaPointer(const Employee* const); // prototype
void virtualViaReference(const Employee&); // prototype

int main()
{
	// set floating-point output formatting
	cout << fixed << setprecision(2);

	// create derived-class objects
	SalariedEmployee salariedEmployee(
		"John", "Smith", "111-11-1111", 800);
	HourlyEmployee hourlyEmployee(
		"Karen", "Price", "222-22-2222", 16.75, 40);
	CommissionEmployee commissionEmployee(
		"Sue", "Jones", "333-33-3333", 10000, .06);
	BasePlusCommissionEmployee basePlusCommissionEmployee(
		"Bob", "Lewis", "444-44-4444", 5000, .04, 300);

	cout << "Employees processed individually using static binding:\n\n";

	// output each Employee's information and earnings using static binding
	salariedEmployee.print();
	cout << "\nearned $" << salariedEmployee.earnings() << "\n\n";
	hourlyEmployee.print();
	cout << "\nearned $" << hourlyEmployee.earnings() << "\n\n";
	commissionEmployee.print();
	cout << "\nearned $" << commissionEmployee.earnings() << "\n\n";
	basePlusCommissionEmployee.print();
	cout << "\nearned $" << basePlusCommissionEmployee.earnings()
		<< "\n\n";

	// create vector of four base-class pointers
	vector < Employee* > employees(4);

	// initialize vector with Employees          
	employees[0] = &salariedEmployee;
	employees[1] = &hourlyEmployee;
	employees[2] = &commissionEmployee;
	employees[3] = &basePlusCommissionEmployee;

	cout << "Employees processed polymorphically via dynamic binding:\n\n";

	// call virtualViaPointer to print each Employee's information
	// and earnings using dynamic binding
	cout << "Virtual function calls made off base-class pointers:\n\n";

	for (size_t i = 0; i < employees.size(); i++)
		virtualViaPointer(employees[i]);

	// call virtualViaReference to print each Employee's information
	// and earnings using dynamic binding
	cout << "Virtual function calls made off base-class references:\n\n";

	for (size_t i = 0; i < employees.size(); i++)
		virtualViaReference(*employees[i]); // note dereferencing

	return 0;
} // end main

// call Employee virtual functions print and earnings off a   
// base-class pointer using dynamic binding                   
void virtualViaPointer(const Employee * const baseClassPtr)
{
	baseClassPtr->print();
	cout << "\nearned $" << baseClassPtr->earnings() << "\n\n";
} // end function virtualViaPointer                           

// call Employee virtual functions print and earnings off a  
// base-class reference using dynamic binding                
void virtualViaReference(const Employee & baseClassRef)
{
	baseClassRef.print();                                     
		cout << "\nearned $" << baseClassRef.earnings() << "\n\n";
} // end function virtualViaReference        