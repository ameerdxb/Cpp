 
/* ***************************FILE_HEADER************************ 
 																   
				   	 File  : ConvBuiltin_Class.cpp       	   
    -------------------------------------------------------------- 
     Summary  :  A program to convert a built-in type to class 
	             type (possible using constructor)
												    
    ************************************************************** 
    
    ************************************************************** */

					// Library files inclusion

#include<iostream>

using namespace std;

class CDistance
{

private :

	int cm;
	int mm;

public :

	CDistance(int a,int b)
	{
		cm = a;
		mm = b;
	}

	CDistance(float mtr)
	{
		cm = mtr*100;
		mm = mtr*1000;
	}

	operator float()
	{
		float m =((cm/100)+(((mm/1000)+cm/100))/100);

		return m;
	}

	void Show(void)
	{
		cout<<"\ncm : "<<cm;
		cout<<"\nmm : "<<mm;
	}
};

int main()
{
	float mtrs = 12.3456;

	CDistance d = mtrs; // primitive datatype to object

	d.Show();

	CDistance d1(1234,560);

	float n = d1; // object to primitive datatype
	
	cout<<"\nmtr : "<<n;

	cout<<"\n\n\n";

	return 0;
}