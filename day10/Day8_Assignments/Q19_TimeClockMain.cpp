#include <iostream>
#include "TimeClock.h"

int main()
{

    CClock c1(22, 15, 20);
    CTime t1(9, 30, 59);

    CClock c2(t1);
    c1.DispCurTime();
    c2.DispCurTime();

    for (int I = 0; I < 1000; I++)
    {
        c1.IncrTime();
    }

    for (int I = 0; I < 500; I++)
    {
        c2.IncrTime();
    }

    c1.DispCurTime();
    c2.DispCurTime();
}

