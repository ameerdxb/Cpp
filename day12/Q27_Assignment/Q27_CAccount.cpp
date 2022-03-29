#include <iostream>
using std::cerr;
using std::cout;
using std::endl;
using std::left;
using std::right;
using std::showpoint;

#include <iomanip>
using std::setprecision;
using std::setw;

#include <string>
using std::string;

#include <fstream>
using std::ios;
using std::fstream;
using std::ifstream;
using std::ofstream;

#include <cstdlib>
using std::exit;

#include "CAccount.h"


CAccount::CAccount(int accountNumberValue, double balanceValue, string fileName)
{
	double amount;
	setAccountNumber(accountNumberValue);
	setBalance(balanceValue);
	setAccntFile(fileName);
	amount = m_dBalance;
	//fstream outCredit;
	fstream outCredit(m_csAccntFile, ios::app | ios::out);
	if (!outCredit)
	{
		cerr << "File could not be opened." << endl;
		exit(1);
	}
	else
	{
		outCredit << left << setw(10) << m_nAccntNo << setw(18) 
				  << "Credit" << setw(11) << amount << setw(10) 
				  << right << m_dBalance << endl;
    }
}


int CAccount::getAccountNumber() const
{
	return m_nAccntNo;
}


void CAccount::setAccountNumber(int accountNumberValue)
{
	m_nAccntNo = accountNumberValue;
}


double CAccount::getBalance() const
{
	return m_dBalance;
}


void CAccount::setBalance(double balanceValue)
{
	m_dBalance = balanceValue;
}


void CAccount::Credit(double amount)
{
	m_dBalance = m_dBalance + amount;
	fstream outCredit(m_csAccntFile, ios::app | ios::out);
	if (!outCredit)
	{
		cerr << "File could not be opened." << endl;
		exit(1);
	}
	else
	{
		outCredit << left << setw(10) << m_nAccntNo << setw(18) 
				  << "Credit" << setw(11) << amount << setw(10) 
				  << right << m_dBalance << endl;
	}

}


void CAccount::Debit(double amount)
{
	m_dBalance = m_dBalance - amount;
	fstream outCredit(m_csAccntFile, ios::app | ios::out);
	if (!outCredit)
	{
		cerr << "File could not be opened." << endl;
		exit(1);
	}
	else
	{
		outCredit << left << setw(10) << m_nAccntNo << setw(18)
			<< "Debit" << setw(11) << amount << setw(10)
			<< right << m_dBalance << endl;
	}
}

void CAccount::setAccntFile(string fileName)
{
	m_csAccntFile = fileName;
}


void CAccount::readData()
{
	ifstream inCredit(m_csAccntFile, ios::in);
	string data;
	if (!inCredit)
	{
		cerr << "File could not be opened." << endl;
		exit(1);
	}
	else
	{
		cout << left << setw(10) << "Acc No" << setw(18) 
			 << "Credit/Debit" << setw(11) << "Amount" << setw(11) 
			 << right << "Balance" << endl;
		while (getline(inCredit, data))
		{
			cout << data << endl;
		}
	}
}