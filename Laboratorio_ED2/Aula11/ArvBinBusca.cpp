#include <iostream>
#include <stdlib.h>
#include <cmath>
#include "ArvBinBusca.h"

using namespace std;

ArvBinBusca::ArvBinBusca()
{
    raiz = NULL;
}

bool ArvBinBusca::vazia()
{
    return raiz == NULL;
}

void ArvBinBusca::insere(int x)
{
    raiz = auxInsere(raiz, x);
}

No* ArvBinBusca::auxInsere(No *p, int x)
{
    if(p == NULL)
    {
        p = new No;
        p->setInfo(x);
        p->setEsq(NULL);
        p->setDir(NULL);
    }
    else if(x < p->getInfo())
        p->setEsq(auxInsere(p->getEsq(), x));
    else
        p->setDir(auxInsere(p->getDir(), x));
    return p;
}

bool ArvBinBusca::busca(int x)
{
    return auxBusca(raiz, x);
}

bool ArvBinBusca::auxBusca(No* p, int x)
{
    if(p == NULL)
        return false;
    else if(p->getInfo() == x)
        return true;
    else if(x < p->getInfo())
        return auxBusca(p->getEsq(), x);
    else
        return auxBusca(p->getDir(), x);
}

void ArvBinBusca::remove(int x)
{
    raiz = auxRemove(raiz, x);
}

No* ArvBinBusca::auxRemove(No* p, int x)
{
    if(p == NULL)
        return NULL;
    else if(x < p->getInfo())
        p->setEsq(auxRemove(p->getEsq(), x));
    else if(x > p->getInfo())
        p->setDir(auxRemove(p->getDir(), x));
    else
    {
        if(p->getEsq() == NULL && p->getDir() == NULL)
            p = removeFolha(p);
        else if((p->getEsq() == NULL) || (p->getDir() == NULL))
            p = remove1Filho(p);
        else
        {
            //No *aux = menorSubArvDireita(p);
            No *aux = maiorSubArvEsquerda(p);
            int tmp = aux->getInfo();
            p->setInfo(tmp);
            aux->setInfo(x);
            p->setDir(auxRemove(p->getDir(), x));
        }
    }
    return p;
}

No* ArvBinBusca::removeFolha(No *p)
{
    delete p;
    return NULL;
}

No* ArvBinBusca::remove1Filho(No *p)
{
    No *aux;
    if(p->getEsq() == NULL)
        aux = p->getDir();
    else
        aux = p->getEsq();
    delete p;
    return aux;
}

No* ArvBinBusca::menorSubArvDireita(No *p)
{
    No *aux = p->getDir();
    while(aux->getEsq() != NULL)
        aux = aux->getEsq();
    return aux;
}

///Exercicio 6

No* ArvBinBusca::maiorSubArvEsquerda(No *p)
{
    No *c;
    for(c = p->getEsq(); c->getDir() != NULL; c = c->getDir());
    return c;
}

void ArvBinBusca::imprime()
{
    imprimePorNivel(raiz, 0);
}

void ArvBinBusca::imprimePorNivel(No* p, int nivel)
{
    if (p != NULL)
    {
        cout << "(" << nivel << ")";
        for(int i = 1; i <= nivel; i++)
            cout << "--";
        cout << p->getInfo() << endl;
        imprimePorNivel(p->getEsq(), nivel+1);
        imprimePorNivel(p->getDir(), nivel+1);
    }
}


ArvBinBusca::~ArvBinBusca()
{
    raiz = libera(raiz);
}

No* ArvBinBusca::libera(No *p)
{
    if(p != NULL)
    {
        p->setEsq(libera(p->getEsq()));
        p->setDir(libera(p->getDir()));
        delete p;
        p = NULL;
    }
    return p;
}

float ArvBinBusca::mediaCaminho(int ch)
{
    int soma = 0, cont = 0;
    if(raiz != NULL)
    {
        No *p = raiz;
        while(p->getInfo() != ch && p != NULL)
        {
            cont = cont + 1;
            soma = soma + p->getInfo();
            if(ch > p->getInfo())
                p = p->getDir();
            else
                p = p->getEsq();
        }
        if(p != NULL) // soma contribuicao do no com valor ch
        {
            cont = cont + 1;
            soma = soma + p->getInfo();
        }
    }
    return (float)soma/cont;
}


///Exercicio 1

int ArvBinBusca::maior()
{
    ///auxMaior(raiz); ///recursivo
    No *p = raiz;

    if(p == NULL)
    {
        cout << "Arvore vazia!";
        exit(1);
    }

    while(p->getDir() != NULL)
    {
        p = p->getDir();
    }

    return p->getInfo();
}

int ArvBinBusca::auxMaior(No *p)
{
    if(p != NULL)
    {
        if(p->getDir() == NULL)
        {
            return p->getInfo();
        }
        auxMaior(p->getDir());
    }
}

///Exercicio 2

int ArvBinBusca::menor()
{
    ///auxMenor(raiz); ///recursivo
    No *p = raiz;

    if(p == NULL)
    {
        cout << "Arvore vazia!";
        exit(1);
    }

    while(p->getEsq() != NULL)
    {
        p = p->getEsq();
    }

    return p->getInfo();
}

int ArvBinBusca::auxMenor(No *p)
{
    if(p != NULL)
    {
        if(p->getEsq() == NULL)
        {
            return p->getInfo();
        }
        auxMaior(p->getEsq());
    }
}

///Exercicio 3

