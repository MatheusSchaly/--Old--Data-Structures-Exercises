#ifndef NODE_H_INCLUDED
#define NODE_H_INCLUDED

#include <iostream>

using namespace std;

class Node {
    Node *next, *prev;
    int data;
    int priority;
public:
    Node();
    Node(Node *next = NULL, Node *prev = NULL);
    void setNext(Node *next);
    Node* getNext();
    void setPrev(Node *prev);
    Node* getPrev();
    void setData(int data);
    int getData();
    void setPriority(int priority);
    int getPriority();
};

#endif // NODE_H_INCLUDED
