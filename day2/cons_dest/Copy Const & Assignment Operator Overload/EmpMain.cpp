#include <iostream>
using namespace std;

class Employee
{
public:
	Employee(const char* n, int id)
	{
		cout << "Parameterized Constructor" << endl;
		m_szName = new char[strlen(n) + 1];
		size_t dynamicSize = strlen(n) + 1;
		strcpy_s(m_szName, dynamicSize, n);
		m_nEmpID = id;
	}
	Employee()
	{
		cout << "Default Constructor" << endl;
		m_szName = new char[1];
		size_t dynamicSize =  1;
		strcpy_s(m_szName, dynamicSize, "");
		m_nEmpID = 0;

	}
	void display()const
	{
		cout << m_szName << "\t" << m_nEmpID << endl;

	}

	~Employee()
	{
		cout << this->m_szName << "destroyed" << endl;;
		delete[] m_szName;
	}

	Employee(const Employee& empCopy)
	{
		cout << "Copy Constructor" << endl;
		m_szName = new char[strlen(empCopy.m_szName) + 1];
		size_t dynamicSize = strlen(empCopy.m_szName) + 1;
		strcpy_s(m_szName, dynamicSize, empCopy.m_szName);
		m_nEmpID = empCopy.m_nEmpID;
	}

	Employee& operator = (const Employee& emp)
	{
		cout << "Ass Oper Overload" << endl;
		m_szName = new char[strlen(emp.m_szName) + 1];
		size_t dynamicSize = strlen(emp.m_szName) + 1;
		strcpy_s(m_szName, dynamicSize, emp.m_szName);
		m_nEmpID = emp.m_nEmpID;
		return *this;
	}

private:

	char* m_szName;
	int m_nEmpID;

};


int main()
{
	Employee emp("Jini",1000);
	Employee emp1("Tom", 1000);
	Employee emp2 = emp; //copy const
	emp2.display();

	Employee emp3;
	emp3 = emp2;// ass op overload
	emp3.display();
	return 0;
}