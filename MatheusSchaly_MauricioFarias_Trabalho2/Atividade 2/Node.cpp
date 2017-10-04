#include "Node.h"

Node::Node() {
    next = NULL;
    prev = NULL;
    data = 0;
}

Node::Node(Node *next, Node *prev) {
    this -> next = next;
    this -> prev = prev;
    this -> data = data;
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

void Node::setData(int data) {
    this -> data = data;
}

int Node::getData() {
    return data;
}

void Node::setPriority(int priority) {
    this -> priority = priority;
}

int Node::getPriority() {
    return priority;
}
