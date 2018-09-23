#include <iostream>
#include "FilaEncad.h"
#include <cstdlib>

using namespace std;

FilaEncad::FilaEncad()
{
    cout << "Criando FilaEncad" << endl;
    ini = NULL;
    fim = NULL;
}

FilaEncad::~FilaEncad()
{
    cout << "Destruindo FilaEncad" << endl;
    NoFila* p = ini;
    while(ini != NULL)
    {
        ini = p->getProx();
        delete p;
        p = ini;
    }
    fim = NULL;
}

bool FilaEncad::vazia()
{
    if(ini == NULL)
        return true;
    else
        return false;
}

void FilaEncad::enfileira(No* val)
{
    NoFila* p = new NoFila();
    p->setInfo(val);
    p->setProx(NULL);
    if(fim == NULL)
        ini = p;
    else
        fim->setProx(p);
    fim = p;
}

No* FilaEncad::getInicio()
{
    if(ini != NULL)
        return ini->getInfo();
    else
    {
        cout << "Fila vazia!" << endl;
        exit(1);
    }
}

No* FilaEncad::desenfileira()
{
    NoFila* p;
    if(ini != NULL)
    {
        p = ini;
        ini = p->getProx();
        if(ini == NULL)
            fim = NULL;
        No* val = p->getInfo();
        delete p;
        return val;
    }
    else
    {
        cout << "ERRO: Fila Vazia!" << endl;
        exit(1);
    }
}
