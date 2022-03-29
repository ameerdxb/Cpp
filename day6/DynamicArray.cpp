#include<iostream>
using namespace std;

class Dynarray {
private:
	int* pa; // points to the array
	int length; // the # elements
	int nextIndex; // the next highest index value
public:
	Dynarray(); // the constructor
	~Dynarray(); // the destructor
	int& operator[](int index); // the indexing operation
	void add(int val); // add a new value to the end
	int size(); // return length
};

int Dynarray::size()
{
	return length;
}
Dynarray::Dynarray() {
	pa = new int[10];
	for (int i = 0; i < 10; i++)
		pa[i] = 0;
	length = 10;
	nextIndex = 0;
}
Dynarray::~Dynarray() {
	delete[] pa;
}

int& Dynarray::operator[](int index) {
	int* pnewa; // pointer for new array
	if (index >= length) { // is element in the array?
		pnewa = new int[index + 10]; // allocate a bigger array
		for (int i = 0; i < nextIndex; i++) // copy old values
			pnewa[i] = pa[i];
		for (int j = nextIndex; j < index + 10; j++) // initialize remainder
			pnewa[j] = 0;
		length = index + 10; // set length to bigger size
		delete[] pa; // delete the old array
		pa = pnewa; // reassign the new array
	}
	if (index > nextIndex) // set nextIndex past index
		nextIndex = index + 1;
	return *(pa + index); // a reference to the element
}

void Dynarray::add(int val) {
	int* pnewa;
	if (nextIndex == length) {
		length = length + 10;
		pnewa = new int[length];
		for (int i = 0; i < nextIndex; i++)
			pnewa[i] = pa[i];
		for (int j = nextIndex; j < length; j++)
			pnewa[j] = 0;
		delete[] pa;
		pa = pnewa;
	}
	pa[nextIndex++] = val;
}
int main() {
	Dynarray da; // create an array object, size 10
	da.add(1); // add values to the end
	da.add(2);
	da.add(3);
	da[3] = 4; // use LHV for assignment
	for (int i = 0; i < da.size(); i++) // get length of array using size()
		cout << da[i] << endl; // print out using RHV
	da[12] = 5; // assign element past end of array
	for (int j = 0; j < da.size(); j++) // size is now 22
		cout << da[j] << endl; // print out all elements again in
	return 0; // bigger array
}