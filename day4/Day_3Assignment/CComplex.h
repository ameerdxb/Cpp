#ifndef _CCOMPLEX_H_
#define _CCOMPLEX_H_

#include<iostream>

class CComplex
{
    // Member variables
private:
    float m_fReal;
    float m_fImg;

    // Member functions
public:
    float setdata(float, float);
    void display();

    // Constructor for initialization
    CComplex()
    {
        m_fReal = m_fImg = 0;
    }
    CComplex operator+ (CComplex c1);
    CComplex operator* (CComplex c1);
};

#endif