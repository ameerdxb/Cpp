// A simple map demonstration.
#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<char, int,greater<char>> m;
    int i;
    // put pairs into map
    for (i = 0; i < 26; i++) 
    {
        m.insert(pair<char, int>('A' + i, 65 + i));
    }

    map<char, int>::iterator p1;
    p1 = m.begin();
    while (p1 != m.end())
    {
        cout << p1->first << "\t" << p1->second << endl;
        p1++;
    }

    char ch;
    cout << "Enter key: ";
    cin >> ch;
    map<char, int>::iterator p;
    // find value given key
    p = m.find(ch);
    if (p != m.end())
        cout << "Its ASCII value is " << p->second;
    else
        cout << "Key not in map.\n";

    return 0;
}