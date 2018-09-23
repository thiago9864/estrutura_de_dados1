#include <iostream>
#include <cstdlib>
#include "ListaDupla.h"

using namespace std;

ListaDupla::ListaDupla()
{
    cout << "Criando uma ListaDupla" << endl;
    primeiro = NULL;
    ultimo = NULL;
    n = 0;
}

ListaDupla::~ListaDupla()
{
    cout << "Destruindo ListaDupla" << endl;
    NoDuplo *p = primeiro;
    while(p != NULL)
    {
        NoDuplo *t = p->getProx();
        delete p;
        p = t;
    }
}

bool ListaDupla::busca(float val)
{
    NoDuplo *p;
    for(p = primeiro; p != NULL; p = p->getProx())
        if(p->getInfo() == val)
            return true;
    return false;
}

float ListaDupla::get(int k)
{
    NoDuplo *p = primeiro;
    for(int i = 0; i < k; i++)
    {
        if(p == NULL)
            break;
        p = p->getProx();
    }
    if(p == NULL)
    {
        cout << "ERRO: Indice invalido!" << endl;
        exit(1);
    }
    else
        return p->getInfo();
}

void ListaDupla::set(int k, float val)
{
    NoDuplo *p = primeiro;
    for(int i = 0; i < k; i++)
    {
        if(p == NULL)
            break;
        p = p->getProx();
    }
    if(p == NULL)
        cout << "ERRO: Indice invalido!" << endl;
    else
        p->setInfo(val);
}

void ListaDupla::insereInicio(float val)
{
    NoDuplo *p = new NoDuplo();
    p->setInfo(val);
    p->setProx(primeiro);
    p->setAnt(NULL);

    if(n == 0) ultimo = p;
    else primeiro->setAnt(p);

    primeiro = p;
    n = n + 1;
}

void ListaDupla::eliminaInicio()
{
    NoDuplo *p;
    if(primeiro != NULL)
    {
        p = primeiro;
        primeiro = p->getProx();
        delete p;
        n = n - 1;

        if(n == 0) 	ultimo = NULL;
        else primeiro->setAnt(NULL);
    }
    else
        cout << "ERRO: lista vazia" << endl;
}

/** Exercicios **/

/// 1

void ListaDupla::imprimir()
{

    NoDuplo *p = primeiro;

    while(p != NULL)
    {
        cout << p->getInfo() << " ";
        p = p->getProx();
    }

    cout << endl;

}
void ListaDupla::imprimirReverso()
{
    NoDuplo *p = ultimo;

    while(p != NULL)
    {
        cout << p->getInfo() << " ";
        p = p->getAnt();
    }

    cout << endl;
}

void ListaDupla::insereFinal(float val)
{

    //novo nó
    NoDuplo *p = new NoDuplo();
    p->setInfo(val);
    p->setProx(NULL);

    if(primeiro == NULL)
    {
        p->setAnt(NULL);
        ultimo = primeiro = p;
    }
    else
    {
        NoDuplo *a = ultimo;
        p->setAnt(a);

        //no que era o ultimo e virou anterior
        a->setProx(p);

        //ultimo passa a ser o novo nó
        ultimo = p;
    }

    n = n + 1;
}


void ListaDupla::eliminaFinal()
{

    if(n <= 0)
    {
        cout << "Lista Vazia!" << endl;
        exit(2);
    }

    NoDuplo *p = ultimo;
    NoDuplo *a = p->getAnt();

    if(a != NULL)// se a lista tiver mais de um elemento
    {
        a->setProx(NULL);
        ultimo = a;
    }
    else //se a lista só tiver um elemento
    {
        ultimo = NULL;
        primeiro = NULL;
    }

    delete p;

    n = n - 1;

}


ListaDupla* ListaDupla::concatena(ListaDupla *L2)
{

    if(L2 == NULL && primeiro == NULL)
    {
        cout << "Listas vazias!" << endl;
        exit(3);
    }

    ListaDupla *ln = new ListaDupla();
    NoDuplo *p = primeiro;

    //copia a primeira lista
    while(p != NULL)
    {
        ln->insereFinal(p->getInfo());
        p = p->getProx();
    }

    //copia a segunda lista
    if(L2 != NULL)
    {
        p = L2->primeiro;

        while(p != NULL)
        {
            ln->insereFinal(p->getInfo());
            p = p->getProx();
        }
    }

    return ln;

}



ListaDupla* ListaDupla::partir(float x)
{

    if(primeiro == NULL)
    {
        cout << "Lista vazia!" << endl;
        exit(2);
    }

    ListaDupla *ln = new ListaDupla();
    NoDuplo *p = primeiro;
    bool partir = false;

    //copia a primeira lista
    while(p != NULL)
    {
        float val = p->getInfo();

        if(val > x || partir == true)
        {
            partir=true;
            ln->insereFinal(val);
        }

        p = p->getProx();
    }

    return ln;
}


/// 2


void ListaDupla::removeOcorrencias(float val)
{
    if(primeiro == NULL)
    {
        cout << "Lista vazia!" << endl;
        exit(2);
    }

    ListaDupla *ln = new ListaDupla();
    NoDuplo *p;

    for(int i=0; i <= n; i++)
    {
        p = primeiro;

        while(p != NULL)
        {
            float x = p->getInfo();

            if(val == x)
            {
                ///elimina posicao selecionada

                if(p->getAnt() == NULL)
                {
                    //é o primeiro item
                    eliminaInicio();
                }
                else if(p->getProx() == NULL)
                {
                    //é o ultimo item
                    eliminaFinal();
                }
                else
                {

                }

                break;
            }

            p = p->getProx();

        }


    }
}
