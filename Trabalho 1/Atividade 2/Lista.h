#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED

#include "Nodo.h"

class Lista {
    Nodo *head, *tail;
    int tamanho;
    void aumentaTamanho();
    void diminuiTamanho();
public:
    Lista();
    ~Lista();
    bool verificaElemento(int elemento);
    void insereElemento(int elemento, int posicao);
    void removeElemento(int posicao);
    void mostraLista();

    Nodo* getHead();
    void setHead(Nodo* head);
    Nodo* getTail();
    void setTail(Nodo* tail);
    int getTamanho();
};

#endif // LISTA_H_INCLUDED
