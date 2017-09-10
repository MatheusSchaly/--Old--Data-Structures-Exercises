// #include "Jogador.h"
#include "Lista.h" // acabar implementacao de lista primeiro, incluir generics (templates)
#include "Nodo.h"
#include "Carta.h"

int main() {

    /*Carta carta1(10, 4);
    Carta carta2(11, 3);
    Carta *carta3;
    carta3 = new Carta(55,5);
    cout << carta1 << endl;
    cout << carta2 << endl;
    cout << *carta3 << endl;*/

    /*Lista<Carta> mylist;
    Carta carta1(10,4),carta2(11,5),carta3(12,6);
    mylist.insereElemento(carta1,1);
    mylist.insereElemento(carta2,2);
    mylist.insereElemento(carta3,3);
    mylist.mostraLista();*/


    /*Carta carta1(1,1),carta2(2,2);
    Carta carta3 = carta1;
    carta1 = carta2;
    cout << carta1.getNaipe() << carta1.getValor();*/


    /*Lista<int> mylist;
    mylist.insereElemento(1,1);
    mylist.insereElemento(2,2);
    mylist.insereElemento(3,3);
    mylist.mostraLista();

    Lista<float> mylist1;
    mylist1.insereElemento(1.5,1);
    mylist1.insereElemento(2.3,2);
    mylist1.insereElemento(3.7,3);
    mylist1.mostraLista();

    Lista<string> mylist2;
    mylist2.insereElemento("um",1);
    mylist2.insereElemento("dois",2);
    mylist2.insereElemento("tres",3);
    mylist2.mostraLista();*/


    /*Carta carta1(10,2), carta2(13,2), carta3(1,4);
    Lista<Carta> mylist3;
    mylist3.insereElemento(carta1,1);
    mylist3.insereElemento(carta2,2);
    mylist3.insereElemento(carta3,3);
    cout << mylist3.getHead()->getData().getValor();
    cout << mylist3.getTail()->getData().getValor();*/


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
//    myList.insereElemento(1, 1); // 1
//    myList.removeElemento(1); //
//    myList.mostraLista();
//    myList.insereElemento(0, 1); // 0
//    myList.insereElemento(1, 2); // 0 1
//    myList.mostraLista();
//    myList.removeElemento(1); // 1
//    myList.mostraLista();
//    myList.insereElemento(2, 2); // 1 2
//    myList.mostraLista();
//    myList.removeElemento(2); // 1
//    myList.insereElemento(2, 2); // 1 2
//    myList.insereElemento(3, 3); // 1 2 3
//    myList.mostraLista();
//    myList.removeElemento(2); // 1 3
//    myList.mostraLista();
//    myList.insereElemento(2, 2); // 1 2 3
//    myList.insereElemento(4, 4); // 1 2 3 4
//    myList.insereElemento(5, 5); // 1 2 3 4 5
//    myList.mostraLista();
//    myList.removeElemento(2); // 1 3 4 5
//    myList.mostraLista();
//    myList.removeElemento(4); // 1 3 4
//    myList.mostraLista();
//    myList.removeElemento(2); // 1 4
//    myList.mostraLista();
//    myList.removeElemento(2); // 1
//    myList.mostraLista();
//    myList.removeElemento(1); //
//    myList.mostraLista();

    // Testa verifica
//    myList.insereElemento(5, 1); // 5
//    myList.insereElemento(10, 2); // 5 10
//    myList.insereElemento(15, 3); // 5 10 15
//    cout << myList.verificaElemento(5) << endl; // 1
//    cout << myList.verificaElemento(10) << endl; // 1
//    cout << myList.verificaElemento(15) << endl; // 1
//    cout << myList.verificaElemento(20) << endl; // 0
//    myList.removeElemento(1); // 10 15
//    cout << myList.verificaElemento(5) << endl; // 0
//    myList.removeElemento(2); // 10
//    cout << myList.verificaElemento(15) << endl; // 0
    return 0;
}
