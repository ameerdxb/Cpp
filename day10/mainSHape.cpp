#include <iostream>
#include <vector>
using namespace std;

#include "Shape.h"
#include "Square.h"
#include "Traingle.h"

void  main()
{
	//Shape* s = new Shape();
	/*Square sq(10);
	Shape* s = &sq;
	s->Area();
	s->Perimeter();*/
	/*cout << "********************" << endl;
	
	Shape* s2 = new Square(25);
	s2->Area();
	s2->Perimeter();
	delete s2;

	cout << "*******************" << endl;

	Shape* s1 = new Triangle(3, 4);
	s1->Area();
	s1->Perimeter();
	delete s1;*/

	vector<Shape*> v(3);
	v[0] = new Square(25);
	v[1] = new Triangle(3, 4);
	v[2] = new Square(2);
	for (int i = 0; i < v.size(); i++)
	{
		v[i]->Area();
		v[i]->Perimeter();
		delete v[i];
	}
}