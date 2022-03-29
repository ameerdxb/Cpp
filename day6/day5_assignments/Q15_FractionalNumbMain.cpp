#include <iostream>
#include "Fractional.h"

int main()
{
	fraction f1, f2(4, 8);
	fraction f3(f2);
	f1.print();
	f2.print();
	f3.print();
	f3 = add(f3, fraction(-5, 4));
	f1 = add(f2, f3);
	f1.print();
	f1 = subtract(f2, f3);
	f1.print();
	f1 = multiply(f2, f3);
	f1.print();
	//f1.inc().inc().print();
	f1 = divide(f2, f3);
	f1.print();

	return 0;


}
