// Assignment7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include"Clock.h"

int main()
{

    CClock oC1(22, 15, 20);

    CTime oT1(9, 30, 59);

    CClock oC2(oT1);

    oC1.DispCurTime();

    oC2.DispCurTime();

    for (int I = 0; I < 1000; I++) 
    {
        oC1.IncrTime();
       // oC1.DispCurTime();
    }

    for (int I = 0; I < 500; I++) 
    {
        oC2.IncrTime();
       // oC2.DispCurTime();
    }

    oC1.DispCurTime();

    oC2.DispCurTime();
}

