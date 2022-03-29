// Use a map to create a phone directory.

#include <iostream>
#include <map>
#include <cstring>

using namespace std;

class name {

    char str[40];

public:
    name() { strcpy_s(str, _countof(str), ""); }
    name(const char* s) { strcpy_s(str, _countof(str), s); }
    const char* get() { return str; }

    friend ostream& operator<<(ostream& out, const name& n)
    {
        out << n.str;
        return out;
    }

};

// Must define less than relative to name objects.

bool operator<(name a, name b)
{
    return strcmp(a.get(), b.get()) < 0;
}

class phoneNum {

    char str[80];

public:
    phoneNum() { strcmp(str, ""); }
    phoneNum(const char* s) { strcpy_s(str, _countof(str), s); }
    const char* get() { return str; }

    friend ostream& operator<<(ostream& out, const phoneNum& n)
    {
        out << n.str;
        return out;
    }
};

int main()

{
    map<name, phoneNum> directory;
    // put names and numbers into map
    directory.insert(pair<name, phoneNum>(name("Tom"),
        phoneNum("555-4533")));
    directory.insert(pair<name, phoneNum>(name("Chris"),
        phoneNum("555-9678")));
    directory.insert(pair<name, phoneNum>(name("John"),
        phoneNum("555-8195")));
    directory.insert(pair<name, phoneNum>(name("Rachel"),
        phoneNum("555-0809")));

    map<name, phoneNum>::iterator p1;
    p1 = directory.begin();
    while (p1 != directory.end())
    {
        cout << p1->first << "\t" << p1->second << endl;
        p1++;
    }

    // given a name, find number
    char str[80];
    cout << "Enter name: ";
    cin >> str;
    map<name, phoneNum>::iterator p;
    p = directory.find(name(str));
    if (p != directory.end())

        cout << "Phone number: " << p->second.get();

    else

        cout << "Name not in directory.\n";

    return 0;
}