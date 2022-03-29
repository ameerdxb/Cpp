#include<iostream>

using namespace std;

template <class T> int count(T* ptr, int length, T value)
{
	int t = 0;
	for (int i = 0; i < length; i++)
	{
		if (ptr[i] == value)
		{
			t = t + 1;
		}
	}
	return t;
}

class CStud
{
public:

	CStud(double marks = 0.0)
	{
		m_dMarks = marks;
	}

	bool operator == (const CStud& s)
	{
		if (m_dMarks == s.m_dMarks)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	friend ostream& operator<<(ostream& os, CStud& std)
	{
		os << std.m_dMarks;
		return os;
	}

private:
	double m_dMarks;

};
int main()
{

	int a[10], length = 0, value, c = 0;
	CStud sd[10];
	double marks;

	cout << "Enter the limit for integer array" << endl;
	cin >> length;
	cout << "Enter values for integer array :" << endl;
	for (int i = 0; i < length; i++)
	{
		cin >> a[i];
	}

	cout << "Enter the limit for student array :" << endl;
	cin >> length;
	cout << "Enter the marks :" << endl;
	for (int i = 0; i < length; i++)
	{
		cin >> marks;
		sd[i] = CStud(marks);
	}

	cout << "Enter value to be searched in integer array :" << endl;
	cin >> value;
	c = count(a, length, value);
	cout << "Count: " << endl;
	cout << c << endl;

	cout << "Enter mark to be searched in student array : " << endl;
	cin >> marks;
	CStud sdm(marks);
	c = count(sd, length, sdm);
	cout << "Count: " << endl;
	cout << c;

}