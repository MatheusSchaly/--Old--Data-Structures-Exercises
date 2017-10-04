#ifndef NODE_H_INCLUDED
#define NODE_H_INCLUDED

#include <iostream>

using namespace std;

class Node {
    Node *next, *prev;
    int data;
    int priority;
public:
    Node(int data, int priority);
    void setNext(Node *next);
    Node* getNext();
    void setPrev(Node *prev);
    Node* getPrev();
    int getData();
    int getPriority();
};

#endif // NODE_H_INCLUDED
