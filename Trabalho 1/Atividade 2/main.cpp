#include "Lista.h"

int main()
{
    cout << "\n\nHello world!\n\n" << endl;
    Lista myList;
    myList.insereElemento(1, 1); // 1
    myList.mostratLista();
    myList.insereElemento(0, 1); // 0 1
    myList.mostratLista();
    myList.insereElemento(2, 3); // 0 1 2
    myList.mostratLista();
    myList.insereElemento(-1, 1); // -1 0 1 2 (deve ser arrumado)
    myList.mostratLista();
}
