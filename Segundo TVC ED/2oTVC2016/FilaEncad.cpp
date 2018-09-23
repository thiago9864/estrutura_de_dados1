#include <iostream>
#include <cstdlib>
#include "FilaEncad.h"

using namespace std;

FilaEncad::FilaEncad()
{
    c = NULL;
    f = NULL;
}

FilaEncad::~FilaEncad ()
{
    No *p = c;
    while(c != NULL)
    {
        c = p->getProx();
        delete p;
        p = c;
    }
}

bool FilaEncad::vazia()
{
// verifica se fila esta vazia
    if(c == NULL)
        return true;
    else
        return false;
}

float FilaEncad::getInicio()
{
    if(c != NULL)
        return c->getInfo();
    else
    {
        cout << "ERRO: Fila vazia!" << endl;
        exit(1);
    }
}

void FilaEncad::enfileira(float val)
{
    No *p = new No();
    p->setInfo(val);
    p->setProx(NULL);
    if(f == NULL)
        c = p; // insere o primeiro No
    else
        f->setProx(p); // liga No p na fila
    f = p; // No p passa a ser o ultimo
}


float FilaEncad::desenfileira()
{
    No *p;
    if(c != NULL)
    {
        p = c;
        c = p->getProx();
        if(c == NULL)
            f = NULL; // a fila esvaziou
        float val = p->getInfo();
        delete p; // exclui o No do inicio
        return val;
    }
    cout << "ERRO: Fila vazia" << endl;
    exit(1);
}

void FilaEncad::imprime()
{
    No *p = c;
    if(c == NULL)
    {
        cout << "Fila vazia!" << endl;
    }
    else
    {
        while(p != NULL)
        {
            cout << p->getInfo() << " ";
            p = p->getProx();
        }
        cout << endl;
    }
}


void FilaEncad::concatenaInicio(FilaEncad *fe)
{
    if(fe == NULL && fe->vazia())
    {
        cout << "Lista recebida vazia" << endl;
    }
    else
    {
        No *c1 = c;

        ///liga as duas listas
        c = fe->c;
        fe->f->setProx(c1);

        ///limpa lista fe
        fe->c = NULL;
        fe->f = NULL;
    }
}
