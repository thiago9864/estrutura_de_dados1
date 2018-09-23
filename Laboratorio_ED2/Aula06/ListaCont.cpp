#include <iostream>
#include <cstdlib>
#include "Ponto.h"
#include "ListaCont.h"

using namespace std;

ListaCont::ListaCont(int tam)
{
    cout << "Criando objeto ListaCont" << endl;
    max = tam;
    ultimo = -1;
    x = new float[max];
}

ListaCont::~ListaCont()
{
    cout << "Destruindo objeto ListaCont" << endl;
    delete [] x;
}

float ListaCont::get(int k)
{
    if(k >= 0 && k <= ultimo)
        return x[k];
    else
    {
        cout << "ERRO: Indice invalido!" << endl;
        exit(1);
    }
}

void ListaCont::set(int k, float val)
{
    if(k >= 0 && k <= ultimo)
        x[k] = val;
    else
    {
        cout << "ERRO: Indice invalido!" << endl;
        exit(1);
    }
}

void ListaCont::insereK(int k, float val)
{
    if(ultimo == max-1)
    {
        cout << "ERRO: Vetor cheio!" << endl;
        exit(2);
    }
    if(k >= 0 && k <= ultimo)
    {
        for(int i = ultimo; i >= k; i--)
            x[i+1] = x[i];
        x[k] = val;
        ultimo = ultimo + 1;
    }
    else
    {
        cout << "ERRO: Indice invalido!" << endl;
        exit(1);
    }
}

void ListaCont::inserePrim(float val)
{
    if(ultimo == -1)
    {
        //lista vazia. Sera o primeiro no da lista
        ultimo = ultimo + 1;
        x[ultimo] = val;
    }
    else
        insereK(0, val);
}

void ListaCont::insereUlt(float val)
{
    if(ultimo == max-1)
    {
        cout << "ERRO: Vetor cheio!" << endl;
        exit(2);
    }
    ultimo = ultimo + 1;
    x[ultimo] = val;
}

void ListaCont::eliminaK(int k)
{
    if(k >= 0 && k <= ultimo)
    {
        for(int i = k; i <= ultimo-1; i++)
            x[i] = x[i+1];
        ultimo = ultimo - 1;
    }
    else
    {
        cout << "ERRO: Indice invalido!" << endl;
        exit(1);
    }
}

void ListaCont::eliminaPrim()
{
    eliminaK(0);
}

void ListaCont::eliminaUlt()
{
    if(ultimo == -1)
    {
        cout << "ERRO: Lista vazia!" << endl;
        exit(3);
    }
    ultimo = ultimo - 1;
}

///Exercicio 1

void ListaCont::imprime()
{
    cout << "Imprimir a lista" << endl;

    for(int i=0; i <= ultimo; i++)
    {
        cout << "x[" << i << "]: " << x[i] << endl;
    }
}

int ListaCont::buscaMaior(float val)
{

    if(ultimo == -1)
    {
        cout << "ERRO: Lista vazia!" << endl;
        exit(3);
    }

    int indice = -1;

    for(int i=0; i <= ultimo; i++)
    {
        if(x[i] > val)
        {
            indice = i;
            break;
        }
    }

    return indice;
}

int ListaCont::numNos()
{
    return ultimo + 1;
}
void ListaCont::limpar()
{
    ultimo = -1;
}

/// exercicio 2

void ListaCont::insereValores(int tam, float vet[])
{
    if(ultimo < max && (ultimo + tam) < max)
    {
        ///tem espaço
        for(int i=0; i < tam; i++)
        {
            x[++ultimo] = vet[i];
        }
    }
    else
    {
        cout << "ERRO: Vetor cheio!" << endl;
        exit(2);
    }
}
