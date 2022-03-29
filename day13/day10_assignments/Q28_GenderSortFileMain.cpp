#include<iostream>
#include<string>
#include<fstream>

using namespace std;

class Customer
{
public:
    void setDetails(string n, string s, string ph)
    {
        m_sName = n;
        m_sSex = s;
        m_sPhone = ph;
    }

    string getSex()
    {
        return m_sSex;
    }

    void getDetails()
    {
        string n, s, ph;
        cout << "ENTER CUSTOMER DETAILS" << endl;
    details:
        cin.ignore();
        cout << "Enter the name: ";
        //cin.ignore();
        getline(cin, n);
        fflush(stdin);
        cout << "Enter the sex: ";
        getline(cin, s);
        fflush(stdin);
        cout << "Enter the Phone number: ";
        getline(cin, ph);
        fflush(stdin);
        setDetails(n, s, ph);

        if (getSex() == "Female" || getSex() == "female")
        {
            fstream file1;
            file1.open("female.txt", ios::app | ios::out);
            file1 << "Name: " << m_sName << endl;
            file1 << "Sex: " << m_sSex << endl;
            file1 << "Phone number: " << m_sPhone << endl << endl;
            file1.close();
        }
        else
        {
            fstream file2;
            file2.open("male.txt", ios::app | ios::out);
            file2 << "Name: " << m_sName << endl;
            file2 << "Sex: " << m_sSex << endl;
            file2 << "Phone number: " << m_sPhone << endl;
            file2.close();
        }
        char ch;
        cout << "Want to enter more customer? (y/n)" << endl;
        cin >> ch;
        if (ch == 'Y' || ch == 'y')
        {
            goto details;
        }
    }

    void Display()
    {
        string data1, data2;
        fstream file1, file2;

        file1.open("female.txt", ios::in);
        if (!file1)
        {
            cerr << "File doesn't exist!" << endl;
            exit(1);
        }
        else
        {
            cout << " -- Female Customers -- " << endl;
            while (getline(file1, data1))
            {

                cout << data1 << endl;

            }
        }
        file1.close();

        file2.open("male.txt", ios::in);
        if (!file2)
        {
            cerr << "File doesn't exist!" << endl;
            exit(1);
        }
        else
        {
            cout << "\n -- Male Customers -- " << endl;
            while (getline(file2, data2))
            {

                cout << data2 << endl;

            }
        }
    }

private:
    string m_sName;
    string m_sSex;
    string m_sPhone;
};

int main()
{
    Customer c;
    c.getDetails();
    c.Display();
    return 0;
}