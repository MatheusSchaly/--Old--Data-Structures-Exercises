#ifndef JOGADOR_H_INCLUDED
#define JOGADOR_H_INCLUDED

#include "Carta.h"
#include "Lista.h"

class Jogador {
    string nome;
    Lista<Carta> mao;
    int pontuacao;
public:
    Jogador(string);
    void addCarta(Carta);
    Lista<Carta>& getMao();
    void addPontuacao(int);
    int getPontuacao();
    string getNome();
};

#endif // JOGADOR_H_INCLUDED
