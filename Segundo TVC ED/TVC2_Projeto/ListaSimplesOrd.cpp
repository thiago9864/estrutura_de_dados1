#include <iostream>
#include <cstdlib>
#include "ListaSimplesOrd.h"

using namespace std;

ListaSimplesOrd::ListaSimplesOrd()
{
    primeiro = NULL;
}

ListaSimplesOrd::~ListaSimplesOrd()
{
    NoPonto *p = primeiro;
    while(p != NULL)
    {
        NoPonto *t = p->getProx();
        delete p;
        p = t;
    }
}

void ListaSimplesOrd::imprime()
{
    cout << "LISTA ORDENADA: ";
    if(primeiro == NULL)
    {
        cout << "Vazia!" << endl;
        return;
    }

    NoPonto *p = primeiro;
    while(p != NULL)
    {
        cout << "(" << p->getX() << ", " << p->getY() << "), ";
        p = p->getProx();
    }
    cout << endl;
}

// ----------------------------------------------------------------------------
//Q2
void ListaSimplesOrd::inserir(float x, float y)
{
    NoPonto *no = new NoPonto();

    no->setX(x);
    no->setY(y);

    if(primeiro == NULL)
    {
        ///lista vazia
        no->setProx(NULL);
        primeiro = no;
    }
    else
    {
        ///tem item na lista
        NoPonto *p = primeiro;
        NoPonto *ant = NULL;

        while(p != NULL && p->getY() < y)
        {
            ant = p;
            p = p->getProx();
        }

        if(p == NULL)
        {
            ///se estiver inserindo no ultimo
            no->setProx(NULL);
        }
        else
        {
            ///inserindo no meio
            no->setProx(p);
        }

        if(ant == NULL)
        {
            primeiro = no;
        }
        else
        {
            ant->setProx(no);
        }

    }

}
//-Q2
// ----------------------------------------------------------------------------
