#include <iostream>
#include "CComplex.h"

void CComplex::display()
{
    std::cout << "(" << m_fReal << ")" << "+" << "(" << m_fImg << ")" << "i";
}

float CComplex::setdata(float m_fReal, float m_fImg)
{
    this->m_fReal = m_fReal;
    this->m_fImg = m_fImg;
    return m_fReal;
    return m_fImg;
}


CComplex CComplex::operator* (CComplex c1)
{
    CComplex mul;
    mul.m_fReal = ((m_fReal * c1.m_fReal) - (m_fImg * c1.m_fImg));
    mul.m_fImg = ((m_fReal * c1.m_fImg) + (c1.m_fReal * m_fImg));
    return(mul);
}


CComplex CComplex::operator+ (CComplex c1)
{
    CComplex add;
    add.m_fReal = m_fReal + c1.m_fReal;
    add.m_fImg = m_fImg + c1.m_fImg;
    return(add);
}


int main()
{
    CComplex a, b, c;

    a.setdata(9, 6);
    b.setdata(3, 6);

    // Addition
    c = a + b;
    a.display();
    std::cout << " + ";
    b.display();
    std::cout << " = ";
    c.display();

    // Multiplication
    c = a * b;
    std::cout << "\n\n";
    a.display();
    std::cout << " * ";
    b.display();
    std::cout << " = ";
    c.display();

    return 0;
}