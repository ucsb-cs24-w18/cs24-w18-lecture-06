#include "intlist.h"

#include <iostream>
using namespace std;

void printElements(Node* hptr){
    
    while(hptr){
        cout<<hptr->info<<" ";
        hptr = hptr->next;
    }

    cout<<endl;
}

int lenList(Node* hptr){

    int result = 0;
    while(hptr){
        result++;
        hptr = hptr->next;
    }
    return result;

}
void freeList(Node* hptr){
    Node *tmp;
    while(hptr){
        tmp = hptr->next;
        delete hptr;
        hptr= tmp;
    }
    hptr=0;

}
