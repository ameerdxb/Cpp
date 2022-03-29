#include "Printer.h"

CPrinter::CPrinter(string pszPrinterName)
{
    nCount++;
    m_pszPrinterName = pszPrinterName;
    for (int i = 0; i < nCount; i++)
    {
        PrinterList.push_back(pszPrinterName);
    }
}


CPrinter::~CPrinter()
{
    nCount--;
}

int CPrinter::nCount(0);

string CPrinter::m_pszPrinterName("");

vector<string> CPrinter::PrinterList;

int CPrinter::getCount()
{
    return nCount;
}


void CPrinter::listPrinters()
{
    if (nCount != 0)
    {
        for (int i = 0; i < nCount; i++)
        {
            cout << PrinterList[i] << endl;
        }
    }

}