#include <iostream>
#include <fstream>
#define SIZE 5
using namespace std;

class CEmployee
{
public:
	void List(int, int);
	int getId();
	int getSal();
	friend istream& operator>>(istream& in, CEmployee& e);
	friend ostream& operator<<(ostream& out, CEmployee& e);

private:
	int m_nSalary;
	int m_nId;
};


int CEmployee::getId()
{
	return m_nId;
}


int CEmployee::getSal()
{
	return m_nSalary;
}


ostream& operator<<(ostream& out, CEmployee& e)
{
	out << "ID: " << e.m_nId << endl;
	out << "Salary: " << e.m_nSalary << endl;
	return out;
}


istream& operator>>(istream& in, CEmployee& e)
{
	cout << "Enter employee ID: ";
	cin >> e.m_nId;
	cout << "Enter Salary: ";
	cin >> e.m_nSalary;
	return in;
};


void CEmployee::List(int sal, int destination = 0)
{
	if (m_nSalary >= sal && destination == 0)
	{
		cout << "ID: " << m_nId << endl;
		cout << "Salary: " << m_nSalary << endl;

	}
	if (m_nSalary >= sal && destination != 0)
	{
		fstream empfile;
		empfile.open("emplist.txt", ios::app | ios::binary);
		empfile << m_nId << "\t" << m_nSalary << endl;
		empfile.close();
	}
}

int main()
{
	CEmployee oemp[SIZE];
	fstream emp;
	int n, salary, dest;
	cout << "Enter no.of employees: ";
	cin >> n;
	emp.open("Employees.txt", ios::app | ios::binary);
	for (int i = 0; i < n; i++)
	{
		cin >> oemp[i];
		cout << oemp[i];
		emp << oemp[i];
	}

	cout << "Enter a salary limit: ";
	cin >> salary;
	cout << endl;
	cout << "Enter destination: ";
	cin >> dest;
	cout << endl;

	for (int i = 0; i < n; i++)
	{
		oemp[i].List(salary, dest);
	}

	return 0;
}