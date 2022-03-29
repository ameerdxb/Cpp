#ifndef _DATE_H_
#define _DATE_H_

using namespace std;

class Date
{
// Member functions
public:
	void SetData(int dd, int mm, int yy);
	void SetDay(int dd);
	int GetDay();
	void SetMonth(int mm);
	int GetMonth();
	void SetYear(int yy);
	int GetYear();
	void displayDate();

// Member variables
private:
	int m_nDay;
	int m_nMonth;
	int m_nYear;
};

#endif // _DATE_H_