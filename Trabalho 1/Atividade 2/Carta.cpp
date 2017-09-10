#include "Carta.h"

Carta::Carta () {}

Carta::Carta(int valor, string naipe) {
    this -> valor = valor;
    this -> naipe = naipe;
}

int Carta::getValor() {
    return valor;
}

string Carta::getNaipe() {
    return naipe;
}


bool operator == (Carta &carta1, Carta &carta2) {
    return carta1.getValor() == carta2.getValor();
}

ostream& operator << (ostream &out, Carta &carta) {
    cout << "Naipe: " << carta.getNaipe() << " Valor: " << carta.getValor() << endl;
    return out;
}
