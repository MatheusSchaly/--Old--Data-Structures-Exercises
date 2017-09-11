#include "Jogador.h"

Jogador::Jogador(string nome)
{
    this->nome = nome;
    this->pontuacao = 0;
}

void Jogador::addCarta(Carta carta)
{
    mao.insereElemento(carta,mao.getTamanho()+1);
    addPontuacao(carta.getValor());
}

Lista<Carta>& Jogador::getMao() {
    return mao;
}

void Jogador::addPontuacao(int valor)
{
    if (valor>10)
    {
        pontuacao += 10;
    }
    else
    {
        if (valor == 1)
        {
            pontuacao += 11;
        }
        else
        {
            pontuacao += valor;
        }
    }

    if (pontuacao>21)
    {
        for (int i=1;i<getMao().getTamanho()+1;i++)
        {
            if (mao.getElemento(i).getValor() == 1)
            {
                pontuacao -= 10;
                break;
            }
        }
    }
}

int Jogador::getPontuacao()
{
    return pontuacao;
}

string Jogador::getNome()
{
    return nome;
}
