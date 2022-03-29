#include <iostream>
#include <vector>
#include "Baselist.h"
using namespace std;

CBaseList::CBaseList()
{
	m_nLength = 0;
}


void CBaseList::insert(int nValue)
{
	if (is_full() == 1)
	{
		cout << "Array is full!" << endl;
	}
	else
	{
		for (int i = m_nLength; i >= getLength(); --i)
		{
			m_szItem[i] = nValue;
			++m_nLength;
		}
	}
}


void CBaseList::printList()
{
	if (is_empty() == 1)
	{
		cout << "Array is empty!" << endl;
	}
	else
	{
		for (int i = 0; i < getLength(); i++)
		{
			cout << m_szItem[i] << endl;
		}
	}
}


int CBaseList::getLength() const
{
	return m_nLength;
}


int CBaseList::is_empty() const
{
	if (m_nLength == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}


int CBaseList::is_full() const
{
	if (m_nLength == MAX_LIST)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}


int CBaseList::retrieve(int pos)const
{
	int data;
	if ((pos >= 0) && (pos <= m_nLength - 1))
	{
		data = m_szItem[pos];
	}

	return data;
}


void CBaseList::remove(int pos)
{
	if ((pos >= 0) && (pos <= m_nLength - 1))
	{
		for (int i = pos + 1; i <= m_nLength; ++i)
		{
			m_szItem[i - 1] = m_szItem[i];
		}
		--m_nLength;
	}
}


void CBaseList::clearList()
{
	for (int i = 0; i < getLength(); ++i)
	{
		m_szItem[i] = m_szItem[i + 1];
		m_nLength--;
		m_nLength = 0;
	}
	cout << "Deleted successfully!" << endl;
}


void CAList::sort(int arr[])
{
	int temp;
	for (int i = 0; i < m_nLength; i++)
	{
		for (int j = i + 1; j < m_nLength; j++)
		{
			if (arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}


void CAList::insert(int nValue)
{
	if (is_full() == 1)
	{
		cout << "Array is full!" << endl;
	}
	else
	{
		for (int i = m_nLength; i >= getLength(); --i)
		{
			m_szItem[i] = nValue;
			++m_nLength;
		}
	}
	sort(m_szItem);
}


void CDList::sort(int arr[])
{
	int temp;
	for (int i = 0; i < m_nLength; i++)
	{
		for (int j = i + 1; j < m_nLength; j++)
		{
			if (arr[i] < arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}


void CDList::insert(int nValue)
{
	if (is_full() == 1)
	{
		cout << "Array is full!" << endl;
	}
	else
	{
		for (int i = m_nLength; i >= getLength(); --i)
		{
			m_szItem[i] = nValue;
			++m_nLength;
		}
	}

	sort(m_szItem);
}
