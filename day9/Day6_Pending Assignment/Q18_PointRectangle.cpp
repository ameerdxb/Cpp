#include<iostream>

using namespace std;

class CPoint
{
// stores the m_fX and y coordinates
public:
    float m_fX, m_fY;
    CPoint()
    {
        m_fX = 0; m_fY = 0;
    }

    CPoint(int A, int B)
    {
        this->m_fX = A;
        this->m_fY = B;
    }

    void setCoords(float A, float B)
    {
        this->m_fX = A;
        this->m_fY = B;
    }
};

class CRectangle
{

public:
    void setRectangle(int A, int B, int C, int D)
    {
        topLeft.setCoords(A, B);
        bottomRight.setCoords(C, D);
    }

    // Perimeter = 2(length + width)
    float Perimeter()
    {
        int Perimeter = (2 * ((bottomRight.m_fX - topLeft.m_fX) + (bottomRight.m_fY - topLeft.m_fY)));
        //cout<<"\nPerimeter: "<<perimeter;
        return Perimeter;
    }

    void display()
    {
        cout << "Perimeter: " << Perimeter() << endl;
    }

private:
    CPoint topLeft, bottomRight;

};

void sortPerimeter(CRectangle r[], int n)
{
    int i, j, mini;
    CRectangle temp;
    for (i = 0; i <= n - 2; i++)
    {
        for (j = i + 1; j < n; j++)
            if (r[i].Perimeter() > r[j].Perimeter())
            {
                temp = r[i];
                r[i] = r[j];
                r[j] = temp;
            }

    }
    cout << "\nAfter sorting the Perimeters" << endl;
    for (int i = 0; i < n; i++)
    {
        r[i].display();
    }
}


int main()
{
    int A, B, C, D, option;
    cout << "How many instances do you want to create? : ";
    cin >> option;
    CRectangle r[100];
    for (int i = 0; i < option; i++)
    {
        cout << "\nEnter two coordinates: ";
        cin >> A >> B >> C >> D;
        r[i].setRectangle(A, B, C, D);
        r[i].Perimeter();
        r[i].display();

    }
    sortPerimeter(r, option);
}