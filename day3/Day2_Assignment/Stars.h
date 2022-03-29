#ifndef _STARS_H_
#define _STARS_H_

#include <iostream>

using namespace std;

void printstar(int noofstars)
{
    int i;

    if (noofstars <= 0)
    {
        cout << "Default value is 1 star!, printing 1 star... \n\n" ;
        noofstars = 1;
    }

    for (i = 1; i <= noofstars; i++)
    {
        cout << "* ";
    }

}
#endif // _STARS_H_