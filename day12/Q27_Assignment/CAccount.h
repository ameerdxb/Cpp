#ifndef _CACCOUNT_H_
#define _CACCOUNT_H_

#include <string>
using std::string;

class CAccount
{
public:
	CAccount(int = 0, double = 0.0, string = "");
	void setAccountNumber(int);
	int getAccountNumber() const;
	void setBalance(double);
	double getBalance() const;
	void setAccntFile(string);
	void Credit(double);
	void Debit(double);
	void readData();

private:
	int m_nAccntNo;
	double m_dBalance;
	string m_csAccntFile;
};

#endif // !_CACCOUNT_H_
