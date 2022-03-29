#include <iostream>
#include "SavingsAccount.h";

using namespace std;

int main()
{
	CSavingsAccount saver1(2000.00);
	CSavingsAccount saver2(3000.00);

	CSavingsAccount::ModifyInterestRate(0.03);
	cout << "For First month: " << endl;
	saver1.CalculateMontlyInterest();
	cout << "Saver 1 Savings Balance: " << saver1.GetBalance() << " Rupees";
	cout << endl;
	saver2.CalculateMontlyInterest();
	cout << "Saver 2 Savings Balance: " << saver2.GetBalance() << " Rupees";
	cout << endl << endl;

	CSavingsAccount::ModifyInterestRate(0.04);
	cout << "For Second month: " << endl;
	saver1.CalculateMontlyInterest();
	cout << "Saver 1 Savings Balance: " << saver1.GetBalance() << " Rupees";
	cout << endl;
	saver2.CalculateMontlyInterest();
	cout << "Saver 2 Savings Balance: " << saver2.GetBalance() << " Rupees";
	cout << endl << endl;

	return 0;
}