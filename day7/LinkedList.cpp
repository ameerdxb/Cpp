#include <iostream>
using namespace std;
#include "List.h"
void main()
{
	CList lst;
	lst.Add(10).Add(3).Add(89);
	lst.Print();
}
