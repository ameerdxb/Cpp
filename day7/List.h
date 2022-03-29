

#ifndef LIST_H
#define LIST_H

					// Header files inclusion

#include "Node.h"

/* ***************************CLASS_HEADER**************************** 
 																   
  .Description : A Class representing a linked list's head & tail
                 nodes(CNode class pointers)
 																   
  .Usage       : Uses to add nodes to the list & to print the 
                 list

******************************************************************* */

class CList
{

// Private members

	CNode* head;
	CNode* tail;

public :

// Constructor

	CList();

// Destructor

	~CList();

// Member functions

	CList& Add(int);

	void Print(void);
};

	/* ------------------ End of Class Interface --------------- */

/* ------------------- Member Function definitions --------------- */

/************************** FUNCTION_HEADER *************************
																   
	Purpose   : To initialise data members 
    Note      : Constructor
																   
*********************************************************************/
CList::CList() : head(0),tail(0)
{

}
/************************** FUNCTION_HEADER *************************
																   
	Purpose   : To destroy data members 
    Note      : Destructor
																   
*********************************************************************/
CList::~CList()
{
	CNode* p = head;

	while(p != 0)
	{
		CNode* temp = p -> next;

		delete p;

		p = temp;
	}
}
/************************** FUNCTION_HEADER **************************
																   
	Purpose   : To add a new node to the existing list 
    Note      : Mutator function
																   
*********************************************************************/
CList& CList::Add(int value)
{
	CNode* n = new CNode(value);

	if(! head)
	{
		head = n;
	}

	else
	{
		tail -> next = n;
	}

	tail = n;

	return *this;
}
/************************** FUNCTION_HEADER **************************
																   
	Purpose   : To print the entire list 
    Note      : Public Member function
																   
*********************************************************************/
void CList::Print()
{
	cout<<"\n\n\t\t\t   Linked List : ";

	CNode* p = head;

	while(p != 0)
	{
		cout<<p -> data<<"  ";
		
		p = p -> next;
	}
}
	/* ----------------- End of Class Definition --------------- */

#endif
	
	/* ----------------------- End Of File --------------------- */

