#include <iostream>
#include <cstdlib>
#include "Ponto.h"
#include "ListaContPonto.h"

using namespace std;

ListaContPonto::ListaContPonto(int tam)
{
    cout << "Criando objeto ListaContPonto" << endl;
    max = tam;
    ultimo = -1;
    x = new Ponto[max];
}

ListaContPonto::~ListaContPonto()
{
    cout << "Destruindo objeto ListaContPonto" << endl;
    delete [] x;
}

Ponto *ListaContPonto::get(int k)
{
    if(k >= 0 && k <= ultimo)
        return &x[k];
    else
    {
        cout << "ERRO: Indice invalido!" << endl;
        exit(1);
    }
}

void ListaContPonto::set(int k, float x, float y)
{
    if(k >= 0 && k <= ultimo)
    {
        x[k].setX(x);
        x[k].setY(y);
    }
    else
    {
        cout << "ERRO: Indice invalido!" << endl;
        exit(1);
    }
}

void ListaContPonto::insereK(int k, float x, float y)
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

        x[k].setX(x);
        x[k].setY(y);

        ultimo = ultimo + 1;
    }
    else
    {
        cout << "ERRO: Indice invalido!" << endl;
        exit(1);
    }
}

void ListaContPonto::inserePrim(float x, float y)
{
    if(ultimo == -1)
    {
        //lista vazia. Sera o primeiro no da lista
        ultimo = ultimo + 1;
        x[ultimo].setX(x);
        x[ultimo].setY(y);
    }
    else
        insereK(0, x, y);
}

void ListaContPonto::insereUlt(float x, float y)
{
    if(ultimo == max-1)
    {
        cout << "ERRO: Vetor cheio!" << endl;
        exit(2);
    }
    ultimo = ultimo + 1;

    x[ultimo].setX(x);
    x[ultimo].setY(y);
}

void ListaContPonto::eliminaK(int k)
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

void ListaContPonto::eliminaPrim()
{
    eliminaK(0);
}

void ListaContPonto::eliminaUlt()
{
    if(ultimo == -1)
    {
        cout << "ERRO: Lista vazia!" << endl;
        exit(3);
    }
    ultimo = ultimo - 1;
}

///Exercicio 1

void ListaContPonto::imprime()
{
    cout << "Imprimir a lista" << endl;

    for(int i=0; i <= ultimo; i++)
    {
        cout << "x[" << i << "] x: " << x[i].getX() << ", y: " << x[i].getY() << endl;
    }
}


int ListaContPonto::numNos()
{
    return ultimo + 1;
}
void ListaContPonto::limpar()
{
    ultimo = -1;
}

/// exercicio 2

void ListaContPonto::insereValores(int tam, Ponto vet[])
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
