#include "Lista.h"

Lista::Lista() {
    head = NULL;
    tail = NULL;
    tamanho = 0;
}

Lista::~Lista() {
    Nodo *temp = getHead();
    for (int i = 0; i < getTamanho(); i++) {
        setHead(getHead() -> getNext());
        delete temp;
        temp = getHead();
    }
}

bool Lista::verificaElemento(int elemento) {
    Nodo *temp = getHead();
    for (int i = 0; i < getTamanho(); i++) {
        if (temp -> getData() == elemento) {
            return true;
        }
        temp = temp -> getNext();
    }
    return false;
}

void Lista::insereElemento(int elemento, int posicao) {
    if (getTamanho() == 0) {
        Nodo *novoNodo = new Nodo(elemento);
        novoNodo -> setNext(novoNodo);
        setTail(novoNodo);
        setHead(novoNodo);
        aumentaTamanho();
        return;
    }
    if (posicao == 1 || posicao == getTamanho() + 1) {
        Nodo *novoNodo = new Nodo(elemento, getHead());
        getTail() -> setNext(novoNodo);
        if (posicao == 1) {
            setHead(novoNodo);
        }
        else {
            setTail(novoNodo);
        }
        aumentaTamanho();
        return;
    }
    Nodo *temp = head;
    for (int i = 0; i < posicao - 2; i++) {
        temp = temp -> getNext();
    }
    Nodo *novoNodo = new Nodo(elemento, temp -> getNext());
    temp -> setNext(novoNodo);
    aumentaTamanho();
}

void Lista::removeElemento(int posicao) {
    if (getTamanho() == 1) {
        delete getHead();
        setHead(NULL);
        setTail(NULL);
        diminuiTamanho();
        return;
    }
    if (posicao == 1) {
        tail -> setNext(getHead() -> getNext());
        delete getHead();
        setHead(getTail() -> getNext());
        diminuiTamanho();
        return;
    }
    Nodo *temp = getHead();
    if (posicao == getTamanho()) {
        for (int i = 0; i < getTamanho() - 2; i++) {
            temp = temp -> getNext();
        }
        temp -> setNext(getHead());
        delete getTail();
        setTail(temp);
        diminuiTamanho();
        return;
    }
    Nodo *prev;
    for (int i = 0; i < posicao - 1; i++) {
        prev = temp;
        temp = temp -> getNext();
    }
    prev -> setNext(temp -> getNext());
    setHead(prev);
    delete temp;
    diminuiTamanho();
}

void Lista::mostraLista() {
    Nodo *temp = getHead();
    for (int i = 0; i < getTamanho(); i++) {
        cout << temp -> getData() << " ";
        temp = temp -> getNext();
    }
    cout << "\nTamanho: " << getTamanho() << endl;
}

void Lista::aumentaTamanho() {
    tamanho++;
}

void Lista::diminuiTamanho() {
    tamanho--;
}

Nodo* Lista::getHead() {
    return head;
}

void Lista::setHead(Nodo* head) {
    this -> head = head;
}

Nodo* Lista::getTail() {
    return tail;
}

void Lista::setTail(Nodo* tail) {
    this -> tail = tail;
}

int Lista::getTamanho() {
    return tamanho;
}
