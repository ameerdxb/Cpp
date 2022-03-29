#include <iostream>
#include <string>
#include "Employeesort.h"

using namespace std;

void Employee::setEmployee(int empcode, char name[25], double salary)
{
	m_nEmpcode = empcode;
	strcpy_s(m_szName, name);
	m_dSalary = salary;
}


double Employee::getSalary()
{
	return m_dSalary;
}


void Employee::display()
{
	cout << "| Employee ID: " << m_nEmpcode << " | Employee Name: " << m_szName << " | Employee Salary: " << m_dSalary << endl;
}


void sortRecords(Employee emp[], int n)
{
	int i, j;
	Employee temp;
	for (i = 0; i <= n - 2; i++)
	{
		for (j = i + 1; j < n; j++)
			if (emp[i].getSalary() > emp[j].getSalary())
			{
				temp = emp[i];
				emp[i] = emp[j];
				emp[j] = temp;
			}
	}

	cout << "\nAfter sorting" << endl;
	for (int i = 0; i < n; i++)
	{
		emp[i].display();
	}
}

int main(int argc, const char* argv[])
{
	Employee emp[500];
	int id, n;
	char ename[25];
	double esalary;

	cout << "Enter no.of employees : ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "\nEnter Employee ID: ";
		cin >> id;
		cout << "Enter Employee name: ";
		cin >> ename;
		cout << "Enter Employee salary: ";
		cin >> esalary;
		cout << endl;
		emp[i].setEmployee(id, ename, esalary);
	}

	cout << "\nBefore sorting" << endl;
	for (int i = 0; i < n; i++)
	{
		emp[i].display();
	}
	sortRecords(emp, n);
}