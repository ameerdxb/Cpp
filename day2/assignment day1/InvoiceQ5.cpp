#include <iostream>
#include <string>
#include "Invoice.h"

using namespace std;

Invoice::Invoice (string number, string desc, int quant, int price)
{
	SetPartNumber (number);
	SetPartDescription (desc);
	SetQuantity (quant);
	SetPricePerItem (price);
}


void Invoice::SetPartNumber (string number)
{
	m_strPartNumber = number;
}


string Invoice::GetPartNumber ()
{
	return m_strPartNumber;
}


void Invoice::SetPartDescription (string desc)
{
	m_strPartDescription = desc;
}


string Invoice::GetPartDescription()
{
	return m_strPartDescription;
}


void Invoice::SetQuantity (int quant)
{
	if (quant >= 0)
	{
		m_nItemQuantity = quant;
	}
	else
	{
		m_nItemQuantity = 0;
	}
}


int Invoice::GetQuantity()
{
	return m_nItemQuantity;
}

void Invoice::SetPricePerItem(int price)
{
	if (price >= 0)
	{
		m_nPricePerItem = price;
	}
	else
	{
		m_nPricePerItem = 0;
	}
}


int Invoice::GetPricePerItem()
{
	return m_nPricePerItem;
}


int Invoice::GetInvoiceAmount()
{
	return m_nItemQuantity * m_nPricePerItem;
}

int main(int argc, const char *argv[]) 
{
  Invoice invoice1("00736", "Chainsaw", 5, 500);
                     
  cout << "\nPart Number: " << invoice1.GetPartNumber();
  cout << "\nPart Description: " << invoice1.GetPartDescription();
  cout << "\nQuantity of the item : " << invoice1.GetQuantity()
	   << "\nPrice per item : " << invoice1.GetPricePerItem() <<" rupees" << endl;
  cout << "\nInvoice's total amount : " << invoice1.GetQuantity() << " x " << invoice1.GetPricePerItem();
  cout << " = " << invoice1.GetInvoiceAmount() << " rupees" << endl;
                     
  return 0;
}