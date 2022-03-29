#ifndef _EMPLOYEE_H_
#define _EMPLOYEE_H_

#include <string>

using namespace std;

class Employee
{
// Member functions
public:
		Employee (string fName, string lName, int sal );
		void SetFirstName(string fName);
		string GetFirstName();
		void SetLastName(string lName);
		string GetLastName ();
		void SetSalary(int sal);	
		int GetSalary();

// Member variables
private:
		string m_csFirstName;
		string m_csLastName;
		int m_nSalary;
};

#endif // _EMPLOYEE_H_
