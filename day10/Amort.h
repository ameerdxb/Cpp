
/* ***************************FILE_HEADER************************* 
 																   
				   	   File  : Amortized_Loan.h       	   
    -------------------------------------------------------------- 
     Summary : File,contains a class called CAmortized_Loan and its 
	           member function definitions

    ************************************************************** 
    ** */

#ifndef AMORTIZED_LOAN_H
#define AMORTIZED_LOAN_H

					// Header files inclusion

						#include "Loan.h"

/* ***************************CLASS_HEADER*********************** 
 																   
  .Description : A Class represents a Amortized_Loan derived from 
                 CLoan class
 															   
  .Usage       : Used to calculate the monthly payment of a 
                 amortized loan

  ************************************************************** */

class CAmortized_Loan : public CLoan
{

public :

// Constructor

	CAmortized_Loan(double, double, int);

// member function

	virtual void Compute();
};

////////////////////////// End of Class Interface ////////////////////

 /* ------------------ Member Function definitions --------------- */

/* ^^^^^^^^^^^^^^^^^^^^^^^^^ FUNCTION_HEADER ^^^^^^^^^^^^^^^^^^^^^^

	Purpose   : To initialise data members 
    Note      : Inline constructor

  ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ */
inline CAmortized_Loan::CAmortized_Loan(double p, double r, int l)
								:CLoan(p,r,l,"Amortized Loan")
								 
{
	
}
/* ^^^^^^^^^^^^^^^^^^^^^^^^^ FUNCTION_HEADER ^^^^^^^^^^^^^^^^^^^^^^

	Purpose   : To compute monthly_payment
    Note      : Inline member function

  ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ */
inline void CAmortized_Loan::Compute()
{
	double monthly_rate = yearly_rate / 12;

	int length_in_months = length_in_years * 12;

	double temp = pow(1 + monthly_rate , length_in_months);

	monthly_payment = (principal * monthly_rate * temp) / (temp - 1);
}

#endif

/////////////////////////// END OF FILE /////////////////////////////
