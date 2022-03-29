#include <iostream>
#include <list>
#include <cstring>
using namespace std;
class Student {
	int mark1, mark2;
	int total;
public:
	Student() { mark1 = mark2 = 0; }
	Student(int i, int j) {
		mark1 = i;
		mark2 = j;
		total = mark1 + mark2;
	}
	int getsum() { return total; }
	friend bool operator<(const Student& o1,
		const Student& o2);
	/*friend bool operator>(const Student& o1,
		const Student& o2);
	friend bool operator==(const Student& o1,
		const Student& o2);
	friend bool operator!=(const Student& o1,
		const Student& o2);*/
};
bool operator<(const Student& o1, const Student& o2)
{
	return o1.total < o2.total;
}
/*bool operator>(const Student& o1, const Student& o2)
{
	return o1.total > o2.total;
}
bool operator==(const Student& o1, const Student& o2)
{
	return o1.total == o2.total;
}
bool operator!=(const Student& o1, const Student& o2)
{
	return o1.total != o2.total;
}*/
int main()
{
	int i;
	// create first list
	list<Student> lst1;
	for (i = 0; i < 10; i++) lst1.push_back(Student(i, i));
	cout << "First list: ";
	list<Student>::iterator p = lst1.begin();
	while (p != lst1.end()) {
		cout << p->getsum() << " ";
		p++;
	}
	cout << endl;
	// create a second list
	list<Student> lst2;
	for (i = 0; i < 10; i++) lst2.push_back(Student(i * 2, i * 3));
	cout << "Second list: ";
	p = lst2.begin();
	while (p != lst2.end()) {
		cout << p->getsum() << " ";
		p++;
	}
	cout << endl;
	// now, merget lst1 and lst2
	lst1.merge(lst2);
	// display merged list
	cout << "Merged list: ";
	p = lst1.begin();
	while (p != lst1.end()) {
		cout << p->getsum() << " ";
		p++;
	}
	return 0;
}