#include <iostream>
#include "CAccount.h"

int main()
{
	CAccount cust1(112, 15000, "cust1File1.txt");
	CAccount cust2(115, 5000, "cust1File2.txt");
	cust1.Debit(5000);
	cust2.Credit(6000);
	cust1.Credit(2500);
	cust2.Debit(500);
	cust1.readData();
	std::cout << std::endl;
	cust2.readData();
}
