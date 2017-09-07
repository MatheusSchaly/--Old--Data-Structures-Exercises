#include "Nodo.h"

Nodo::Nodo(int data, Nodo* next) {
    this -> data = data;
    this -> next = next;
}

Nodo* Nodo::getNext() {
    return next;
}

void Nodo::setNext(Nodo* next) {
    this -> next = next;
}

int Nodo::getData() {
    return data;
}

void Nodo::setData() {
    this -> data = data;
}
