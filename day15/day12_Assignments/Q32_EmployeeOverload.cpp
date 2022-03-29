#include<iostream>
#include<fstream>
#include<string>

using namespace std;

class Employee
{
public:
    friend istream& operator>>(istream& in, Employee& e);
    friend ostream& operator<<(ostream& out, Employee& e);

private:
    string m_sName;
    int m_nAge;

};


ostream& operator<<(ostream& out, Employee& e)
{
    out << "Name: " << e.m_sName << endl;
    out << "Age: " << e.m_nAge << endl;
    return out;
}


istream& operator>>(istream& in, Employee& e)
{
    cin.ignore();
    cout << "Enter the employee name: ";
    getline(cin, e.m_sName);
    cout << "Enter the age: ";
    cin >> e.m_nAge;
    return in;
};


int main()
{
    ifstream ifile;
    ofstream ofile;
    Employee  emp1, emp2;
    cin >> emp1;
    cout << emp1;
    ofile.open("emp1.txt", ios::app | ios::binary);
    ofile << emp1;
    ofile.close();
    ifile.open("emp1.txt", ios::binary);
    ifile >> emp2;
    cout << emp2;
    ifile.close();

    return 0;
}