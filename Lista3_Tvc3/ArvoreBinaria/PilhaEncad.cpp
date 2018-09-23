#include <iostream>
#include "PilhaEncad.h"
#include <cstdlib>

using namespace std;

// construtor
PilhaEncad::PilhaEncad()
{
    //cout << "Criando PilhaEncad" << endl;
    topo = NULL;
    n=0;
}

// destrutor
PilhaEncad::~PilhaEncad()
{
    //cout << "Destruindo PilhaEncad" << endl;
    NoFila* p = topo;
    while(topo != NULL)
    {
        topo = p->getProx();
        delete p;
        p = topo;
    }
}

void PilhaEncad::empilha(No* val)
{
    NoFila* p = new NoFila();
    p->setInfo(val);
    p->setProx(topo);
    topo = p;
    n++;
}

No* PilhaEncad::desempilha()
{
    NoFila* p;
    if(topo != NULL)
    {
        p = topo;
        topo = p->getProx();
        No* val = p->getInfo();
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

No* PilhaEncad::getTopo()
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


int PilhaEncad::tamanho(){
    return n;
}
