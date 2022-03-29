
#ifndef NODE_H
#define NODE_H

					// Header files inclusion

#include<iostream>
using namespace std;

/* ***************************CLASS_HEADER**************************** 
 																   
  .Description : A Class representing a node of alinked list by its 
                 data and pointer to the next node in the list
 																   
  .Usage       : Uses to create nodes

******************************************************************* */

class CNode
{
	int data;
	CNode* next;

	CNode(int = 0);

	friend class CList;
};

inline CNode::CNode(int n) : data(n),next(0)
{

}

#endif

