#include <iostream>
#include "PilhaEncad.h"
#include <cstdlib>

using namespace std;

// construtor
PilhaEncad::PilhaEncad()
{
    cout << "Criando PilhaEncad" << endl;
    topo = NULL;
    n=0;
}

// destrutor
PilhaEncad::~PilhaEncad()
{
    cout << "Destruindo PilhaEncad" << endl;
    No* p = topo;
    while(topo != NULL)
    {
        topo = p->getProx();
        delete p;
        p = topo;
    }
}

void PilhaEncad::empilha(float val)
{
    No* p = new No();
    p->setInfo(val);
    p->setProx(topo);
    topo = p;
    n++;
}

float PilhaEncad::desempilha()
{
    No* p;
    if(topo != NULL)
    {
        p = topo;
        topo = p->getProx();
        float val = p->getInfo();
        delete p;
        n--;
        return val;
    }
    else
    {
        cout << "ERRO: Pilha vazia!" << endl;
        exit(1);
    }
}

float PilhaEncad::getTopo()
{
    if(topo != NULL)
        return topo->getInfo();
    else
    {
        cout << "Pilha vazia!" << endl;
        exit(1);
    }
}

bool PilhaEncad::vazia()
{
    if(topo == NULL)
        return(true);
    else
        return(false);
}

void PilhaEncad::imprime(){
    No *p  = topo;

    while(p != NULL) {
        cout << p->getInfo() << " ";
        p = p->getProx();
    }

    cout << endl;

}

int PilhaEncad::tamanho(){
    return n;
}
