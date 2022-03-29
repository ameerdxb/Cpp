#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_

using namespace std;

class Account
{
// Member functions
public:
		Account (int);
		void Credit(int);
		void Debit(int);
		void SetData(int);
		int getBalance();

// Member variables
private:
		int m_nBalance;
};

#endif