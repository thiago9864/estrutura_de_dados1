#include <iostream>
#include <cstdlib>
#include "ListaOrdEncad.h"
#include "No.h"

using namespace std;

ListaOrdEncad::ListaOrdEncad()
{
    primeiro = NULL;
}

ListaOrdEncad::~ListaOrdEncad()
{
    No *p = primeiro;
    while(p != NULL)
    {
        No *t = p->getProx();
        delete p;
        p = t;
    }
}


void ListaOrdEncad::insere(int val)
{
    No *p = new No();
    No *ant = NULL, *atual = primeiro;
    p->setInfo(val);
    while(atual != NULL && val >= atual->getInfo())
    {
        ant = atual;
        atual = atual->getProx();
    }
    if(ant == NULL)
    {
        p->setProx(primeiro);
        primeiro = p;
    }
    else
    {
        ant->setProx(p);
        p->setProx(atual);
    }
}


bool ListaOrdEncad::busca(int val){
    No *p = primeiro;

    if(p == NULL){
        cout << "Lista Vazia!" << endl;
        exit(3);
    } else {
        while(p != NULL && p->getInfo() != val){
            p = p->getProx();
        }
        if(p == NULL){
            return false;
        }
        return true;
    }
}
void ListaOrdEncad::imprime(){
    No *p = primeiro;

    if(p == NULL){
        cout << "Lista Vazia!" << endl;
    } else {
        while(p != NULL){
            cout << p->getInfo() << " ";
            p = p->getProx();
        }
        cout << endl;
    }
}
