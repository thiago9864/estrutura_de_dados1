#include <iostream>
#include <sstream>
#include <cstdlib>
#include <cmath>
#include "No.h"
#include "Arvore.h"
#include "FilaEncad.h"
#include "PilhaEncad.h"

using namespace std;

Arvore::Arvore()
{
    raiz = NULL;
}
Arvore::~Arvore()
{
    cout << "Destrutor" << endl;
    raiz = auxDestrutor(raiz);
}
No* Arvore::auxDestrutor(No *p)
{
    if(p != NULL)
    {
        p->setEsq( auxDestrutor(p->getEsq()) );
        p->setDir( auxDestrutor(p->getDir()) );
        delete p;
        p = NULL;
    }
    return NULL;
}

void Arvore::cria(int val, Arvore *ae, Arvore *ad)
{
    No *novo = new No();

    novo->setInfo(val);

    if(ae != NULL)
    {
        novo->setEsq(ae->raiz);
    }
    else
    {
        novo->setEsq(NULL);
    }

    if(ad != NULL)
    {
        novo->setDir(ad->raiz);
    }
    else
    {
        novo->setDir(NULL);
    }

    raiz = novo;
}
int Arvore::getRaiz()
{
    if(raiz != NULL)
    {
        return raiz->getInfo();
    }
    else
    {
        cout << "Arvore Vazia!" << endl;
        exit(1);
    }
}

void Arvore::anulaRaiz()
{
    raiz = NULL;
}

bool Arvore::vazia()
{
    return (raiz == NULL);
}

/// impressão

void Arvore::imprime()
{
    auxImprime(raiz);
    cout << endl;
}
void Arvore::auxImprime(No *p)
{
    if(p != NULL)
    {
        cout << p->getInfo() << " ";
        auxImprime(p->getEsq());
        auxImprime(p->getDir());
    }
}

///busca

bool Arvore::busca(int n)
{
    return auxBusca(raiz, n);
}
bool Arvore::auxBusca(No *p, int n)
{
    if(p == NULL)
    {
        return false;
    }
    if(p->getInfo() == n)
    {
        return true;
    }

    return auxBusca(p->getEsq(), n) || auxBusca(p->getDir(), n);
}


///Monta Arvore

void Arvore::montaArvore()
{
    if(!vazia())
    {
        cout << "Arvore ja estava montada";
    }
    else
    {
        cout << endl << "Raiz: ";
        raiz = auxMontaArvore();
    }
}
No* Arvore::auxMontaArvore()
{
    string str;
    cin >> str;
    No *n = NULL;

    if(str != "null" && str != "NULL")
    {
        istringstream ent(str);
        int valor;
        ent >> valor;
        n = new No();
        n->setInfo(valor);
        cout << "No a esquerda de (" << valor << "): ";
        n->setEsq(auxMontaArvore());
        cout << "No a direita de (" << valor << "): ";
        n->setDir(auxMontaArvore());
    }

    return n;
}

void Arvore::insere(int valor)
{
    cout << "insere valor (" << valor << ")" << endl;
    raiz = auxInsere(raiz, valor);
}
No* Arvore::auxInsere(No *p, int valor)
{
    if(p == NULL)
    {
        No *n = new No();
        n->setInfo(valor);
        n->setEsq(NULL);
        n->setDir(NULL);
    }
    else
    {
        char d;
        cout << "Digite 'e' para esquerda e 'd' para direita de ("<< p->getInfo()<<"): ";
        cin >> d;
        if(d == 'e' || d == 'E')
        {
            p->setEsq(auxInsere(p->getEsq(), valor));
        }
        else
        {
            p->setDir(auxInsere(p->getDir(), valor));
        }
    }
}

///percurso em largura

void Arvore::imprimeEmLargura()
{
    if(raiz != NULL)
    {

        FilaEncad *f = new FilaEncad();
        f->enfileira(raiz);

        while(!f->vazia())
        {
            No *p = f->getInicio();

            cout << p->getInfo() << " ";
            f->desenfileira();

            if(p->getEsq() != NULL)
            {
                f->enfileira(p->getEsq());
            }
            if(p->getDir() != NULL)
            {
                f->enfileira(p->getDir());
            }
        }

        cout << endl;
        delete f;
    }
}

/// altura da arvore

int Arvore::altura()
{
    return auxAltura(raiz);
}
int Arvore::auxAltura(No *p)
{
    if(p != NULL)
    {
        int ae = auxAltura(p->getEsq());
        int ad = auxAltura(p->getDir());
        if(ae>ad)
        {
            return 1 + ae;
        }
        else
        {
            return 1 + ad;
        }
    }
    else
    {
        return -1;
    }
}

///numero de nos
int Arvore::numeroDeNos()
{
    return auxNumeroNos(raiz);
}

int Arvore::auxNumeroNos(No *p)
{
    if(p == NULL)
    {
        return 0;
    }
    return 1 + auxNumeroNos(p->getEsq()) + auxNumeroNos(p->getDir());
}


///numero de folhas
int Arvore::numeroDeFolhas()
{
    return auxNumeroFolhas(raiz);
}

int Arvore::auxNumeroFolhas(No *p)
{
    if(p == NULL)
    {
        return 0;
    }
    if(p->getEsq() == NULL && p->getDir() == NULL)
    {
        return 1;
    }
    return auxNumeroFolhas(p->getEsq()) + auxNumeroFolhas(p->getDir());
}

///exercicio 3 do slide
bool Arvore::isArvoreCheia()
{
    if(raiz == NULL)
    {
        return false;
    }
    //exercicio 3
    /*
    int alt = altura();
    int numPos = pow(2, alt+1) - 1;
    int cont = numeroDeNos();

    if(numPos == cont){
        return true;
     } else {
        return false;
     }
     */

    //exercicio 5
    int cont = 0;
    int alt = auxIsArvoreCheia(raiz, &cont);
    int numPos = pow(2, alt+1) - 1;
    return (numPos == cont);
}
int Arvore::auxIsArvoreCheia(No *p, int *cont)
{
    if(p != NULL)
    {
        (*cont)++;
        int ae = auxIsArvoreCheia(p->getEsq(), cont);
        int ad = auxIsArvoreCheia(p->getDir(), cont);
        if(ae > ad)
        {
            return 1 + ae;
        }
        else
        {
            return 1 + ad;
        }
    }
    else
    {
        return -1;
    }
}

///excluir folhas

void Arvore::excluirFolhas()
{
    if(raiz == NULL)
    {
        cout << "Arvore Vazia" << endl;
    }
    else
    {
        auxExcluirFolhas(raiz);
    }
}
No* Arvore::auxExcluirFolhas(No *p)
{
    if(p != NULL)
    {
        if(p->getEsq() == NULL && p->getDir() == NULL)
        {
            delete p;
            p = NULL;
        }
        else
        {
            p->setEsq(auxExcluirFolhas(p->getEsq()));
            p->setDir(auxExcluirFolhas(p->getDir()));
        }
    }
    return p;
}

///imprime com pilha

void Arvore::imprimePreOrdemComPilha()
{
    if(raiz == NULL)
    {
        cout << "Arvore vazia" << endl;
    }
    else
    {
        PilhaEncad *p = new PilhaEncad();
        p->empilha(raiz);
        while(!p->vazia())
        {
            No *n = p->desempilha();

            cout << n->getInfo() << " ";

            if(n->getDir() != NULL){
                p->empilha(n->getDir());
            }
            if(n->getEsq() != NULL){
                p->empilha(n->getEsq());
            }
        }
        cout << endl;
        delete p;
    }

}
