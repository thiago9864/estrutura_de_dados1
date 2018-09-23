#include <iostream>
#include <cstdlib>
#include "MatrizLin.h"

using namespace std;

MatrizLin::MatrizLin(int m, int n)
{
    nl = m;
    nc = n;
    vet = new float[nl*nc];
}
MatrizLin::~MatrizLin()
{
    delete [] vet;
}

int MatrizLin::detInd(int i, int j)
{
    if(i >= 0 && i < nl && j >= 0 && j < nc)
        return i*nc + j;
    else
        return -1; // indice invalido
}

float MatrizLin::get(int i, int j)
{
    int k = detInd(i, j);
    if(k != -1)
        return vet[k];
    else
    {
        cout << "Erro: get" << endl;
        exit(1);
    }
}
void MatrizLin::set(int i, int j, float valor)
{
    int k = detInd(i, j);
    if(k != -1)
        vet[k] = valor;
    else
    {
        cout << "Erro: set" << endl;
        exit(1);
    }
}

void MatrizLin::imprime()
{
    for(int i = 0; i < nl; i++)
    {
        for(int j = 0; j < nc; j++)
            cout << get(i,j) << " ";
        cout << endl;
    }
}

int MatrizLin::getLinhas()
{
    return nl;
}

int MatrizLin::getColunas()
{
    return nc;
}

