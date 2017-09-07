#include "ListaEstatica.h"

int main()
{
    cout << "\n\nTeste\n\n";

    ListaEstatica listaEstatica;
    listaEstatica.criaLista(); // cria
    listaEstatica.inserirElemento(1); // 1
    listaEstatica.inserirElemento(2); // 2 1
    cout << listaEstatica.verificaElemento(1) << endl; // true
    cout << listaEstatica.verificaElemento(3) << endl; // false
    listaEstatica.mostraLista(); // erro?

    return 0;
}
