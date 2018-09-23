#include <iostream>
#include "Jogador.h"
#include "Equipe.h"

using namespace std;

// ----------------------------------------------------------------------------
//Q3
Equipe::Equipe(int tam)
{
    // Implemente aqui sua solucao!
    n = tam;
    jogadores = new Jogador[n];
}

Equipe::~Equipe()
{
    // Implemente aqui sua solucao!
    delete [] jogadores;
}

void Equipe::imprimeEquipe()
{
    // Implemente aqui sua solucao!
    int numPontosEq = 0;
    for(int i=0; i < n; i++)
    {
        cout << "Jogador " << jogadores[i].getNumero() << " -> ";
        if(jogadores[i].getPontos() == 0)
        {
            cout << "Nenhum ponto." << endl;
        }
        else if(jogadores[i].getPontos() == 1)
        {
            cout << "1 ponto." << endl;
        }
        else
        {
            cout << jogadores[i].getPontos() << " pontos." << endl;
        }
        numPontosEq += jogadores[i].getPontos();
    }
    cout << "Total de pontos da equipe: " << numPontosEq << endl << endl;
}

int Equipe::maiorPontuador()
{
    // Implemente aqui sua solucao!
    // Se necessario remova o codigo abaixo.
    int a=jogadores[0].getPontos();
    int indMaiorPontuador=0;

    for(int i=0; i < n; i++)
    {
        if(jogadores[i].getPontos() > a)
        {
            a = jogadores[i].getPontos();
            indMaiorPontuador = i;
        }
    }
    return jogadores[indMaiorPontuador].getNumero();
}
//-Q3
// ----------------------------------------------------------------------------
