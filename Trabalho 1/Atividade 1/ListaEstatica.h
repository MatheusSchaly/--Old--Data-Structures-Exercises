#ifndef LISTAESTATICA_H_
#define LISTAESTATICA_H_

#include <iostream>

using namespace std;

class ListaEstatica {
    int numeroElementos;
    char elementos [100];
    int ocupados [100];
public:
    ListaEstatica criaLista();
    void destroiLista();
    bool verificaElemento();
    bool verificaElementosLista();
    void inserirElemento();
    void inserirElementosLista();
    void retirarElemento();
    void mostraLista();
};

#endif /* LISTAESTATICA_H_ */
