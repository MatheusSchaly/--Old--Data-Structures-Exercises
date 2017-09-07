#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED

#include "Nodo.h"

class Lista {
    Nodo *head;
    int tamanho;
    void aumentaTamanho();
    void diminuiTamanho();
public:
    Lista();
    ~Lista();
    bool verificaElemento(int elemento);
    void insereElemento(int elemento, int posicao);
    void retirarElemento(int posicao);
    void mostratLista();

    Nodo* getHead();
    void setHead(Nodo* head);
    int getTamanho();
};

#endif // LISTA_H_INCLUDED
