// testlist.cpp
// Tests intlist.cpp

#include "intlist.h"

#include <cstdlib> // provides atoi
#include <iostream>

using namespace std;

// creates two lists (one empty), and does simple tests of list methods
int main(int argc, char *argv[]) {

    IntList l1; //Empty list on stack

    IntList* p = new IntList(); // Empty list on heap
 
    l1.insertLast(20);
    l1.insertLast(10);
    cout<<"Elements of l1 are: ";
    l1.printElements();

    cout<<"The length of the list is:"<<l1.lenList()<<endl;
    l1.freeList();
    cout<<"The length of the list is:"<<l1.lenList()<<endl;
    delete p; //destructor is called

    return 0;
}
