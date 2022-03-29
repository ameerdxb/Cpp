#ifndef _DISPLAY_H_
#define _DISPLAY_H_

#include <iostream>

using namespace std;

void display(int start, int last, int n = 5)
{
    while (start <= last)
    {
	    for (int i = 0; i < n && start <= last ; i++)
	    {
	        cout<<start<<' ';
	        start++;
	    }
	    cout<<'\n';
	}
}

#endif // !_DISPLAY_H_
