#ifndef NODO_H_INCLUDED
#define NODO_H_INCLUDED

#include <iostream>

using namespace std;

class Nodo {
    Nodo *next;
    int data;
public:
    Nodo* getNext();
    void setNext(Nodo* next);
    void getData();
    void setData();
};

#endif // LISTA_H_INCLUDED
