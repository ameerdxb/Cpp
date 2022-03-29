#include<iostream>

using namespace std;

class CCoin
{
public:
	void Initialize(float);
	void Changes(float&);
	void Display();

private:
	float m_nDenomination;
	int m_nCount;
};


void CCoin::Initialize(float deno)
{
	//initialise denomination (20,8,4,2,1)
	m_nDenomination = deno;
	m_nCount = 0;

}

void CCoin::Changes(float& amount)
{
	if (amount >= m_nDenomination)
	{
		m_nCount = amount / m_nDenomination;
		amount = amount - m_nCount * m_nDenomination;
	}
}

void CCoin::Display()
{
	if (m_nCount != 0)
	{

		cout << m_nDenomination << "\t\t\t" << m_nCount << endl;
	}

}

int main()
{
	//int deno;
	CCoin carray[5];
	float amount;
	//Call initialize function for each object in the array.
	cout << "Enter the amount : ";
	cin >> amount;
	cout << "Denomination" << "\t\t" << "Count" << endl;
	//Call change function for calculating the denomination.
	carray[0].Initialize(5);
	carray[0].Changes(amount);
	carray[0].Display();
	carray[1].Initialize(2);
	carray[1].Changes(amount);
	carray[1].Display();
	carray[2].Initialize(1);
	carray[2].Changes(amount);
	carray[2].Display();
	carray[3].Initialize(0.5);
	carray[3].Changes(amount);
	carray[3].Display();
	carray[4].Initialize(0.25);
	carray[4].Changes(amount);
	carray[4].Display();
	//Print the denomination and count for each CCoin object.
	return 0;
}