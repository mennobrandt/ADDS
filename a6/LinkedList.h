#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "Node.h"
#include <limits>
#include <iostream>
class LinkedList {
    private:
        Node* head;
        Node* traverse(int target); // return link of specific Node.
    public:
        LinkedList();
        LinkedList(int* array, int len);
        ~LinkedList();
        void insertPosition(int pos, int newNum);
        bool deletePosition(int pos); 
        int get(int pos);
        int search(int target);
        void printList();
};

#endif