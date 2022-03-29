#ifndef DATE_H
#define DATE_H

#include <iostream>
using std::ostream;

class Date
{
    friend ostream &operator<<( ostream &, const Date & );

public:
    Date( int m = 1, int d = 1, int y = 1900 );
    void setDate(int, int, int);
    Date &operator++();     
    bool leapYear(int) const;
    bool endOfMonth(int) const;
    int operator==(const Date&) const;
    int operator>(const Date&) const;
    int operator<(const Date&) const;
    
private:
    int m_nMonth;
    int m_nDay;
    int m_nYear;

    static const int days[];
    void helpIncrement();
};

#endif
