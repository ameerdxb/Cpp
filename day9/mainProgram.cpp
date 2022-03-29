// Fig. 13.5: fig13_05.cpp

  // Aiming base-class and derived-class pointers at base-class

  // and derived-class objects, respectively.

#include <iostream>

using std::cout;

using std::endl;

using std::fixed;



#include <iomanip>

using std::setprecision;



// include class definitions

#include "CommissionEployee.h"

#include "BasePlusCommissionEmployee .h"



int main()

{

    // create base-class object

    CommissionEmployee commissionEmployee(

        "Sue", "Jones", "222-22-2222", 10000, .06);



    // create base-class pointer

    CommissionEmployee* commissionEmployeePtr = 0;



    // create derived-class object

    BasePlusCommissionEmployee basePlusCommissionEmployee(

        "Bob", "Lewis", "333-33-3333", 5000, .04, 300);



    // create derived-class pointer

    BasePlusCommissionEmployee* basePlusCommissionEmployeePtr = 0;



    // set floating-point output formatting

    cout << fixed << setprecision(2);



    // output objects commissionEmployee and basePlusCommissionEmployee

    cout << "Print base-class and derived-class objects:\n\n";

    commissionEmployee.print(); // invokes base-class print

    cout << "\n\n";

    basePlusCommissionEmployee.print(); // invokes derived-class print



    // aim base-class pointer at base-class object and print        

    commissionEmployeePtr = &commissionEmployee; // perfectly natural

    cout << "\n\n\nCalling print with base-class pointer to "

        << "\nbase-class object invokes base-class print function:\n\n";

    commissionEmployeePtr->print(); // invokes base-class print



    // aim derived-class pointer at derived-class object and print        

    basePlusCommissionEmployeePtr = &basePlusCommissionEmployee; // natural

    cout << "\n\n\nCalling print with derived-class pointer to "

        << "\nderived-class object invokes derived-class "

        << "print function:\n\n";

    basePlusCommissionEmployeePtr->print(); // invokes derived-class print



    // aim base-class pointer at derived-class object and print

    commissionEmployeePtr = &basePlusCommissionEmployee;

    cout << "\n\n\nCalling print with base-class pointer to "

        << "derived-class object\ninvokes base-class print "

        << "function on that derived-class object:\n\n";

    commissionEmployeePtr->print(); // invokes base-class print

    cout << endl;

    return 0;

} // end main









/*// Fig. 12.16: fig12_16.cpp
 // Testing class BasePlusCommissionEmployee.
 #include <iostream>
 using std::cout;
 using std::endl;
 using std::fixed;

 #include <iomanip>
 using std::setprecision;

 // BasePlusCommissionEmployee class definition
 #include "BasePlusCommissionEmployee .h"

 int main()
 {
    // instantiate BasePlusCommissionEmployee object
    BasePlusCommissionEmployee
       employee( "Bob", "Lewis", "333-33-3333", 5000, .04, 300 );

    // set floating-point output formatting
    cout << fixed << setprecision( 2 );

    // get commission employee data
    cout << "Employee information obtained by get functions: \n"
       << "\nFirst name is " << employee.getFirstName()
       << "\nLast name is " << employee.getLastName()
       << "\nSocial security number is "
       << employee.getSocialSecurityNumber()
       << "\nGross sales is " << employee.getGrossSales()
       << "\nCommission rate is " << employee.getCommissionRate()
       << "\nBase salary is " << employee.getBaseSalary() << endl;

    employee.setBaseSalary( 1000 ); // set base salary

    cout << "\nUpdated employee information output by print function: \n"
       << endl;
    employee.print(); // display the new employee information

    // display the employee's earnings
    cout << "\n\nEmployee's earnings: $" << employee.earnings() << endl;

    return 0;
 } // end main*/