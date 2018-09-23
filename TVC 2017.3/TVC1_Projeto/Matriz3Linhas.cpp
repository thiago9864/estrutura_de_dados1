#include "Matriz3Linhas.h"
#include <iostream>
#include <cstdlib>
using namespace std;

//Q4
Matriz3Linhas::Matriz3Linhas(int mm, int nn)
{
    // Implemente aqui sua solucao!
    m = mm;
    n = nn;

    vet = new float[n * 3];
}

Matriz3Linhas::~Matriz3Linhas()
{
    // Implemente aqui sua solucao!
    delete [] vet;
}

int Matriz3Linhas::detInd(int i, int j)
{
    // Implemente aqui sua solucao!
    // Se necessario remova o codigo abaixo.

    if(i >= 0 && i < m && j >= 0 && j < n)
    {
        //indice valido
        if(i == 0 || i == m-1 || i == m / 2)
        {
            //valores nao nulos

            if(i == 0) //PL
            {
                return j;
            }
            if(i == m / 2) //LC
            {
                return n + j;
            }
            if(i == m-1) //UL
            {
                return (2 * n) + j;
            }

        }
        else
        {
            //valores nulos
            return -2;
        }
    }
    else
    {
        //indice invalido!
        return -1;
    }

}

float Matriz3Linhas::get(int i, int j)
{
    // Implemente aqui sua solucao!
    // Se necessario remova o codigo abaixo.
    int k = detInd(i, j);

    if(k == -1)
    {
        cout << "Indice invalido!" << endl;
    }
    else if (k == -2)
    {
        return 0.0;
    }
    else
    {
        return vet[k];
    }
}

void Matriz3Linhas::set(int i, int j, float val)
{
    // Implemente aqui sua solucao!
    int k = detInd(i, j);

    if(k == -1)
    {
        cout << "Indice invalido!" << endl;
    }
    else if (k == -2)
    {
        cout << "Descaracterizacao da Matriz!" << endl;
    }
    else
    {
        vet[k] = val;
    }
}
//-Q4
