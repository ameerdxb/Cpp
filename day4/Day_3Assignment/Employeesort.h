#ifndef _EMPLOYEESORT_H_
#define _EMPLOYEESORT_H_

#include <iostream>

using namespace std;

class Employee
{
// Member functions
public:
	void setEmployee(int empcode, char name[25], double salary);
	double getSalary();
	void display();

// Member variables
private:
	int m_nEmpcode;
	char m_szName[25];
	double m_dSalary;
};

#endif // !_EMPLOYEESORT_H_

