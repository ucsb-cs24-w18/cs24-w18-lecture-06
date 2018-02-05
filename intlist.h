// intlist.h
// Linked list header file 

#ifndef INTLIST_H
#define INTLIST_H

// definition of Node structure (DO NOT CHANGE):
struct Node {
    int info;
    Node *next;
};

void printElements(Node* hptr);
int lenList(Node* hptr);

void freeList(Node* hptr);
#endif

