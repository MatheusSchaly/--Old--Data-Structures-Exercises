#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED

#include "Nodo.h"

class Lista {
    Nodo *head, *tail;
    int tamanho;
public:
    Lista();
    ~Lista();
    bool verificaElemento();
    void insereElemento();
    void retirarElemento();
    void mostratLista();

    Nodo* getHead();
    Nodo* getTail();
    int getTamanho();
};

#endif // LISTA_H_INCLUDED
