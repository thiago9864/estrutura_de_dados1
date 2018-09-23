#include <iostream>
#include <cstdlib>
#include "MatrizDiagonal.h"

using namespace std;

MatrizDiagonal::MatrizDiagonal(int dim)
{
    n = dim;
    vet = new float[n];
}

MatrizDiagonal::~MatrizDiagonal()
{
    delete [] vet;
}

bool MatrizDiagonal::verifica(int i, int j)
{
    return i >= 0 && i < n && j >= 0 && j < n;
}

float MatrizDiagonal::get(int i, int j)
{
    if(verifica(i, j))
    {
        if(i == j)
            return vet[i]; //vet[j]
        else
            return 0.0;
    }
    else
    {
        cout << "Erro get: indices invalidos" << endl;
        exit(1);
    }
}

void MatrizDiagonal::set(int i, int j, int val)
{
    if(verifica(i, j))
    {
        if(i == j)
            vet[i] = val;
        else
            cout << "Erro set: descaracterizacao da matriz" << endl;
    }
    else
        cout << "Erro set: indices invalidos" << endl;
}
