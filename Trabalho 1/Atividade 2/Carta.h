#ifndef CARTA_H_INCLUDED
#define CARTA_H_INCLUDED

#include <iostream>

using namespace std;

class Carta {
    int valor;
    string naipe;
public:
    Carta();
    Carta(int valor, string naipe);
    int getValor();
    string getNaipe();
    friend bool operator == (Carta &carta1, Carta &carta2);
    friend ostream& operator << (ostream &out, Carta &carta);
};

#endif // CARTA_H_INCLUDED
