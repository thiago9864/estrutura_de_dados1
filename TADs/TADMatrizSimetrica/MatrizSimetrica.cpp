#include <iostream>
#include <cstdlib>
#include "MatrizSimetrica.h"

using namespace std;

MatrizSimetrica::MatrizSimetrica(int dim)
{
    n = dim;
    vet = new float[n*(n+1)/2];
}

MatrizSimetrica::~MatrizSimetrica()
{
    delete [] vet;
}

bool MatrizSimetrica::verifica(int i, int j)
{
    return i >= 0 && i < n && j >= 0 && j < n;
}

float MatrizSimetrica::get(int i, int j)
{
    if(verifica(i, j))
    {
        if(i >= j)
        {
            int k = i*(i+1)/2 + j;
            return vet[k];
        }
        else
        {
            int k = j*(j+1)/2 + i;
            return vet[k];
        }
    }
    else
    {
        cout << "Erro get: indices invalidos" << endl;
        exit(1);
    }
}

void MatrizSimetrica::set(int i, int j, int val)
{
    if(verifica(i, j))
    {
        if(i >= j)
        {
            int k = i*(i+1)/2 + j;
            vet[k] = val;
        }
        else
        {
            int k = j*(j+1)/2 + i;
            vet[k] = val;
        }
    }
    else
        cout << "Erro set: indices invalidos" << endl;
}
