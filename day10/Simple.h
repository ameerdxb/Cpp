
/* ***************************FILE_HEADER************************* 
 																   
				   	     File  : Simple_Loan.h       	   
    -------------------------------------------------------------- 
     Summary : File,contains a class called CSimple_Loan and its 
	           member function definitions

    ************************************************************** 
   
    ************************************************************** */

#ifndef SIMPLE_LOAN_H
#define SIMPLE_LOAN_H
					// Header files inclusion

						#include "Loan.h"

/* ***************************CLASS_HEADER*********************** 
 																   
  .Description : A Class represents a Simple_Loan derived from 
                 CLoan class
 															   
  .Usage       : Used to calculate the monthly payment of a 
                 simple loan 

  ************************************************************** */

class CSimple_Loan : public CLoan
{

public :

// Constructor

	CSimple_Loan(double, double, int);

// Member function

	virtual void Compute();
};

////////////////////////// End of Class Interface ////////////////////

 /* ------------------ Member Function definitions --------------- */

/* ^^^^^^^^^^^^^^^^^^^^^^^^^ FUNCTION_HEADER ^^^^^^^^^^^^^^^^^^^^^^

	Purpose   : To initialise data members 
    Note      : Inline constructor

  ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ */
inline CSimple_Loan::CSimple_Loan(double p, double r, int l)
								:CLoan(p,r,l,"Simple Loan")
								 
{
	
}
/* ^^^^^^^^^^^^^^^^^^^^^^^^^ FUNCTION_HEADER ^^^^^^^^^^^^^^^^^^^^^^

	Purpose   : To compute monthly_payment
    Note      : Inline member function

  ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ */
inline void CSimple_Loan::Compute()
{
	double monthly_rate = yearly_rate / 12;

	int length_in_months = length_in_years * 12;

	monthly_payment = (principal * (monthly_rate * length_in_months + 1)) / length_in_months;
}

#endif

/////////////////////////// END OF FILE /////////////////////////////
