#include <iostream>
#include <string>
#include "Display3arguments.h"

using namespace std;

int main()
{
    string start, last, n;

    while (1)
    {
        cout << "\nStarting number: ";
        cin >> start;
        if (start == "$")
        {
            return 0;
        }
        int s = stoi(start);

        cout << "Ending number: ";
        cin >> last;
        if (last == "$")
        {
            return 0;
        }
        int l = stoi(last);

        cout << "Number of integers to be output per line: ";
        cin >> n;
        if (n == "$")
        {
            return 0;
        }
        int num = stoi(n);

        if (s <= l)
        {
            cout << "\nCalling the function using all three arguments.." << endl;
            display(s, l, num);
            cout << "\nCalling the function using first two arguments.." << endl;
            display(s, l);
        }
        else
        {
            return 0;
        }

    }

}