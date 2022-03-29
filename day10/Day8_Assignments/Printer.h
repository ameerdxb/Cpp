#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

class CPrinter
{
public:
	CPrinter(string = "");
	~CPrinter();
	static int nCount;
	static int getCount();
	static void listPrinters();

private:
	static string m_pszPrinterName;
	static vector<string> PrinterList;
};
