//Implemente um programa para simular um ponto de táxi durante 10 horas, cujas características são:
//a) a cada 5 minutos chega um número aleatório de táxis (entre 0 e 3 táxis); b) a cada 3 minutos
//chega um número aleatório de passageiros (entre 0 e 2 passageiros); e c) a cada minuto, se
//houverem táxis e passageiros para serem transportados, um passageiro toma um táxi.
//Considere a classe Fila (estrutura estática) para representar as filas de passageiros e de táxis.
//O programa deve informar o número de táxis utilizados (que fizeram o transporte de passageiros) e o
//tempo médio de espera dos passageiros atendidos.

#include <iostream>
#include <stdlib.h>
#include "Fila.cpp"

using namespace std;

int main()
{
    Fila<int> passageiros, taxis;
    int quantTaxi, quantPassageiros;

    srand(time(NULL));

    for (int i = 0; i <= 10 * 60; i++) {
        if (i % 5 == 0) {
            quantTaxi = rand() % 4;
            for (int j = 0; j < quantTaxi; j++) {
                taxis.insere(j);
            }
        }
        if (i % 3 == 0) {
            quantPassageiros = rand() % 3;
            for (int j = 0; j < quantPassageiros; j++) {
                passageiros.insere(j);
            }
        }

    }

}
//            pessoasQueVieramAssistirOFilme += numeroDePessoas;
//
//            for (j = 1; j <= numeroDePessoas; j++)
//                filaCinema.insere(1);
//        }
//        if (i % 30 == 0)
//            if (!filaCinema.ehVazia())
//                filaCinema.retira();
//    }
//
//    cout << "pessoas que vieram assistir o filme = " <<
//         pessoasQueVieramAssistirOFilme  << endl;
//    cout << "quantidade de pessoas na fila quando o filme comecou = " <<
//         filaCinema.numeroDeElementos();
//
//    return 0;
//}
