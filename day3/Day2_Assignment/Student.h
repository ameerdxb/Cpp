#ifndef _STUDENT_H_
#define _STUDENT_H_

using namespace std;

class Student
{
// Member functions
public:
		void GetData(int adm_no, char sname[20], float eng, float math, float science);
		void ShowData();

// Member variables
private:
		int m_nAdm_no;
		char m_szSname[20];
		float m_fEng;
		float m_fMath;
		float m_fScience;
		float m_fTotal;
		
		float CalculateTotal();
};

#endif // _STUDENT_H_