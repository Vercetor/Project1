#include "LinkList.h"



//constructor
LinkList::LinkList() {

	top = nullptr;

}

//******************************************************
//***  Method Name:push
//***  Method Author: Colin Powers
//******************************************************
//*** Purpose of the Method: push new integer to the list
//*** Method parameters:int num
//*** Return value: null
//******************************************************
//*** Date:9/10/17
//******************************************************
void LinkList::push(int num)
{
	top = new ListNode(num, top);

}


//******************************************************
//***  Method Name:pop
//***  Method Author: Colin Powers
//******************************************************
//*** Purpose of the Method: pop a number off the list
//*** Method parameters:int &num
//*** Return value: null
//******************************************************
//*** Date:9/10/17
//******************************************************
void LinkList::pop(int &num)
{
	ListNode *temp;

	// if emtpy
	if (isEmpty()) {
		throw LinkList::emptyStack();
	}
	
	num = top->value;

	temp = top;

	top = top->next;

	delete temp;

}


//******************************************************
//***  Method Name:isEmpty
//***  Method Author: Colin Powers
//******************************************************
//*** Purpose of the Method: to catch if list is empty
//*** Method parameters: n/a
//*** Return value: top == nullptr
//******************************************************
//*** Date:9/10/17
//******************************************************
bool LinkList::isEmpty() const{
	// return true if top = nullptr
	return top == nullptr;
}

//destructor
LinkList::~LinkList() {

	ListNode *trash = top;

	while (trash != nullptr)
	{

		top = top->next;
		trash->next = nullptr;
		delete trash;
		trash = top;

	}
}
