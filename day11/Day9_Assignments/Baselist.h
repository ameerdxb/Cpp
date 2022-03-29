#ifndef _BASELIST_H_
#define _BASELIST_H_
#define MAX_LIST 10

class CBaseList 
{
public:
	CBaseList();
	int is_empty() const;
	int is_full() const;
	int getLength() const;
	int retrieve(int pos) const;
	void remove(int pos);
	void clearList();
	void printList();
	virtual void insert(int) = 0;

protected:
	int m_szItem[MAX_LIST];
	int m_nLength;
};


class CAList : public CBaseList
{
public:
	void sort(int arr[]);
	virtual void insert(int);
};


class CDList : public CBaseList
{
public:
	void sort(int arr[]);
	virtual void insert(int);
};

#endif // !_BASELIST_H_
