#include <iostream>
#include <cstdlib>
#include "MatrizTriDiagonal.h"

using namespace std;

MatrizTriDiagonal::MatrizTriDiagonal(int dim)
{
    n = dim;
    vet = new float[3*n-2];
}

MatrizTriDiagonal::~MatrizTriDiagonal()
{
    delete [] vet;
}

bool MatrizTriDiagonal::verifica(int i, int j)
{
    return i >= 0 && i < n && j >= 0 && j < n;
}

float MatrizTriDiagonal::get(int i, int j)
{
    if(verifica(i, j))
    {
        if(i == j)
            return vet[i];
        else if(i-j == -1)
            return vet[n+i];
        else if(i-j == 1)
            return vet[2*n-1+j];
        else
            return 0.0;
    }
    else
    {
        cout << "Erro get: indices invalidos" << endl;
        exit(1);
    }
}

void MatrizTriDiagonal::set(int i, int j, int val)
{
    if(verifica(i, j))
    {
        if(i == j)
            vet[i] = val;
        else if(i-j == -1)
            vet[n+i] = val;
        else if(i-j == 1)
            vet[2*n-1+j] = val;
        else
            cout << "Erro set: descaracterizacao da matriz" << endl;
    }
    else
        cout << "Erro set: indices invalidos" << endl;
}
