#include <iostream>
#include <cstdlib>
#include "Matriz2D.h"

using namespace std;

Matriz2D::Matriz2D(int nnl, int nnc)
{
    nl = nnl;
    nc = nnc;
    // aloca o vetor de vetores
    mat = new float*[nl];
    // aloca cada um dos vetores (cada linha)
    for(int i = 0; i < nl; i++)
        mat[i] = new float[nc];
}

Matriz2D::~Matriz2D()
{
    // desaloca a memoria alocada no construtor
    for(int i = 0; i < nl; i++)
        delete [] mat[i];
    delete [] mat;
}

bool Matriz2D::verifica(int i, int j)
{
    if(i >= 0 && i < nl && j >= 0 && j < nc)
        return true;
    else
        return false; // indice invalido
};

float Matriz2D::get(int i, int j)
{
    if ( verifica(i, j) )
        return mat[i][j];
    else
    {
        cout << "Erro: indice invalido" << endl;
        exit(1);
    }
}
void Matriz2D::set(int i, int j, float valor)
{
    if ( verifica(i, j) )
        mat[i][j] = valor;
    else
    {
        cout << "Erro: indice invalido" << endl;
        exit(1);
    }
}

void Matriz2D::imprime()
{
    for(int i = 0; i < nl; i++)
    {
        for(int j = 0; j < nc; j++)
            cout << get(i,j) << " ";
        cout << endl;
    }
}
