#include<iostream>

using namespace std;

class CBook
{
public:
	CBook()
	{
		m_pszAuthor = new char[50];
		m_pszTitle = new char[50];
		m_pfPrice = new float;
		m_pnStock = new int;
	}
	void AddBook();
	void Display();
	int Search(char[], char[]);
	void decStock();
	
private:	
	char* m_pszAuthor, * m_pszTitle;
	float* m_pfPrice;
	int* m_pnStock;

};

void CBook::decStock()
{
	*m_pnStock = *m_pnStock - 1;
	cout << "\nDecremented the stock.";

}


void CBook::AddBook()
{
	cin.ignore();
	cout << "\nEnter title: ";
	cin.getline(m_pszTitle, 50);
	cout << "\nEnter author: ";
	cin.getline(m_pszAuthor, 50);
	cout << "\nEnter the price: ";
	cin >> *m_pfPrice;
	cout << "\nEnter the stock: ";
	cin >> *m_pnStock;
	cout << "\n\n";
}



void CBook::Display()
{
	cout << "\nTitle: " << m_pszTitle;
	cout << "\nAuthor: " << m_pszAuthor;
	cout << "\nPrice: Rs " << *m_pfPrice;
	cout << "\nStock: " << *m_pnStock;
}

int CBook::Search(char a[50], char b[50])
{
	if (strcmp(a, m_pszTitle) == 0 && strcmp(b, m_pszAuthor) == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}


int main()
{
	CBook* B[100];
	int i = 0, t, ch;
	char szTitle[50], szAuthor[50];

	while (1)
	{
		cout << "\n1. Add new book.\n2. Search book.\n3. Display \n4. Delete book\n5. Exit\nEnter your choice: ";
		cin >> ch;

		switch (ch)
		{
			case 1: 
				B[i] = new CBook;
				B[i]->AddBook();
				i++;
				break;

			case 2: 
				cin.ignore();
				cout << "\nEnter title: ";
				cin.getline(szTitle, 50);
				cout << "\nEnter author: ";
				cin.getline(szAuthor, 50);

				for (t = 0; t < i; t++)
				{
					if (B[t]->Search(szTitle, szAuthor))
					{
						cout << "\nBook found!";
						B[t]->Display();
						break;
					}
				}
				if (t == i)
					cout << "\nBook not found in stock.";
				break;

			case 3:
				for (int t = 0; t < i; t++)
				{
					B[t]->Display();
					cout << endl;
				}
				break;

			case 4: 
				cin.ignore();
				cout << "\nEnter title: ";
				cin.getline(szTitle, 50);
				cout << "\nEnter author: ";
				cin.getline(szAuthor, 50);

				for (t = 0; t < i; t++)
				{
					if (B[t]->Search(szTitle, szAuthor))
					{
						cout << "\nBook found!";
						B[t]->decStock();
						B[t]->Display();
						break;
					}
				}
				if (t == i)
					cout << "\nbook not in stock.";

				break;

			case 5: 
				exit(0);

			default: 
				cout << "\nInvalid choice.";
		}
	}
	return 0;
}