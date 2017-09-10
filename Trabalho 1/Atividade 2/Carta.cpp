#include "Carta.h"

ostream& operator<<(ostream &out, Carta &carta)
{
    cout << carta.getValor() << "  " << carta.getNaipe();
    return out;
}

Carta::Carta(){}

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
