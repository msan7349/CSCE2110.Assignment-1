//
//  LinkedList.h
//  Assignment 1
//
//  Created by Mateo Sandoval on 2/21/25.
//
#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "Node.h"

class LinkedList {
private:
    Node* head;
public:
    LinkedList();
    ~LinkedList();
    void insert(int value);
    bool search(int value);
    void print();
};

#endif // LINKEDLIST_H
