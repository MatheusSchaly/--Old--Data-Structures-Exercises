#include "Lista.h"

Lista::Lista() {
    head = NULL;
    tamanho = 0;
}

Lista::~Lista() {
    Nodo *temp = getHead();
    while(getHead() != NULL) {
        delete temp;
        setHead(getHead() -> getNext());
        temp = getHead();
    }
}

bool Lista::verificaElemento(int elemento) {
    Nodo *temp = getHead();
    for(int i = 0; i < getTamanho(); i++) {
        if (temp -> getData() == elemento) {
            return true;
        }
        temp = temp -> getNext();
    }
}

void Lista::insereElemento(int elemento, int posicao) {
    if (posicao > getTamanho() + 1) {
        return; // ou verificar com um if (ou try catch) antes de enviar para este metodo
    }
    Nodo *temp = getHead();
    for (int i = 0; i != posicao; i++) {
        temp = temp -> getNext();
    }
    Nodo *novoNodo = new Nodo(elemento, temp -> getNext());
    temp -> setNext(novoNodo);
    aumentaTamanho();
}

void Lista::retirarElemento(int posicao) {
    if (posicao > getTamanho() || getTamanho() == 0) {
        return;
    }
    if (posicao == 1) {
        posicao = 4;
    }
    Nodo *temp = getHead(), *prev;
    for (int i = 0; i != posicao - 1; i++) {
        prev = temp;
        temp = temp -> getNext();
    }
    prev -> setNext(temp -> getNext());
    delete temp;
    diminuiTamanho();
}

void Lista::mostratLista() {
    Nodo *temp = getHead();
    for (int i = 0; i < getTamanho(); i++) {
        cout << temp -> getData() << " ";
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

int Lista::getTamanho() {
    return tamanho;
}
