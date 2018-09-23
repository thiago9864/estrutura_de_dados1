#include <iostream>
#include <cstdlib>
#include "MatrizTriInf.h"

using namespace std;

MatrizTriInf::MatrizTriInf(int dim)
{
    n = dim;
    vet = new float[n*(n+1)/2];
}

MatrizTriInf::~MatrizTriInf()
{
    delete [] vet;
}

bool MatrizTriInf::verifica(int i, int j)
{
    return i >= 0 && i < n && j >= 0 && j < n;
}

float MatrizTriInf::get(int i, int j)
{
    if(verifica(i, j))
    {
        if(i >= j)
        {
            int k = i*(i+1)/2 + j;
            return vet[k];
        }
        else
            return 0.0;
    }
    else
    {
        cout << "Erro get: indices invalidos" << endl;
        exit(1);
    }
}

void MatrizTriInf::set(int i, int j, int val)
{
    if(verifica(i, j))
    {
        if(i >= j)
        {
            int k = i*(i+1)/2 + j;
            vet[k] = val;
        }
        else
            cout << "Erro set: descaracterizacao da matriz" << endl;
    }
    else
        cout << "Erro set: indices invalidos" << endl;
}
