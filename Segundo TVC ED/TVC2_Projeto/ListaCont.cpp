#include <iostream>
#include <cstdlib>
#include "ListaCont.h"

using namespace std;

ListaCont::ListaCont(int tam)
{
    max = tam;
    x = new int[tam];
    ultimo = -1;
}

ListaCont::~ListaCont()
{
    delete [] x;
}

void ListaCont::insereUlt(int val)
{
    if(ultimo == (max-1))
    {
        cout << "Vetor cheio!" << endl;
        exit(1);
    }

    ultimo = ultimo + 1;
    x[ultimo] = val;
}

void ListaCont::imprime()
{
    cout << "LISTA CONTIGUA: ";
    if(ultimo == -1) cout << "Vazia!" << endl;
    for(int i = 0; i <= ultimo; i++)
    {
        cout << x[i] << " ";
    }
    cout << endl;
}

// ----------------------------------------------------------------------------
//Q1
int ListaCont::contaValores(int val)
{
    int cont=0;

    for(int i=0; i <= ultimo; i++)
    {
        if(x[i] % 2 != 0 && x[i] > val)
        {
            cont++;
        }
    }

    return cont;
}
//-Q1
// ----------------------------------------------------------------------------
