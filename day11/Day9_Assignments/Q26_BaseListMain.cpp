#include <iostream>
#include <vector>
#include "Baselist.h"
using namespace std;

int main()
{
	CAList oCAL1;
	CDList oCDL1;
	cout << "AList : " << endl;
	oCAL1.insert(2);
	oCAL1.insert(5);
	oCAL1.insert(8);
	oCAL1.insert(4);
	oCAL1.insert(1);
	oCAL1.printList();
	cout << endl;
	cout << "Retrived " << oCAL1.retrieve(0) << endl;
	oCAL1.remove(0);
	cout << "Deleted first element!" << endl;
	oCAL1.printList();
	cout << endl;
	cout << "Clearing List.." << endl;
	oCAL1.clearList();
	oCAL1.printList();
	cout << endl;

	cout << "DList : " << endl;
	oCDL1.insert(2);
	oCDL1.insert(5);
	oCDL1.insert(8);
	oCDL1.insert(4);
	oCDL1.insert(1);
	oCDL1.printList();
	cout << endl;
	cout << "Retrived " << oCDL1.retrieve(0) << endl;
	oCDL1.remove(0);
	cout << "Deleted first element!" << endl;
	oCDL1.printList();
	cout << endl;
	cout << "Clearing List.." << endl;
	oCDL1.clearList();
	oCDL1.printList();
	cout << endl;

	return 0;
}