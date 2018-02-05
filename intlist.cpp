#include "intlist.h"
#include <iostream>
using namespace std;

IntList::IntList(){
    head = 0;
    tail = 0;
}

void IntList::insertLast(int value){
    if(head==0){
        //Empty list
        head = new Node;
        head->info = value;
        head->next = 0;
        tail = head;
    }else{
        tail->next = new Node;
        tail = tail->next;
        tail->info = value;
        tail->next = 0;
    }
}
void IntList::printElements(){
    Node* hptr = head;
    while(hptr){
        cout<<hptr->info<<" ";
        hptr = hptr->next;
    }

    cout<<endl;
}

int IntList::lenList(){
    Node* hptr = head;
    int result = 0;
    while(hptr){
        result++;
        hptr = hptr->next;
    }
    return result;

}
// hptr->20->10->null
void IntList::freeList(){
    Node *tmp;
    while(head){
        tmp = head->next;
        delete head;
        //What is the value of hptr?
        // A. Null
        // B. Whatever it was before -> correct
        // C. garbage value
        // D. None of the above
        head= tmp;
    }
    head=0;
    tail=0;

}
