#include <iostream>
#include <cstdlib>
#include "ListaOrdCont.h"

using namespace std;

ListaOrdCont::ListaOrdCont(int tam)
{
    max = tam;
    ultimo = -1;
    x = new float[max];
}

ListaOrdCont::~ListaOrdCont()
{
    delete [] x;
}

int ListaOrdCont::buscaBinaria(float val)///complexidade O(log n)
{
    int esq = 0;
    int dir = ultimo;
    while(esq <= dir)
    {
        int meio = (esq + dir) / 2;
        if(val > x[meio])
            esq = meio + 1;
        else if (val < x[meio])
            dir = meio - 1;
        else
            return meio;
    }
    return -1;
}

float ListaOrdCont::get(float val)///complexidade O(log n)
{
    int k = buscaBinaria(val);
    if(k >= 0 && k <= ultimo)
        return k;
    else
    {
        cout << "Indice invalido!" << endl;
        exit(1);
    }
}

float ListaOrdCont::getPos(int pos)
{
    int k = pos;
    if(k >= 0 && k <= ultimo)
        return x[k];
    else
    {
        cout << "Indice invalido!" << endl;
        exit(1);
    }
}

void ListaOrdCont::insere(float val)///complexidade: O(n)
{
    int i;
    if(ultimo == (max-1))
    {
        cout << "Vetor Cheio!" << endl;
        exit(3);
    }
    for(i = ultimo; i >= 0 && x[i] >= val; i--)
    {
        x[i+1] = x[i];
    }
    x[i+1] = val;
    ultimo = ultimo + 1;
}

void ListaOrdCont::elimina(float val)
{
    /// busca indice
    int k = get(val);
    if (k >= 0 && k <= ultimo)
    {
        /// copia da dir. para esq.
        for(int i = k; i <= ultimo-1; i++)
            x[i] = x[i+1];
        ultimo = ultimo - 1;
    }
}

void ListaOrdCont::imprime(){
    if(ultimo == -1)
    {
        cout << "Vetor Vazio!" << endl;
        exit(4);
    }

    for (int k = 0; k <= ultimo; k++)
    {
        cout << x[k] << " ";
    }

    cout << endl;
}
