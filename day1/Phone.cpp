 // Fig. 11.4: PhoneNumber.cpp
  // Overloaded stream insertion and stream extraction operators
  // for class PhoneNumber.
  #include <iomanip>
  using std::setw;

  #include "Phone.h"

  // overloaded stream insertion operator; cannot be               
  // a member function if we would like to invoke it with          
  // cout << somePhoneNumber;                                      
  ostream &operator<<( ostream &output, const PhoneNumber &number )
  {                                                                
     output << "(" << number.areaCode << ") "                      
        << number.exchange << "-" << number.line;                  
     return output; // enables cout << a << b << c;                
  } // end function operator<<                                     

  // overloaded stream extraction operator; cannot be         
  // a member function if we would like to invoke it with     
  // cin >> somePhoneNumber;                                  
  istream &operator>>( istream &input, PhoneNumber &number )  
  {                                                           
    // input.ignore(); // skip (                                
     input >> number.areaCode; // input area code
   //  input.ignore( 2 ); // skip ) and space                   
     input >> number.exchange; // input exchange 
  //   input.ignore(); // skip dash (-)                         
     input >> number.line; // input line         
     return input; // enables cin >> a >> b >> c;             
  } // end function operator>>           


  // Fig. 11.5: fig11_05.cpp
 // Demonstrating class PhoneNumber's overloaded stream insertion
 // and stream extraction operators.
 #include <iostream>
 using std::cout;
 using std::cin;
 using std::endl;



 int main()
 {
    PhoneNumber phone; // create object phone

    cout << "Enter phone number in the form (123) 456-7890:" << endl;

    // cin >> phone invokes operator>> by implicitly issuing
    // the global function call operator>>( cin, phone )    
    cin >> phone;                                           

    cout << "The phone number entered was: ";

    // cout << phone invokes operator<< by implicitly issuing
    // the global function call operator<<( cout, phone )    
    cout << phone << endl;                                   
    return 0;
 } // end main


