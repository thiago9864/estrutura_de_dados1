#include <iostream>
#include "Venda.h"

using namespace std;

Venda::Venda(int n)
{
    numItensVendidos = n;
    // aloca o vetor de forma dinamica
    valorItens = new double[numItensVendidos];
    // leitura dos itens
    for(int i=0; i<numItensVendidos; i++)
    {
        //cout << "Digite o valor do item " << i+1 << ": ";
        valorItens[i] = i+1;
    }
}

Venda::~Venda()
{
    cout << "Destrutor" << endl;
    delete [] valorItens;
}
double Venda::calculaTotal()
{
    return valorItens[0];
}
double Venda::itemMaisCaro()
{
    return valorItens[0];
}
