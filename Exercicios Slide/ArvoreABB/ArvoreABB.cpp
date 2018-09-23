#include <iostream>
#include <cmath>
#include "No.h"
#include "ArvoreABB.h"
#include "PilhaEncad.h"

using namespace std;

ArvoreABB::ArvoreABB()
{
    raiz = NULL;
}
ArvoreABB::~ArvoreABB()
{
    raiz = auxDestrutor(raiz);
}
No* ArvoreABB::auxDestrutor(No *p)
{
    if(p != NULL)
    {
        p->setEsq(auxDestrutor(p->getEsq()));
        p->setDir(auxDestrutor(p->getDir()));
        delete p;
        p = NULL;
    }
    return p;
}


int ArvoreABB::getRaiz()
{
    if(raiz != NULL)
    {
        return raiz->getInfo();
    }
    else
    {
        cout << "Arvore Vazia";
    }
}
bool ArvoreABB::vazia()
{
    return (raiz == NULL);
}
bool ArvoreABB::busca(int x)
{
    No *p = raiz;
    while(p!=NULL)
    {
        if(p->getInfo() == x)
        {
            return true;
        }
        if(x < p->getInfo())
        {
            p = p->getEsq();
        }
        else
        {
            p = p->getDir();
        }
    }
    return false;
}
void ArvoreABB::inserir(int x)
{
    No *n = new No();
    n->setInfo(x);
    n->setEsq(NULL);
    n->setDir(NULL);

    No *p = raiz;

    if(p == NULL)
    {
        raiz = n;
    }
    else
    {
        while(p != NULL)
        {
            if(x < p->getInfo())
            {
                if(p->getEsq() != NULL)
                {
                    p = p->getEsq();
                }
                else
                {
                    p->setEsq(n);
                    break;
                }
            }
            else
            {
                if(p->getDir() != NULL)
                {
                    p = p->getDir();
                }
                else
                {
                    p->setDir(n);
                    break;
                }
            }
        }
    }
}
void ArvoreABB::remover(int x)
{
    if(raiz == NULL)
    {
        cout << "Arvore vazia!" << endl;
    }
    else
    {
        raiz = auxRemove(raiz, x);
    }
}
No* ArvoreABB::auxRemove(No *p, int x)
{
    if(p == NULL)
    {
        return NULL;
    }
    else if(x < p->getInfo())
    {
        //cout <<"esq-> ";
        p->setEsq(auxRemove(p->getEsq(), x));
        //cout <<"esq<- ";
    }
    else if(x > p->getInfo())
    {
        //cout <<"dir-> ";
        p->setDir(auxRemove(p->getDir(), x));
        //cout <<"dir<- ";
    }
    else
    {
        //cout << "Remover (" << p->getInfo() << ")" << endl;
        //achou pra remover
        if(p->getEsq() == NULL && p->getDir() == NULL)
        {
            //cout << "Remove folha" << endl;
            p = removeFolha(p);
            //cout << "Removeu"<<endl;
        }
        else if(p != NULL && p->getEsq() != NULL && p->getDir() != NULL)
        {
            //cout << "remove com 2 filhos" << endl;
            ///menor subarvore dir
            No *aux = p->getDir();
            while(aux->getEsq() != NULL)
            {
                aux = aux->getEsq();
            }
            //cout << "aux: " << aux << " ";
            ///troca info
            int troca = aux->getInfo();
            aux->setInfo(p->getInfo());
            p->setInfo(troca);

            ///chama recursao
            p->setDir(auxRemove(p->getDir(), x));
        }
        else
        {
            //cout << "remove com 1 filho" << endl;
            p = removeNoComUmFilho(p);
        }
    }


    return p;
}
No* ArvoreABB::removeFolha(No *p)
{
    delete p;
    return NULL;
}
No* ArvoreABB::removeNoComUmFilho(No *p)
{
    No *a;
    if(p->getEsq() != NULL)
    {
        a = p->getEsq();
    }
    else
    {
        a = p->getDir();
    }

    delete p;
    return a;
}


int ArvoreABB::altura()
{
    return auxAltura(raiz);
}
int ArvoreABB::auxAltura(No *p)
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


void ArvoreABB::imprimePreOrdem()
{
    auxImprimePreOrdem(raiz);
    cout << endl;
}
void ArvoreABB::auxImprimePreOrdem(No *p)
{
    if(p != NULL)
    {
        cout << p->getInfo() << " ";
        auxImprimePreOrdem(p->getEsq());
        auxImprimePreOrdem(p->getDir());
    }
}

void ArvoreABB::imprimeGrafico()
{
    int alt = auxAltura(raiz);
    int maxLargNivel = (pow(2, alt) * 4) - 1;

    cout << endl;

    for(int i=0; i <= alt; i++)
    {
        auxImprimeGrafico(raiz, 0, i, 0, maxLargNivel-1);
        cout << endl;
    }
}

void ArvoreABB::auxImprimeGrafico(No* p, int n, int k, int i, int f)
{
    int meio = ((f-i)/2)+i;

    if(n == k)
    {

        for(int j=i; j < meio; j++)
        {
            cout << " ";
        }

        cout << " ";

        if (p != NULL)
        {
            if(p->getInfo() <= 9)
            {
                cout << "0" << p->getInfo();
            }
            else
            {
                cout << p->getInfo();
            }
        }
        else
        {
            cout << "  ";
        }


        for(int j=meio+1; j < f; j++)
        {
            cout << " ";
        }

    }
    if(n < k)
    {
        if(p != NULL)
        {
            auxImprimeGrafico(p->getEsq(), n+1, k, i, meio-1);
            auxImprimeGrafico(p->getDir(), n+1, k, meio+1, f);
        }
    }

}

int ArvoreABB::contaNos()
{
    return auxContaNos(raiz);
}
int ArvoreABB::auxContaNos(No *p)
{
    if(p == NULL)
    {
        return 0;
    }
    return 1 + auxContaNos(p->getEsq()) + auxContaNos(p->getDir());
}

bool ArvoreABB::verificaSeEstaBalanceada()
{
    int h = altura();
    int n = contaNos();
    return (h > (log(n) + 1));
}

/// imprime com uma Pilha

void ArvoreABB::imprimeEmOrdemComPilha()
{
    PilhaEncad *p = new PilhaEncad();
    No *q = raiz;
    bool cond = true;
    while(cond)
    {
        if(q != NULL){
            p->empilha(q);
            q = q->getEsq();
        }

        if(q == NULL && !p->vazia()){
            q = p->desempilha();
            cout << q->getInfo() << " ";
            q = q->getDir();
        }
        if(q == NULL && p->vazia()){
            cond = false;
        }
    }
    delete p;
    cout << endl;
}
