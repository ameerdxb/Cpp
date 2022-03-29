#include<iostream>
#include<math.h>
using namespace std;
#include<string>

//type to which it will be converted
class Celsius;//forward declaration

class Fahrenheit {

    double temp;
public:
    void display();
    operator Celsius();
    Fahrenheit(double t = 0.0);
};
//class to be converted
class Celsius 
{

    float temp;
public:
    void display() 
    {
        cout << temp << endl;
    }
    Celsius(float t = 0.0)
    {
        temp = t;
    }
    operator Fahrenheit()
    {
        double t = (temp * 9 / 5) + 32;
        return Fahrenheit(t);
    }
};

void Fahrenheit::display() 
{
    cout << temp << endl;
}

Fahrenheit::operator Celsius()

{
    double f = (temp - 32.0) * 5.0 / 9.0;
    return Celsius(f);
}

Fahrenheit::Fahrenheit(double t)

{
    temp = t;
}

int main() 
{
    Fahrenheit f(100);
    Celsius c;
    c = f;
    c.display();
    //f.display();
    Celsius c1(37.7);
    Fahrenheit f1;
    f1 = c1;
    f1.display();
    return 0;
}