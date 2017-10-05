#ifndef DEQUE_H_INCLUDED
#define DEQUE_H_INCLUDED

#include <iostream>

using namespace std;

const int dequeSize = 100;

class Deque {
    int elements [100], elementsQuantity, right, left;
public:
    Deque();
    void pushRight(int data);
    void pushLeft(int data);
    void popRight();
    void popLeft();
    bool isEmpty();
    bool isFull();
    bool elementExistence(int data);
    int getElementsQuantity();
    int getRight();
    int getLeft();
    void print();
};

#endif // DEQUE_H_INCLUDED
