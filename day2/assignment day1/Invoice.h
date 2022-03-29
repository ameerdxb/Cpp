#ifndef _INVOICE_H_
#define _INVOICE_H_

#include <string>

using namespace std;

class Invoice
{
// Member functions
public:
	Invoice(string, string, int, int);
	void SetPartNumber(string number);
	string GetPartNumber();
	void SetPartDescription(string desc);
	string GetPartDescription();
	void SetQuantity(int quant);
	int GetQuantity();
	void SetPricePerItem(int price);
	int GetPricePerItem();
	int GetInvoiceAmount();

// Memeber variables
private:
	string m_strPartNumber;
	string m_strPartDescription;
	int m_nItemQuantity;
	int m_nPricePerItem;
};

#endif