void ArvBinBusca::removeMaior()
{
    if(raiz != NULL)
    {
        No *p = raiz, *a = NULL;
        while(p->getDir() != NULL)
        {
            a = p;
            p = p->getDir();
        }

        if(p == raiz)
        {
            if(raiz->getEsq() == NULL && raiz->getDir() == NULL)
            {
                cout << "Deletado a raiz sem filhos (" << raiz->getInfo() << ")" << endl;
                delete raiz;
                raiz = NULL;
            }
            else if(raiz->getEsq() != NULL && raiz->getDir() == NULL)
            {
                cout << "Deletado a raiz com filho a esquerda (" << raiz->getInfo() << ")" << endl;
                No *c = raiz->getEsq();
                delete raiz;
                raiz = c;
            }

        }
        else
        {

            if(p->getEsq() == NULL && p->getDir() == NULL)
            {
                cout << "Deletado no folha (" << p->getInfo() << ")" << endl;
                delete p;
                a->setDir(NULL);
            }
            else if(p->getEsq() != NULL && p->getDir() == NULL)
            {
                cout << "Deletando no com filho a esquerda (" << p->getInfo() << ")" << endl;
                No *c = p->getEsq();
                delete p;
                a->setDir(c);
            }
        }
    }


}


///Exercicio 4

void ArvBinBusca::removeMenor()
{
    if(raiz != NULL)
    {
        No *p = raiz, *a = NULL;
        while(p->getEsq() != NULL)
        {
            a = p;
            p = p->getEsq();
        }

        if(p == raiz)
        {
            if(raiz->getEsq() == NULL && raiz->getDir() == NULL)
            {
                cout << "Deletado a raiz sem filhos (" << raiz->getInfo() << ")" << endl;
                delete raiz;
                raiz = NULL;
            }
            else if(raiz->getEsq() == NULL && raiz->getDir() != NULL)
            {
                cout << "Deletado a raiz com filho a direita (" << raiz->getInfo() << ")" << endl;
                No *c = raiz->getDir();
                delete raiz;
                raiz = c;
            }

        }
        else
        {

            if(p->getEsq() == NULL && p->getDir() == NULL)
            {
                cout << "Deletado no folha (" << p->getInfo() << ")" << endl;
                delete p;
                a->setEsq(NULL);
            }
            else if(p->getEsq() == NULL && p->getDir() != NULL)
            {
                cout << "Deletando no com filho a direita (" << p->getInfo() << ")" << endl;
                No *c = p->getDir();
                delete p;
                a->setEsq(c);
            }
        }
    }
}

///Exercicio 5

int ArvBinBusca::contaParesCaminho(int x)
{
    if(raiz == NULL)
    {
        cout << "Arvore vazia!" << endl;
        exit(1);
    }

    if(raiz->getInfo() == x)
    {
        return 0;
    }

    return auxContaParesCaminho(raiz, x);
}

int ArvBinBusca::auxContaParesCaminho(No *p, int x)
{
    if(p == NULL)
    {
        return 0;
    }

    int par = 0;

    if(p->getInfo() % 2 == 0)
    {
        par = 1;
    }
    else
    {
        par = 0;
    }

    cout << "Visitou o (" << p->getInfo() << "), par: " << par << endl;

    if(x > p->getInfo())
    {
        return par + auxContaParesCaminho(p->getDir(), x);
    }
    else if(x < p->getInfo())
    {
        return par + auxContaParesCaminho(p->getEsq(), x);
    }
    else
    {
        return par;
    }

}





/// exras

void ArvBinBusca::preOrdem()
{
    cout << "Arvore Binaria em Pre-Ordem: ";
    auxPreOrdem(raiz);
}

void ArvBinBusca::auxPreOrdem(No *p)
{
    if (p != NULL)
    {
        cout << p->getInfo() << " ";
        auxPreOrdem(p->getEsq());
        auxPreOrdem(p->getDir());
    }
}

void ArvBinBusca::ordem()
{
    cout << "Arvore Binaria em Ordem: ";
    auxOrdem(raiz);
}

void ArvBinBusca::auxOrdem(No *p)
{
    if (p != NULL)
    {
        auxOrdem(p->getEsq());
        cout << p->getInfo() << " ";
        auxOrdem(p->getDir());
    }
}

int ArvBinBusca::getAltura()
{
    return auxGetAltura(raiz);
}
int ArvBinBusca::auxGetAltura(No *p)
{
    if(p == NULL)
    {
        return -1;
    }

    int ae = auxGetAltura(p->getEsq());
    int ad = auxGetAltura(p->getDir());

    if(ae > ad)
    {
        return ae + 1;
    }
    else
    {
        return ad + 1;
    }
}

int ArvBinBusca::imprimeGrafico()
{
    int alt = getAltura();
    int maxLargNivel = (pow(2, alt) * 4) - 1;

    //cout << "Altura da arvore: " << alt << ", maxLargura: " << maxLargNivel << endl;
    cout << endl;

    for(int i=0; i <= alt; i++)
    {
        auxImprimeGrafico(raiz, 0, i, 0, maxLargNivel-1);
        cout << endl;
    }
}

int ArvBinBusca::auxImprimeGrafico(No* p, int n, int k, int i, int f)
{


        int meio = ((f-i)/2)+i;

        if(n == k)
        {
            //cout << "i: " << i << ", f: " << f << endl;

            for(int j=i; j < meio; j++){
                cout << " ";
            }

            cout << " ";

            if (p != NULL){
                if(p->getInfo() <= 9){
                    cout << "0" << p->getInfo();
                } else {
                    cout << p->getInfo();
                }
            } else {
                cout << "  ";
            }


            for(int j=meio+1; j < f; j++){
                cout << " ";
            }

        }
        if(n < k)
        {
            //if(p->getEsq() != NULL){
                auxImprimeGrafico(p->getEsq(), n+1, k, i, meio-1);
            //}
            //if(p->getEsq() != NULL){
                auxImprimeGrafico(p->getDir(), n+1, k, meio+1, f);
            //}
        }

}
