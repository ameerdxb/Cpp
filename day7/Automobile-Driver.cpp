#include<iostream>
using namespace std;

class CDriver
{
public:
	CDriver(const char* name, int age)
	{
		cout << "Driver const" << endl;
		m_szName = new char[strlen(name) + 1];
		strcpy(m_szName, name);
		m_nAge = age;
	}

	CDriver(const CDriver& d)
	{
		cout << "Driver Copy const" << endl;
		m_szName = new char[strlen(d.m_szName) + 1];
		strcpy(m_szName, d.m_szName);
		m_nAge = d.m_nAge;
	}
	~CDriver()
	{
		cout << "Driver Dest" << endl;
		delete[] m_szName;
	}

	void print()const
	{
		cout << m_szName << "\t" << m_nAge << endl;
	}

private:

	char* m_szName;
	int m_nAge;
};

class CAutomobile
{
public:
	CAutomobile(CDriver& d, const char* mk):drv(d)
	{
		cout << "CAutomobile const" << endl;
		m_szMake = new char[strlen(mk) + 1];
		strcpy(m_szMake, mk);
		//drv = d;
	}

	void print()const
	{
		drv.print();
		cout << m_szMake << endl;
	}
	~CAutomobile()
	{
		cout << "CAutomobile Dest" << endl;
		delete[] m_szMake;
	}

private:
	CDriver drv;
	char* m_szMake;
};

int main()
{
	CDriver d("Kiran", 23);
	CAutomobile a(d, "Tiago");
	a.print();
	return 0;
}