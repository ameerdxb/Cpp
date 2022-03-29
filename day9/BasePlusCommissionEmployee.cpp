// Fig. 12.15: BasePlusCommissionEmployee.cpp
 // Class BasePlusCommissionEmployee member-function definitions.
 #include <iostream>
 using std::cout;
 using std::endl;

 // BasePlusCommissionEmployee class definition
 #include "BasePlusCommissionEmployee .h"

 // constructor
 BasePlusCommissionEmployee::BasePlusCommissionEmployee(
    const string &first, const string &last, const string &ssn,
    double sales, double rate, double salary )
    // explicitly call base-class constructor            
   : CommissionEmployee( first, last, ssn, sales, rate )
 {
     /*firstName = first;
     lastName = last;
     socialSecurityNumber = ssn;
     grossSales = sales;
     commissionRate = rate;*/

     cout << "Derived class constructor" << endl;
    setBaseSalary( salary ); // validate and store base salary
 } // end BasePlusCommissionEmployee constructor

 // set base salary
 void BasePlusCommissionEmployee::setBaseSalary( double salary )
 {
    baseSalary = ( salary < 0.0 ) ? 0.0 : salary;
 } // end function setBaseSalary

 // return base salary
 double BasePlusCommissionEmployee::getBaseSalary() const
 {
    return baseSalary;
 } // end function getBaseSalary

 // calculate earnings
 double BasePlusCommissionEmployee::earnings() const
 {
    // can access protected data of base class          
   // return baseSalary + ( commissionRate * grossSales );
     return baseSalary + (getCommissionRate() * getGrossSales());
 } // end function earnings

 // print BasePlusCommissionEmployee object
 void BasePlusCommissionEmployee::print() const
 {
    // can access protected data of base class                            
   /*cout << "base-salaried commission employee: " << firstName << ' '     
       << lastName << "\nsocial security number: " << socialSecurityNumber
       << "\ngross sales: " << grossSales                                 
       << "\ncommission rate: " << commissionRate  */                  //CommissionEmployee::print();   
     CommissionEmployee::print();
       cout << "\nbase salary: " << baseSalary;                                
 } // end function print


