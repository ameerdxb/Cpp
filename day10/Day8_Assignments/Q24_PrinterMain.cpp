#include "Printer.h"

int main()
{
	cout << CPrinter::getCount() << " Printers  connected" << endl;
	CPrinter::listPrinters();
	CPrinter* p1 = new CPrinter(" EPSON");
	CPrinter* p2 = new CPrinter(" HP");
	cout << CPrinter::getCount() << " Printers  connected" << endl;
	CPrinter::listPrinters();
	delete p2;
	cout << CPrinter::getCount() << " Printers  connected" << endl;
	CPrinter::listPrinters();

	return 0;
}