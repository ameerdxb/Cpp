#include <iostream>
#include "Account.h"

using namespace std;

Account::Account(int initBalance)
{
	SetData(initBalance);
}


void Account::SetData(int initBalance)
{
	if (initBalance >= 0)
	{
		m_nBalance = initBalance;
	}
	else
	{
		m_nBalance = 0;
		cout << "Initial balance was invalid. Set balance to 0" << endl;
	}
}


void Account::Credit(int amount)
{
	m_nBalance = m_nBalance + amount;
}


void Account::Debit(int amount)
{
	if (amount <= m_nBalance)
	{
		m_nBalance = m_nBalance - amount;
	}
	else
	{
		cout << "Debit amount exceeded account balance.";
	}
}


int Account::getBalance()
{
	return m_nBalance;
}

int main (int argc, const char* argv[])
{
	Account account1(100);
	
	cout << "\nAccount_1 balance is " << account1.getBalance() << endl;
	cout << "\nCrediting 200 to Account_1..." << endl;
	account1.Credit(200);
	cout << "Now, Account1 balance is : " << account1.getBalance() << endl;
	cout << "\nTrying to debit 500 from Account_1.. " << endl;
	account1.Debit(500);
	cout << " Now, Account_1 balance is : " << account1.getBalance() << endl;
	cout << "\nTrying to debit 120 from Account_1.. " << endl;
	account1.Debit(120);
	cout << "Now, Account_1 balance is : " << account1.getBalance() << endl;	
}