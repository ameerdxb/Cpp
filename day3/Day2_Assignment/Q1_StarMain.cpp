#include <iostream>
#include "Stars.h"

using namespace std;

int main(int argc,const char* argv[])
{
    int n;

    cout << "Enter the number of stars you require: " << endl;
    cin >> n;
    cout << "Here are your stars.." << endl;
    printstar(n);
    return 0;
}