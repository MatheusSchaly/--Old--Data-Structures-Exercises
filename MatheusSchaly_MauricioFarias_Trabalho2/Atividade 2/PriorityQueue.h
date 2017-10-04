#ifndef PRIORITYQUEUE_H_INCLUDED
#define PRIORITYQUEUE_H_INCLUDED

#include "Node.h"

class PriorityQueue {
    Node *head, *tail;
    int queueSize;
public:
    PriorityQueue();
    ~PriorityQueue();
    int findElement();
    void insertElement();
    void removeElement();
    void print();
};

#endif // PRIORITYQUEUE_H_INCLUDED
