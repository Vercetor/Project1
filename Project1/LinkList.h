#pragma once
#ifndef LINKLIST_H
#define LINKLIST_H

class LinkList{

	// struct for node
	struct ListNode {

		int value;

		ListNode *next;
		

		// Constructor
		ListNode(int val, ListNode *successorPtr = nullptr) {

			value = val;

			next = successorPtr;
		}

	};

	// pointer to node
	ListNode *top;

public:
	// Constructor
	LinkList();

	// Destructor
	~LinkList();

	// Push
	void push(int);

	// Pop
	void pop(int &);
	
	// Empty stack
	bool isEmpty() const;

	// Stack Exception
	class emptyStack {};

};

#endif