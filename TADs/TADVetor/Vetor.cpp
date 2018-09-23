#include <iostream>
#include <cstdlib>
#include "Vetor.h"

using namespace std;

Vetor::Vetor(int tam)
{
    // inicializa a variavel interna n e
    // aloca memoria para o vetor vet
    n = tam;
    vet = new float[n];
    // opcional: inicializar vet com zeros
    for(int i=0; i<n; i++)
        vet[i] = 0.0;
}

Vetor::~Vetor()
{
    // desaloca a memoria alocada no construtor
    delete [] vet;
}

bool Vetor::verifica(int indice)
{
    // verifica validade de indice
    if(indice >= 0 && indice < n)
        return true;
    else
        return false;
}

float Vetor::get(int indice)
{
    if(verifica(indice))
        return vet[indice];
    else
    {
        cout << "Indice invalido: get" << endl;
        exit(1) ; // finaliza o programa
    }
}

void Vetor::set(int indice, float valor)
{
    if(verifica(indice))
        //armazena valor na posicao indice de vet
        vet[indice] = valor;
    else
        cout << "Indice invalido: set" << endl;
}

int Vetor::getTam()
{
    return n;
}
