#include <cstdlib>
#include "Carta.h"

Carta::Carta() {
    // possiveisValores[13] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10};
    int randomInt = rand() % 13;
    valor = possiveisValores[randomInt];
}

int Carta::getValor() {
    return valor;
}
