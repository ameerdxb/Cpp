#include <iostream>

using namespace std;

class date
{
    static int table[12] ;
    int nday;
    int nmonth;

public:
    date(int, int);
    int convert();

};

int date::table[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

date::date(int d, int m)
{
    nday = d;
    nmonth = m;
}


int date::convert()
{
    int absoluteDay, monthdays = 0;
    for (int i = 1; i < nmonth; i++)
    {
        monthdays += table[i];
    }
    absoluteDay = monthdays + nday;

    return absoluteDay;
}


void main()
{
    date d1(10, 5);
    int absday = 0;
    absday = d1.convert();
    if (absday == 0)
    {
        cout << "\nWrong date is entered";
    }
    else
    {
        cout << "\nAbsolute date : " << absday << endl;
    }
}