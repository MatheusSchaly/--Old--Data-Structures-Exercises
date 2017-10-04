#include "Node.h"

Node::Node(int data, int priority) {
    next = NULL;
    prev = NULL;
    this -> data = data;
    this -> priority = priority;
}

void Node::setNext(Node *next) {
    this -> next = next;
}

Node* Node::getNext() {
    return next;
}

void Node::setPrev(Node *prev) {
    this -> prev = prev;
}

Node* Node::getPrev() {
    return prev;
}

int Node::getData() {
    return data;
}

int Node::getPriority() {
    return priority;
}
