
/* ***************************FILE_HEADER************************ */
/*																   */
/*				       	File    :   DieRandom.cpp       	       */
/* -------------------------------------------------------------- */
/*   Summary  :  Create a class called "Die" that emulates a die
				 that you would use in games of chance.For
				 complete flexibility, the number of sides on the
				 die has not been "hard-coded",so that instead the
				 actual number is specified by an argument to the
				 constructor function.Of course,this value defaults
				 to 6.Note also that an instance of the Random
				 class called "rn" has been declared static in the
				 class so that only one such instance will ever
				 exist evne though the class Die itself will get
				 instantiated more than once.The constructor fr
				 the instance "rn" will be called even before the
				 main() function is entered.
/*																   */


// Library files inclusion 

#include<iostream>
using namespace std;
#include<conio.h>
#include<stdlib.h>
#include<time.h>


/* ***************************CLASS_HEADER**************************

 .Usage    : To to produce random numbers

****************************************************************** */

class CRandom
{

private:

	// Member variables


public:

	// Constructors

	CRandom()
	{
		srand(unsigned(time(0)));
	}

	int GetRandom(int n) const
	{
		return (rand() % n);
	}

};


/* ***************************CLASS_HEADER***********************

.Description : Create a class to represent sides,faces,face_up,
			   etc. of a die

.Usage    : To generate random faces in each toss

*************************************************************** */

class CDie
{

private:

	// Member variables

	const int sides;
	int* faces;
	int face_up;
	static CRandom rn;

public:

	// Constructor

	CDie(int s = 6) : sides(s <= 0 ? 6 : s)
	{
		faces = new int[sides];

		for (int i = 0; i < sides; ++i)
		{
			faces[i] = i + 1;
		}

	}

	// Member function

	int Toss(void)
	{
		face_up = faces[rn.GetRandom(sides)];

		return face_up;
	}

	// Destructor

	~CDie()
	{
		delete[] faces;
	}

}; // Class definition ends

// Static member

CRandom CDie::rn;


// main() starts

int main()

{
	CDie d1, d2(3);

	for (int i = 0; i < 6; i++)
	{
		int a = d1.Toss();
		int b = d2.Toss();

		int total = a + b;

		cout << "\n" << a << " + " << b << " = " << total;
	}


	cout << "\n\n";

	return 0;
}

// End of program



