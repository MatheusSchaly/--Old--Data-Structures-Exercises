#ifndef CARTA_H_INCLUDED
#define CARTA_H_INCLUDED

#include <iostream>

using namespace std;

class Carta {
    int valor;
    int possiveisValores[13] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10}; // deveria ser feito no construtor
public:
    Carta();
    int getValor();
};

#endif // CARTA_H_INCLUDED
