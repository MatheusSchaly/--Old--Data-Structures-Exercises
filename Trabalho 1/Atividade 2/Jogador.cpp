#include "Jogador.h"

void Jogador::addCarta() {
    Carta novaCarta;
//    listaCarta.insereElemento(novaCarta, getQuantCartas());
    addQuantCartas();
}

Lista Jogador::getListaCarta() {
//    return listaCarta;
}

int Jogador::getQuantCartas() {
    return quantCartas;
}

void Jogador::addQuantCartas() {
    quantCartas++;
}
