#include <iostream>
#include <string>
#include "Employee.h"

using namespace std;

Employee::Employee(string fName, string lName, int sal)
{
	SetFirstName(fName);
	SetLastName(lName);
	SetSalary(sal);
}


void Employee::SetFirstName(string fName)
{
	m_csFirstName = fName;
}


string Employee::GetFirstName()
{
	return m_csFirstName;
}


void Employee::SetLastName(string lName)
{
	m_csLastName = lName;
}


string Employee::GetLastName()
{
	return m_csLastName;
}


void Employee::SetSalary(int sal)
{
	if (sal >= 0)
	{
		m_nSalary = sal;
	}
	else
	{
		m_nSalary = 0;
	}
}


int Employee::GetSalary()
{
	return m_nSalary;
}


int main(int argc, const char* argv[])
{
	Employee emp_1 ("Ameer", "Suhail", 20000);
	
	cout << emp_1.GetFirstName() << " " << emp_1.GetLastName() << " user's salary is " 
		 << emp_1.GetSalary() << " rupees" << endl;
	cout << "\nAfter getting 10% raise..." << endl;
	emp_1.SetSalary(emp_1.GetSalary() * 1.1);
	cout << emp_1.GetFirstName() << " " << emp_1.GetLastName() << " user's salary now is " 
		 << emp_1.GetSalary() << " rupees" << endl;
	
}