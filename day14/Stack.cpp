// Fig. 14.3: fig14_03.cpp
 // Stack class template test program.
 #include <iostream>
 using std::cout;
 using std::endl;

 #include "Stack.h"  // Stack class template definition
#include "Complex.h"

 int main()
 {
     Stack< double > doubleStack(5); // size 5
     double doubleValue = 1.1;

     cout << "Pushing elements onto doubleStack\n";

     // push 5 doubles onto doubleStack
     while (doubleStack.push(doubleValue))
     {
         cout << doubleValue << ' ';
         doubleValue += 1.1;
     } // end while

     cout << "\nStack is full. Cannot push " << doubleValue
         << "\n\nPopping elements from doubleStack\n";

     // pop elements from doubleStack
     while (doubleStack.pop(doubleValue))
         cout << doubleValue << ' ';

     cout << "\nStack is empty. Cannot pop\n";

     Stack< int > intStack; // default size 10
     int intValue = 1;
     cout << "\nPushing elements onto intStack\n";

     // push 10 integers onto intStack
     while (intStack.push(intValue))
     {
         cout << intValue << ' ';
         intValue++;
     } // end while

     cout << "\nStack is full. Cannot push " << intValue
         << "\n\nPopping elements from intStack\n";

     // pop elements from intStack
     while (intStack.pop(intValue))
         cout << intValue << ' ';

     cout << "\nStack is empty. Cannot pop" << endl;

     Stack<Complex> cmpStack(3);
     Complex c1(2.3, 4.5);
     Complex c2(12.3, 14.5);
     Complex c3(22.3, 24.5);

     cmpStack.push(c1);
     cmpStack.push(c2);
     cmpStack.push(c3);

     Complex cmp;

     while (cmpStack.pop(cmp))
     {
         cout << cmp << ' ';
     }

     return 0;
 }