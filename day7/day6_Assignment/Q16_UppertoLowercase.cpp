#include <iostream>

using namespace std;


class CInout
{
public:
	CInout()
	{
		m_szLength = new char[80];
	}

	~CInout()
	{
		delete[] m_szLength;
	}

	bool read()
	{
		char s;
		while ((s=getchar()) != EOF)
		{
			for (int i = 0; i < 80; i++)
			{
				m_szLength[i] = s;
			}
			//cout << m_szLength;
			return false;
		}
		
	}

	void convert();
	void print()
	{
		int ln = sizeof(*m_szLength) / sizeof(*m_szLength);
		for (int i = 0; i < ln; i++)
		{
			cout << m_szLength[i];
		}
	}

private:
	char* m_szLength;

};

void CInout::convert()
{

	int ln = sizeof(*m_szLength) / sizeof(*m_szLength);

	for (int i = 0; i < ln; i++) 
	{
		if (m_szLength[i] >= 'a' && m_szLength[i] <= 'z')

		{
			m_szLength[i] = m_szLength[i] - 32;
		}
		else if (m_szLength[i] >= 'A' && m_szLength[i] <= 'Z')
		{
			m_szLength[i] = m_szLength[i] + 32;
		}
	}
}


int main()
{
	cout << "Enter some data" << endl;
	CInout io;
	while (!io.read())
	{
		io.convert();
		io.print();
	}
	return 0;
}
