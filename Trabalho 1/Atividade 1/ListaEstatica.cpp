#include "ListaEstatica.h"

ListaEstatica ListaEstatica::criaLista() {

}

void ListaEstatica::destroiLista() {
    delete this;
}

bool ListaEstatica::verificaElemento(char elemento) {
    for (int i = 0; i < numeroElementos; i++) {
        if (elementos[i] == elemento) {
            return true;
        }
    }
}

bool ListaEstatica::verificaElementosLista(ListaEstatica listaEstatica) {
    for (int i = 0; i < numeroElementos; i++) {
        for (int j = 0; j < listaEstatica.getNumeroElementos(); j++) {
            if (elementos[i] == elementos[j]) {
                break;
            }
            if (j == listaEstatica.getNumeroElementos() - 1) {
                return false;
            }
        }
    }
    return true;
}

void ListaEstatica::inserirElemento(int elemento) {
    // veriricar se lista esta cheia
    if (numeroElementos == 100) {
        return;
    }
    // verificando se há vaga na lista
    for (int i = 0; i < numeroElementos; i++) {
        if (ocupados[i] == 0) {
            elementos[i] = elemento;
            ocupados[i] = 1;
            numeroElementos++;
            return;
        }
    }
    // se nao houver vagas, adicionar na ultima posicao
    elementos[numeroElementos] = elemento
    ocupados[numeroElementos] = 1;
    numeroElementos++;
}

void ListaEstatica::inserirElementosLista() {}
void ListaEstatica::retirarElemento() {}
void ListaEstatica::mostraLista() {}

int ListaEstatica::getNumeroElementos() {
    return numeroElementos;
}
