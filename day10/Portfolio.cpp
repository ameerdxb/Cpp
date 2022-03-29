
/* ***************************FILE_HEADER************************* 
 																   
				   	   File  : Portfolio.cpp       	   
    -------------------------------------------------------------- 
     Summary : File,contains a pointer to the array of CLoan class
	           objects using which compute the monthly payment of
			   simple loan & amortized loan

    ************************************************************** 
   
    ************************************************************** */

					// Header files inclusion

#include "Loan.h"
#include "Simple.h"
#include "Amort.h"

///////////////////////////// main() starts //////////////////////////

int main()
{
	printf("\n\t\t\t SIMPLE & AMORTIZED LOAN");
	printf("\n\t\t\t-------------------------");

	printf("\n\n\n");

	CLoan* portfolio[] = // Initialise objects
	{
		new CSimple_Loan(100000.0,0.08,1),
		new CAmortized_Loan(100000.0,0.08,1)
	};

	const int size = sizeof(portfolio) / sizeof(CLoan*);

	for(int i = 0; i < size ; ++i)
	{
		portfolio[i] -> Compute();	// Compute monthly payment
		portfolio[i] -> Display();	// Display deatils
	}

	for(int i = 0 ; i < size ; i++)
	{
		delete portfolio[i];	// Delete each object created
	}

	printf("\n\n\n");
	return 0;

}

////////////////////////////// main() ends //////////////////////////
