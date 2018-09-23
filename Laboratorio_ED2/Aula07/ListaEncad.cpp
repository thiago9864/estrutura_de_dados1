#include <iostream>
#include <cstdlib>
#include "ListaEncad.h"

using namespace std;

ListaEncad::ListaEncad()
{
    cout << "Criando objeto ListaEncad" << endl;
    primeiro = NULL;
    ultimo = NULL;
    n = 0;
}

ListaEncad::~ListaEncad()
{
    cout << "Destruindo objeto ListaEncad" << endl;
    No *p = primeiro;
    while(p != NULL)
    {
        No *t = p->getProx();
        delete p;
        p = t;
    }
}

bool ListaEncad::busca(float val)
{
    No *p;
    for(p = primeiro; p != NULL; p = p->getProx())
        if(p->getInfo() == val)
            return true;
    return false;
}

float ListaEncad::get(int k)
{
    No *p = primeiro;
    int i = 0;
    while(i < k && p != NULL)
    {
        i++;
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

No* ListaEncad::getNo(int k)
{
    No *p = primeiro;
    int i = 0;
    while(i < k && p != NULL)
    {
        i++;
        p = p->getProx();
    }
    if(p == NULL)
    {
        cout << "ERRO: Indice invalido!" << endl;
        exit(1);
    }
    else
        return p;
}

void ListaEncad::set(int k, float val)
{
    No *p = primeiro;
    int i = 0;
    while(i < k && p != NULL)
    {
        i++;
        p = p->getProx();
    }
    if(p == NULL)
        cout << "ERRO: Indice invalido!" << endl;
    else
        p->setInfo(val);
}


void ListaEncad::insereInicio(float val)
{
    No* p = new No();
    p->setInfo(val);
    p->setProx(primeiro);

    primeiro = p;

    n++;
    if(n == 1) ultimo = p;
}

void ListaEncad::insereFinal(float val)
{
    No* p = new No();
    p->setInfo(val);
    p->setProx(NULL);

    if(ultimo != NULL) ultimo->setProx(p);
    ultimo = p;

    n++;
    if(n == 1) primeiro = p;
}

void ListaEncad::eliminaInicio()
{
    No* p;
    if(primeiro != NULL)
    {
        p = primeiro;
        primeiro = p->getProx();
        delete p;

        n--;
        if(n == 0) ultimo = NULL;
    }
    else
        cout << "ERRO: lista vazia!" << endl;
}

void ListaEncad::eliminaFinal()
{
    No* p;
    if(ultimo != NULL)
    {
        if(primeiro == ultimo)
        {
            primeiro = NULL;
            p = NULL;
        }
        else
        {
            p = primeiro;
            while(p->getProx() != ultimo)
                p = p->getProx();
            p->setProx(NULL);
        }
        delete ultimo;
        ultimo = p;
        n--;
    }
    else
        cout << "ERRO: lista vazia!" << endl;
}

///exercicio 1

void ListaEncad::imprime()
{
    for(No *p = primeiro; p != NULL; p = p->getProx())
    {
        cout << p->getInfo() << endl;
    }
}

int ListaEncad::numNos()
{
    //int cont = 0;

    ///loop
    //for(No *p = primeiro; p != NULL; p = p->getProx()){
    //  cont++;
    //}

    //return cont;

    ///retorna n
    return n;


}


int ListaEncad::buscaMaior(float val)
{
    int cont = 0;

    if(primeiro == NULL)
    {
        return -1;
    }

    for(No *p = primeiro; p != NULL; p = p->getProx())
    {
        if(p->getInfo() > val)
        {
            return cont;
        }
        cont++;
    }

    return -1;
}

void ListaEncad::limpar()
{

    No *p = primeiro;

    while(p != NULL)
    {
        No *t = p->getProx();
        delete p;
        p = t;
    }

    primeiro = NULL;
    ultimo = NULL;
    n = 0;

}

float ListaEncad::calculaMedia()
{
    float soma = 0;
    int cont = 0;

    if(primeiro == NULL)
    {
        return 0.0;
    }

    for(No *p = primeiro; p != NULL; p = p->getProx())
    {
        soma += p->getInfo();
        cont++;
    }

    return soma / cont;
}


ListaEncad* ListaEncad::concatena(ListaEncad *L2){

    ListaEncad *LR = new ListaEncad();

    //copia lista principal
    for(No *p = primeiro; p != NULL; p = p->getProx())
    {
        LR->insereFinal(p->getInfo());
    }

    //concatena elementos da outra lista
    for(No *p = L2->primeiro; p != NULL; p = p->getProx())
    {
        LR->insereFinal(p->getInfo());
    }

    return LR;
}


ListaEncad* ListaEncad::partir(float x){

    int cont = 0;
    bool cortar = false;

    ListaEncad *LR = new ListaEncad();


    for(No *p = primeiro; p != NULL; p = p->getProx())
    {
        if(p->getInfo() == x){
            cortar = true;
        }
        if(cortar){
            LR->insereFinal(p->getInfo());
        }
    }

    return LR;
}
