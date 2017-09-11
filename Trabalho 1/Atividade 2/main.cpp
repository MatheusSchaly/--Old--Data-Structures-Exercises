#include "Jogador.h"
#include "Lista.h"
#include "Nodo.h"
#include "Carta.h"
#include <stdlib.h>

void criaMonte (Lista<Carta> &monte) {
    string naipes[4] = {"paus", "espadas", "copas", "ouros"};
    for (int i = 0; i < 4; i++) {
        for (int j = 1; j < 14; j++) {
            Carta carta(j, naipes[i]);
            monte.insereElemento(carta, 1);
        }
    }
}

void mostraMesa (Jogador usuario, Jogador ia) {
    cout << "\nCartas dos jogadores:\n";
    cout << usuario.getNome() << ":" << endl;
    usuario.mostraMao();
    cout << endl << ia.getNome() << ":"<< endl;
    Carta carta = ia.getMao().getElemento(1);
    cout << carta;
}

int leMenu () {
    int opcao;
    do {
        cout << "\nSelecione:\n";
        cout << "1 - Hit\n";
        cout << "2 - Stay\n";
        cin >> opcao;
    } while (opcao < 1 || opcao > 2);
    return opcao;
}

Jogador* checaVencedor (Jogador usuario, Jogador ia) {
    if (usuario.getPontuacao() > 21) {
        return &ia;
    }
    if (ia.getPontuacao() > 0) {
        if (usuario > ia) {
            return &usuario;
        }
        return &ia;
    }
    return NULL;
}

int main() {

    Lista<Carta> monte;
    criaMonte(monte);

    string nomeJogador;
    cout << "Entre seu nome: ";

    cin >> nomeJogador;
    Jogador usuario(nomeJogador);
    Jogador ia("Ned");
    Lista<Carta> cartasInicio;
    int randomInt;
    Carta carta;

    for (int i = 0; i < 4; i+= 2) {
        for (int j = i; j < i + 2; j++) {
            randomInt = rand() % (52 - j) + 1; // 1 a (52 -j)
            carta = monte.getElemento(randomInt);
            cartasInicio.insereElemento(carta, 1);
            monte.removeElemento(randomInt);
        }
    }

    for (int i = 0; i < 2; i++) {
        usuario.addCarta(cartasInicio.getElemento(i));
    }

    for (int i = 2; i < 4; i++) {
        ia.addCarta(cartasInicio.getElemento(i));
    }

    int opcao, randomAux = -1;
    Jogador *vencedor;

    do {
        mostraMesa(usuario, ia);
        opcao = leMenu();
        cout << randomAux;
        if (opcao == 1) {
            randomAux++;
            randomInt = rand() % (48 - randomAux) + 1; // 1 a (48 - randomAux)
            carta = monte.getElemento(randomInt);
            usuario.addCarta(carta);
            monte.removeElemento(randomInt);
        }
        else {
           do {
                randomInt = rand() % (48 - randomAux) + 1; // 1 a (48 - randomAux)
                carta = monte.getElemento(randomInt);
                ia.addCarta(carta);
                monte.removeElemento(randomInt);
                randomAux++;
            } while (ia.getPontuacao() < 17);
        }
        vencedor = checaVencedor(usuario, ia);
    } while(vencedor == NULL);

    cout << vencedor -> getNome() << "venceu com " << vencedor -> getPontuacao() << " pontos!" endl;

}

    /*Jogador player("Mauricio");
    Carta carta1(1,"Ouro"),carta2(2,"Espadas"),carta3(3,"Copas"), carta4(5,"Paus");
    cout << "Jogador: " << player.getNome() << endl;
    player.addCarta(carta1);
    player.addCarta(carta2);
    player.addCarta(carta3);
    player.addCarta(carta4);
    player.getMao().mostraLista();
    cout << endl << player.getPontuacao();*/

    /*Lista<Carta> mylist;
    Carta carta1(10,"Paus"),carta2(11,"Copas"),carta3(12,"Espadas");
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
