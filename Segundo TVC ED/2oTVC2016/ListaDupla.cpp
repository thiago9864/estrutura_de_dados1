#include <iostream>
#include <cstdlib>
#include "ListaDupla.h"

using namespace std;

ListaDupla::ListaDupla()
{
    primeiro = NULL;
    n = 0;
    ultimo = NULL;
}

ListaDupla::~ListaDupla()
{
    NoDuplo *p = primeiro;
    while(p != NULL)
    {
        NoDuplo *t = p->getProx();
        delete p;
        p = t;
    }
}

void ListaDupla::insereInicio(float val)
{
    NoDuplo *novo = new NoDuplo();
    novo->setInfo(val);
    novo->setAnt(NULL);
    novo->setProx(primeiro);

    if(primeiro != NULL)
        primeiro->setAnt(novo);
    else
        ultimo = novo;

    primeiro = novo;
    n++;
}

void ListaDupla::imprime()
{
    cout << "LISTA DUPLA: ";
    if(n == 0) cout << "Vazia!" << endl;

    NoDuplo *p = primeiro;
    while(p != NULL)
    {
        cout << p->getInfo() << " ";
        p = p->getProx();
    }

    cout << endl;
}

// ----------------------------------------------------------------------------
//Q3
ListaDupla* ListaDupla::particiona(float val)
{
    if(primeiro == NULL)
    {
        cout << "Lista vazia!" << endl;
        exit(1);
    }

    ListaDupla *L2 = new ListaDupla();

    NoDuplo *p = primeiro;
    NoDuplo *ant = NULL;

    int n2 = n;

    while(p != NULL && p->getInfo() != val)
    {
        ant = p;
        p = p->getProx();
        n2--;
    }

    if(p == NULL)
    {
        ///chegou no fim da lista - retornar a L1
        return this;
    }

    /// achou um item, avan�a um
    ant = p;
    p = p->getProx();
    n2--;

    ///configura lista 2
    L2->primeiro = p;
    L2->ultimo = ultimo;
    L2->n = n2;

    ///ajusta lista 1
    ant->setProx(NULL);
    ultimo = ant;
    n = n - n2;

    return L2;
}
//-Q3
// ----------------------------------------------------------------------------


void ListaDupla::removeMaior(){

    if(primeiro==NULL){
        cout << "Lista Vazia" << endl;
        exit(1);
    }

    NoDuplo *p = primeiro;

    NoDuplo *proximo = primeiro->getProx();
    NoDuplo *anterior = NULL;
    NoDuplo *item = primeiro;

    int np = primeiro->getInfo();

    while(p != NULL)
    {
        if(p->getInfo() > np){
            np = p->getInfo();

            ///salva ponteiros pro maior
            proximo = p->getProx();
            anterior = p->getAnt();
            item = p;
        }

        p = p->getProx();
    }

    cout << "anterior: " << anterior << endl;
    cout << "proximo: " << proximo << endl;
    cout << "item: " << item << endl;

    ///remove o maior
    if(anterior != NULL){
        anterior->setProx(proximo);
    } else {
        primeiro = proximo;
    }

    if(proximo != NULL){
        proximo->setAnt(anterior);
    } else {
        ultimo = anterior;
    }

    n--;

    delete item;


}
