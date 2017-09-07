#ifndef LISTAESTATICA_H_
#define LISTAESTATICA_H_

#include <iostream>

using namespace std;

class ListaEstatica {
    int numeroElementos;
    char elementos [100];
    int ocupados [100];
    void incrementaNumeroElementos();
    void decrementaNumeroElementos();
public:
    void criaLista(); // ou usar constructor?
    void destroiLista(); // ou usar destructor?
    bool verificaElemento(char elemento);
    bool verificaElementosLista(ListaEstatica listaEstatica);
    void inserirElemento(int elemento);
    void inserirElementosLista(ListaEstatica listaEstatica);
    void retirarElemento(int elemento);
    void mostraLista();

    int getNumeroElementos();
    char* getElementos();
    int* getOcupados();
};

#endif /* LISTAESTATICA_H_ */
