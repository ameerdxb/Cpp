#include<iostream>

#define SIZE 5

using namespace std;

class CStack
{

    int* m_pnNumber;
    int m_nPosition;

public:

    CStack()
    {
        m_pnNumber = new int[SIZE];
        m_nPosition = -1;
    }
    ~CStack()
    {
        delete[] m_pnNumber;

    }
    void Push(int n);
    void Pop();
    int IsEmpty();
    int IsFull();

};

int CStack::IsEmpty()
{
    if (m_nPosition == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}

int CStack::IsFull()
{
    if (m_nPosition == SIZE - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}

void CStack::Push(int n)
{
    if (IsFull())
    {
        cout << "Stack is full!" << endl;
    }
    else
    {
        m_pnNumber[++m_nPosition] = n;
        cout << "Position: " << m_nPosition << "\tElement: " << m_pnNumber[m_nPosition];
    }


}

void CStack::Pop()
{
    if (IsEmpty())
    {
        cout << "stack is empty!" << endl;
    }
    else
    {
        --m_nPosition;
    }
}

void main()
{
    CStack stack;
    int m_nCh, m_nNum;
    for (;;)
    {
        cout << "\n1.Push\n2 Pop\n3 Exit\nEnter Choice:";
        cin >> m_nCh;

        switch (m_nCh)
        {
        case 1:
            cout << "\nEnter the number: ";
            cin >> m_nNum;
            stack.Push(m_nNum);
            break;

        case 2:
            stack.Pop();
            break;

        case 3:
            exit(1);
        }
    }

}
