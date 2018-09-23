#include <iostream>
#include "ListaEncad.h"
#include "No.h"

using namespace std;

ListaEncad::ListaEncad()
{
    primeiro = NULL;
}

ListaEncad::~ListaEncad()
{
    No *p = primeiro;
    while(p != NULL)
    {
        No *t = p->getProx();
        delete p;
        p = t;
    }
}

void ListaEncad::insereInicio(int val)
{
    No *p = new No(); // cria No apontado por p
    p->setInfo(val); // preenche informacao
    p->setProx(primeiro); // preenche proximo
    primeiro = p; // no apontado por p passa
    // a ser o primeiro da lista
}

void ListaEncad::insereFinal(int val)
{
    No *p = new No();
    p->setInfo(val);
    p->setProx(NULL);
    if(primeiro == NULL)
        primeiro = p;
    else
    {
        No *ult = primeiro;
        while(ult->getProx() != NULL)
            ult = ult->getProx();
        ult->setProx(p);
    }
}

void ListaEncad::insereK(int k, int val)
{
    No *ant = primeiro;
    int i = 1;
    while(i < k && ant != NULL)
    {
        i++;
        ant = ant->getProx();
    }
    if(ant == NULL)
        cout << "Indice invalido" << endl;
    else
    {
        No *p = new No();
        p->setInfo(val);
        p->setProx(ant->getProx());
        ant->setProx(p);
    }
}

void ListaEncad::eliminaInicio()
{
    No* p;
    if(primeiro != NULL)
    {
        p = primeiro; // p aponta para o No a ser excluido
        primeiro = p->getProx(); // primeiro passa a apontar p/ atual segundo
        delete p;
    }
    else
        cout << "Lista vazia!" << endl;
}

void ListaEncad::eliminaFinal()
{
    No* p;
    if(primeiro != NULL)
    {
        p = primeiro;
        No *ant;
        while(p->getProx() != NULL)
        {
            ant = p;
            p = p->getProx();
        }
        if(p == primeiro) // ant == NULL
            primeiro = NULL;
        else
            ant->setProx(NULL);
        delete p;
    }
    else
        cout << "Lista vazia!" << endl;
}

bool ListaEncad::busca(int val)
{
    No* p;
    for(p = primeiro; p != NULL; p = p->getProx())
        if(p->getInfo() == val)
            return true;
    return false;
}

void ListaEncad::imprime()
{
    cout << "Lista: ";
    for(No *p = primeiro; p != NULL; p = p->getProx())
        cout << p->getInfo() << " ";
    cout << endl;
}

int ListaEncad::numNos()
{
    int cont = 0;
    No *p;
    for(p = primeiro; p != NULL; p = p->getProx())
        cont++;
    return cont;
}
