#include "Carta.h"

Carta::Carta(int valor, int naipe) {
    this->valor = valor;
    this->naipe = naipe;
}

int Carta::getValor() {
    return valor;
}

int Carta::getNaipe()
{
    return naipe;
}
