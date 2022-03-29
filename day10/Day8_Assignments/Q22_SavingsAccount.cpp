#include <iostream>
#include "SavingsAccount.h";

using namespace std;

CSavingsAccount::CSavingsAccount(double value)
{
	m_dSavingsBalance = value;
}


double CSavingsAccount::dAnnualInterestRate(0);

void CSavingsAccount::CalculateMontlyInterest()
{
	m_dSavingsBalance += ((m_dSavingsBalance * dAnnualInterestRate) / 12);
}


void CSavingsAccount::ModifyInterestRate(double value)
{
	dAnnualInterestRate = value;
}


double CSavingsAccount::GetBalance()const
{
	return m_dSavingsBalance;
}