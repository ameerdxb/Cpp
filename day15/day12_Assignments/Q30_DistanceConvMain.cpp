#include <iostream>
#include"DM.h"
#include"DB.h"
using namespace std;

void  main()
{
    DM  dm1(10, 20);
    DM  dm2;
    DB   db1(4, 10);
    DB   db2;
    dm2 = dm1 + db1;
    db2 = db1 + dm1;
    dm2.Display();
    db2.Display();
}
