// testlist.cpp
// Tests intlist.cpp

#include "intlist.h"

#include <cstdlib> // provides atoi
#include <iostream>

using namespace std;

// creates two lists (one empty), and does simple tests of list methods
int main(int argc, char *argv[]) {
    /*int *p=0;
    int x =10;
    p=&x;
    if(p!=0){
         cout<<*p<<endl;
    }
    */
    Node *head =0; //Empty list

    head = new Node;
    head->info = 10;
    head->next = nullptr;

    Node * tmp = new Node;
    tmp->info = 20;
    tmp->next = head;

    head = tmp;
    printElements(head);
    cout<<"The length of the list is:"<<lenList(head)<<endl;
    freeList(head);
   // head =nullptr;
    cout<<"The length of the list is:"<<lenList(head)<<endl;

    return 0;
}
