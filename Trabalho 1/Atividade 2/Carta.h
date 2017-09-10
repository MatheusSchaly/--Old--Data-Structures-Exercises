#ifndef CARTA_H_INCLUDED
#define CARTA_H_INCLUDED

#include <iostream>

using namespace std;

class Carta {
    int valor;
    int naipe;
public:
    Carta(int, int);
    int getValor();
    int getNaipe();
};

#endif // CARTA_H_INCLUDED
