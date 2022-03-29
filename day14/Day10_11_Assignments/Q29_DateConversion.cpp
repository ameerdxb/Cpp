#include<iostream>

using namespace std;

class ODate;
int DayTable[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };

class GDate
{
public:
    GDate(ODate);
    GDate(int, int);
    friend ostream& operator<<(ostream& os, const GDate& g);

private:
    friend class ODate;
    int m_nMonth;
    int m_nDay;
};

class ODate
{
public:
    ODate(GDate);
    ODate(int);
    friend ostream& operator<<(std::ostream& os, const ODate& g);

private:
    friend class GDate;
    int m_nDays;
};


GDate::GDate(ODate g)
{
    int i;
    for (i = 1; DayTable[i] < g.m_nDays; i++)
    {
        g.m_nDays = g.m_nDays - DayTable[i];
    }
    m_nDay = g.m_nDays;
    m_nMonth = i;
}


ostream& operator<<(ostream& os, const GDate& g)
{
    switch (g.m_nMonth)
    {
        case 1: os << "Jan " << g.m_nDay;
            break;
        case 2: os << "Feb " << g.m_nDay;
            break;
        case 3: os << "March " << g.m_nDay;
            break;
        case 4: os << "April " << g.m_nDay;
            break;
        case 5: os << "May " << g.m_nDay;
            break;
        case 6: os << "June " << g.m_nDay;
            break;
        case 7: os << "July " << g.m_nDay;
            break;
        case 8: os << "Aug " << g.m_nDay;
            break;
        case 9: os << "Sept " << g.m_nDay;
            break;
        case 10: os << "Oct " << g.m_nDay;
            break;
        case 11: os << "Nov " << g.m_nDay;
            break;
        case 12: os << "Dec " << g.m_nDay;
            break;
        default: break;
    }

    return os;
}


GDate::GDate(int m, int d)
{
    m_nDay = d;
    m_nMonth = m;
}


ostream& operator<<(std::ostream& os, const ODate& g)
{
    return os << g.m_nDays;
}


ODate::ODate(int d)
{
    m_nDays = d;
}


ODate::ODate(GDate d)
{
    int monthdays = 0;
    for (int i = 0; i < d.m_nMonth; i++)
    {
        monthdays += DayTable[i];
    }
    m_nDays = monthdays + d.m_nDay;
}


int main()
{
    GDate Gd1(3, 2);
    ODate Od1(Gd1);
    cout << Gd1 << " is " << Od1 << "th day of the year." << endl;
    ODate Od2(50);
    GDate Gd2(Od2);
    cout << Gd2 << " is " << Od2 << "th day of the year." << endl;

    return 0;
}
