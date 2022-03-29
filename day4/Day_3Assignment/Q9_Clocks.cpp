#include <iostream>
#include "Clocks.h"

using namespace std;

int main()
{
	CClocks clock;
	clock.setTime(23, 59, 00);
	for (int i = 0; i < 100; i++)
	{
		clock.incrementTime();
		clock.display();
		clock.display(1);
	}
	return 0;
}
