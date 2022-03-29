class CDriver
{
public:
	CDriver(const char* = "", int = 0, double = 0.0);
	~CDriver();
	CDriver(const CDriver&);
	void Display()const;
	bool Search(char*, int);
private:
	char* m_pszName;
	int m_nAge;
	const double m_dbSalary;
};

#include <iostream>
using namespace std;

CDriver::CDriver(const char* pszName, int nAge, double dbSal) :m_dbSalary(dbSal)
{
	cout << "Inside Driver Constructor" << endl;
	m_pszName = new char[strlen(pszName) + 1];
	strcpy_s(m_pszName, strlen(pszName) + 1, pszName);
	m_nAge = nAge;
	//m_dbSalary = dbSal;
}

CDriver::~CDriver()
{
	cout << "Inside Driver Destructor" << endl;
	delete[]m_pszName;
}

CDriver::CDriver(const CDriver& drv) :m_dbSalary(drv.m_dbSalary)
{
	cout << "Inside Driver Copy Constructor" << endl;
	m_pszName = new char[strlen(drv.m_pszName) + 1];
	strcpy_s(m_pszName, strlen(drv.m_pszName) + 1, drv.m_pszName);
	m_nAge = drv.m_nAge;
	//m_dbSalary = drv.m_dbSalary; 
}


void CDriver::Display()const
{
	cout << "Inside Driver Display" << endl;
	cout << m_pszName << "\t" << m_nAge << "\t" << m_dbSalary << endl;
}

bool CDriver::Search(char* szName, int nAge)
{
	if ((strcmp(m_pszName, szName) == 0) && (m_nAge == nAge))
	{
		return true;//return 1
	}
	else
	{
		return false;//return 0;
	}
}
void main()
{
	//CDriver* drv[25];
	CDriver** drv = NULL;
	int nCount = 0;//to keep track the number of objects created
	cout << "1. Add Driver" << endl;
	cout << "2. Display " << endl;
	cout << "3. Search for a Driver" << endl;
	cout << "4.Exit" << endl;
	cout << "Enter the choice" << endl;
	int nOption;
	cin >> nOption;

	char szName[20];
	int nAge, i = 0;
	const double dbSalary = 7000;
	CDriver** temp = NULL;
	while (nOption != 4)
	{
		switch (nOption)
		{
		case 1:
			cout << "Enter name & age of driver" << endl;

			cin >> szName >> nAge;
			//drv[nCount] = new CDriver(szName, nAge, dbSalary);//calls const
			//nCount++;

			temp = new CDriver * [nCount + 1];
			for (i = 0; i < nCount; i++)
			{
				temp[i] = drv[i];
			}

			temp[i] = new CDriver(szName, nAge, dbSalary);

			if (nCount != 0)
			{
				delete[] drv;
			}
			drv = temp;
			nCount++;

			break;
		case 2:
			for (int idx = 0; idx < nCount; idx++)
			{
				drv[idx]->Display();
			}
			break;
		case 3:
			cout << "Enter the details of the driver to be searched" << endl;

			cin >> szName >> nAge;
			int nFlag = 0;
			for (int idx = 0; idx < nCount; idx++)
			{
				if (drv[idx]->Search(szName, nAge) == 1)
				{
					nFlag = 1;
					break;
				}
			}
			if (nFlag == 1)
			{
				cout << "Driver Search Successful" << endl;
			}
			else
			{
				cout << "No such Driver" << endl;
			}
			break;
		}//switch ends
		cout << "Enter the option" << endl;
		cin >> nOption;
	}//while ends
}
