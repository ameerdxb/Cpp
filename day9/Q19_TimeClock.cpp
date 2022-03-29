#include<iostream>

using namespace std;

class time
{
    friend class clock;
    int hr, mins, sec;

public:
    time()
    {
        hr = 0;
        mins = 0;
        sec = 0;
    }
    time(int, int, int);
    time(const time&); //copy constructor
    void increment();
    void get(int&, int&, int&); //
};

void time::increment()
{
    sec++;
    if (sec > 59)
    {
        sec = 0;
        mins++;
        if (mins > 59)
        {
            mins = 0;
            hr++;
            if (hr > 59)
            {
                hr = 0;

            }
        }
    }
}

void time::get(int& h, int& m, int& s)
{
    this->hr = h;
    this->mins = m;
    this->sec = s;
}

time::time(int h, int m, int s)
{
    hr = h;
    mins = m;
    sec = s;
}

time::time(const time& t)
{
    hr = t.hr;
    mins = t.mins;
    sec = t.sec;
}

class clock
{
    time curTime;

public:

    clock(int, int, int);
    //clock( time);
    void dispCurTime();
    void incrTime();
};

void clock::dispCurTime()
{
    if (curTime.hr < 10)
    {
        cout << "0" << curTime.hr << ":";
    }
    else
    {
        cout << curTime.hr << ":";
    }

    if (curTime.mins < 10)
    {
        cout << "0" << curTime.mins << ":";
    }
    else
    {
        cout << curTime.mins << ":";
    }

    if (curTime.sec < 10)
    {
        cout << "0" << curTime.sec << ":";
    }
    else
    {
        cout << curTime.sec;
    }
}


void clock::incrTime()
{
    curTime.increment();
}

clock::clock(int h, int m, int s)
{
    curTime.get(h, m, s);
}


int main()
{
    clock c1(22, 45, 50);
    time t1(9, 30, 20);
    //clock c2(t1);
    c1.dispCurTime();
    //c2.dispCurTime();
    for (int I = 0; I < 1000; I++)
    {
        c1.incrTime();
    }
    //for(int I = 0; I< 500 ;I++)
    {
        //c2.incrTime();
    }
    cout << "\n";
    c1.dispCurTime();
    //c2.dispCurTime();
}