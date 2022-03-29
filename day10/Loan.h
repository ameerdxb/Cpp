
/* ***************************FILE_HEADER************************* 
 																   
				   	  File  : Loan.h       	   
    -------------------------------------------------------------- 
     Summary : File,contains a class called CLoan and its member 
	           function definitions

    ************************************************************** 
        
    ************************************************************** */

#ifndef LOAN_H
#define LOAN_H
					// Header files inclusion

						#include<stdio.h>
					    #include<string.h>
						#include<math.h>

/* ***************************CLASS_HEADER*********************** 
 																   
  .Description : A Class represents a loan details such as
                 principal,yearly_rate,length_in_years,monthly_
				 payment,type of loan etc.	
 															   
  .Usage       : Used as base class for Simple_Loan & 
                 Amortized_Loan classes

  ************************************************************** */
class CLoan
{

protected :

// Data members
	
	double principal;
	double yearly_rate;
	int length_in_years;
	double monthly_payment;
	char* type;

public :

// Constructor

	CLoan(double, double, int, const char*);

// Destructor

	virtual ~CLoan();

// Member functions

	virtual void Compute() = 0;
	double GetPayment() const;
	void Display();
};

////////////////////////// End of Class Interface ////////////////////

 /* ------------------ Member Function definitions --------------- */

/*^^^^^^^^^^^^^^^^^^^^^^^^^^ FUNCTION_HEADER ^^^^^^^^^^^^^^^^^^^^^^^^

	Purpose   : To initialise data members 
    Note      : Constructor

^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^*/
inline CLoan::CLoan(double p, double r, int l, const char* t)
					:principal(p),
					 yearly_rate(r),
					 length_in_years(l),
					 type(new char[strlen(t)+1])
{
	strcpy(type,t);
}
/*^^^^^^^^^^^^^^^^^^^^^^^^^^ FUNCTION_HEADER ^^^^^^^^^^^^^^^^^^^^^^^^

	Purpose   : To destroy data members 
    Note      : Desstructor

^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^*/
inline CLoan::~CLoan()
{
	delete[] type;
}
/*^^^^^^^^^^^^^^^^^^^^^^^^^^ FUNCTION_HEADER ^^^^^^^^^^^^^^^^^^^^^^^^

	Purpose   : To return the monthly_payment 
    Note      : Inline member function

^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^*/
inline double CLoan::GetPayment() const
{
	return monthly_payment;
}
/*^^^^^^^^^^^^^^^^^^^^^^^^^^ FUNCTION_HEADER ^^^^^^^^^^^^^^^^^^^^^^^^

	Purpose   : To display data members 
    Note      : Inline member function

^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^*/
inline void CLoan::Display()
{
	printf("\n\n\t\t\t\t%s\n\n",type);
	printf("\t\t\tPrincipal = $%0.2f\n",principal);
	printf("\t\t\tRate      = %0.2f%%\n",yearly_rate*100);
	printf("\t\t\tLength    = %d\n",length_in_years);
	printf("\t\t\tPayment   = $%0.2f\n\n",monthly_payment);
}

#endif

/////////////////////////// END OF FILE /////////////////////////////

