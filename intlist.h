// intlist.h
// Linked list header file 

#ifndef INTLIST_H
#define INTLIST_H

class IntList{

public:
	IntList();
	~IntList();
	void printElements();
	int lenList();
	void freeList();
	void insertLast(int value);

private:
	// definition of Node structure (DO NOT CHANGE):
	struct Node {
    	int info;
    	Node *next;
	};
	Node* head;
	Node* tail;

};

#endif

