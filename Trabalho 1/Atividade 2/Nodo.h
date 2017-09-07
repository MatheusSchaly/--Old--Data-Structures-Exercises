#ifndef NODO_H_INCLUDED
#define NODO_H_INCLUDED

#include <iostream>

using namespace std;

class Nodo {
    Nodo *next;
    int data; // mudar para generics
public:
    Nodo(int data = 0, Nodo* next = NULL);
    Nodo* getNext();
    void setNext(Nodo* next);
    int getData();
    void setData();
};

#endif // LISTA_H_INCLUDED
