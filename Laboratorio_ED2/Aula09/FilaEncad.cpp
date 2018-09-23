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
    No* p = ini;
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

void FilaEncad::enfileira(float val)
{
    No* p = new No();
    p->setInfo(val);
    p->setProx(NULL);
    if(fim == NULL)
        ini = p;
    else
        fim->setProx(p);
    fim = p;
}

float FilaEncad::getInicio()
{
    if(ini != NULL)
        return ini->getInfo();
    else
    {
        cout << "Fila vazia!" << endl;
        exit(1);
    }
}

float FilaEncad::desenfileira()
{
    No* p;
    if(ini != NULL)
    {
        p = ini;
        ini = p->getProx();
        if(ini == NULL)
            fim = NULL;
        float val = p->getInfo();
        delete p;
        return val;
    }
    else
    {
        cout << "ERRO: Fila Vazia!" << endl;
        exit(1);
    }
}

void FilaEncad::imprime(){
    No *p = ini;

    while(p != NULL){

        cout << p->getInfo() << " ";

        p = p->getProx();
    }
    cout << endl;
}

