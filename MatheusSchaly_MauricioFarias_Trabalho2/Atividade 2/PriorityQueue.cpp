#include "PriorityQueue.h"

PriorityQueue::PriorityQueue() {
    head = NULL;
    tail = NULL;
    queueSize = 0;
}

PriorityQueue::~PriorityQueue() {
    Node *temp = head;
    while (temp != NULL) {
        head = head -> getNext();
        delete temp;
        temp = head;
    }
}

bool PriorityQueue::isEmpty() {
    return queueSize == 0;
}

bool PriorityQueue::elementExistence(int data) {
    Node *temp = head;
    while (temp != NULL) {
        if (temp -> getData() == data) {
            return true;
        }
        temp = temp -> getNext();
    }
    return false;
}

/*
    Inserts and element at the queue's end (tail).
*/

void PriorityQueue::insertElement(int data, int priority) {
    Node *newNode = new Node(data, priority);
    if (queueSize == 0) {
        head = newNode;
        tail = newNode;
        queueSize ++;
        return;
    }
    newNode -> setPrev(tail);
    tail -> setNext(newNode);
    tail = newNode;
    queueSize ++;
}

void PriorityQueue::removeElement() {
    // It must be checked IN MAIN if the list has no elements
    queueSize--;
    // First corner case (there is just one element)
    if (queueSize == 0) {
        delete head;
        head = NULL;
        tail = NULL;
        return;
    }
    Node *temp = head;
    int highestPriority = temp -> getPriority();
    while (temp -> getNext() != NULL) { // Finds the element that has the highest priority
        temp = temp -> getNext();
        if (temp -> getPriority() > highestPriority) {
            highestPriority = temp -> getPriority();
        }
    }
    temp = head;
    while (true) { // Finds the first node, starting from head, that has the highest priority
        if (temp -> getPriority() == highestPriority) {
            break;
        }
        temp = temp -> getNext();
    }
    // Second corner case (the highest priority element is in the last position)
    if (temp == tail) {
        temp -> getPrev() -> setNext(NULL);
        tail = temp -> getPrev();
        delete temp;
        return;
    }
    // Third corner case (the highest priority element is in the first position)
    if (temp == head) {
        temp -> getNext() -> setPrev(NULL);
        head = temp -> getNext();
        delete temp;
        return;
    }
    temp -> getPrev() -> setNext(temp -> getNext());
    temp -> getNext() -> setPrev(temp -> getPrev());
    delete temp;
}

void PriorityQueue::print() {
    Node *temp = head;
    cout << "Queue size: " << queueSize << "\n\n";
    while (temp != NULL) {
        cout << "Data: " << temp -> getData() << "\nPriority: " << temp -> getPriority() << "\n";
        temp = temp -> getNext();
    }
}
