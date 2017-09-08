#include "Lista.h"

int main()
{
    cout << "\n\nHello world!\n\n" << endl;
    Lista myList;
    // Testa insere
//    myList.insereElemento(2, 1); // 2
//    myList.mostraLista();
//    myList.insereElemento(1, 1); // 1 2
//    myList.mostraLista();
//    myList.insereElemento(3, 3); // 1 2 3
//    myList.mostraLista();
//    myList.insereElemento(4, 4); // 1 2 3 4
//    myList.mostraLista();
//    myList.insereElemento(0, 1); // 0 1 2 3 4
//    myList.mostraLista();
//    myList.insereElemento(5, 2); // 0 5 1 2 3 4
//    myList.mostraLista();
//    myList.insereElemento(6, 7); // 0 5 1 2 3 4 6
//    myList.mostraLista();
//    cout << "\nHead: " << myList.getHead() -> getData() << endl; // 0
//    cout << "Tail: " << myList.getTail() -> getData() << endl; // 6
    // Testa remove
    myList.insereElemento(1, 1); // 1
    myList.removeElemento(1); //
    myList.mostraLista();
    myList.insereElemento(0, 1); // 0
    myList.insereElemento(1, 2); // 0 1
    myList.mostraLista();
    myList.removeElemento(1); // 1
    myList.mostraLista();
    myList.insereElemento(2, 2); // 1 2
    myList.mostraLista();
    myList.removeElemento(2); // 1
    myList.insereElemento(2, 2); // 1 2
    myList.insereElemento(3, 3); // 1 2 3
    myList.mostraLista();
    myList.removeElemento(2); // 1 3
    myList.mostraLista();
    myList.insereElemento(2, 2); // 1 2 3
    myList.insereElemento(4, 4); // 1 2 3 4
    myList.insereElemento(5, 5); // 1 2 3 4 5
    myList.mostraLista();
    myList.removeElemento(2); // 1 3 4 5
    myList.mostraLista();
    myList.removeElemento(4); // 1 3 4
    myList.mostraLista();
    myList.removeElemento(2); // 1 4
    myList.mostraLista();
    myList.removeElemento(2); // 1
    myList.mostraLista();
    myList.removeElemento(1); //
    myList.mostraLista();
}
