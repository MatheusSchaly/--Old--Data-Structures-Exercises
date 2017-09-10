#ifndef CARTA_H_INCLUDED
#define CARTA_H_INCLUDED

#include <iostream>

using namespace std;

class Carta {
    int valor;
    int naipe;
public:
    Carta();
    Carta(int, int);
    int getValor();
    int getNaipe();
    friend ostream& operator<<(ostream&,Carta&);
};

#endif // CARTA_H_INCLUDED
