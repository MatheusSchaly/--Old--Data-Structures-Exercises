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
    bool verificaElemento(char elemento);
    bool verificaElementosLista(ListaEstatica listaEstatica);
    void inserirElemento(int elemento);
    void inserirElementosLista();
    void retirarElemento();
    void mostraLista();
    int getNumeroElementos();
};

#endif /* LISTAESTATICA_H_ */
