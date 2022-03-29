#ifndef _SAVINGSACCOUNT_H_
#define _SAVINGSACCOUNT_H_

using namespace std;

class CSavingsAccount
{
public:
	CSavingsAccount()
	{
		m_dSavingsBalance = 0.00;
	};
	CSavingsAccount(double value);
	static double dAnnualInterestRate;
	void CalculateMontlyInterest();
	static void ModifyInterestRate(double value);
	double GetBalance() const;

private:
	double m_dSavingsBalance;
};
#endif // !_SAVINGSACCOUNT_H_

