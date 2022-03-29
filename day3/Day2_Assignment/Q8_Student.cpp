#include <iostream>
#include <string>
#include "Student.h"

using namespace std;

void Student::GetData(int adm_no, char sname[20], float eng, float math, float science)
{
	m_nAdm_no = adm_no;
	strcpy_s(m_szSname, sname);
	m_fEng = eng;
	m_fMath = math;
	m_fScience = science;
	m_fTotal = CalculateTotal();

}


void Student::ShowData()
{

	cout << "\nAdm_no: " << m_nAdm_no << "\n";
	cout << "Name: " << m_szSname << "\n";
	cout << "English: " << m_fEng << "\n";
	cout << "Maths: " << m_fMath << "\n";
	cout << "Science: " << m_fScience << "\n";
	cout << "Total marks: " << m_fTotal << "\n";
}


float Student::CalculateTotal()
{
	return m_fEng + m_fEng + m_fScience;
}


int main(int argc, const char* argv[])
{
	Student student_1;
	int adm_no;
	char sname[20];
	float eng, math, science;

	cout << "Enter Admission number:  ";
	cin >> adm_no;
	cout << "Enter Student name: ";
	cin.ignore();
	cin.getline(sname,20);
	cout << "Enter marks obtained for English: ";
	cin >> eng;
	cout << "Enter marks obtained for Mathematics: ";
	cin >> math;
	cout << "Enter marks obtained for Science: ";
	cin >> science;

	student_1.GetData(adm_no, sname, eng, math, science);
	student_1.ShowData();
}