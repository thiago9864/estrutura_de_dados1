#include "ArvBinBusca.h"
#include <cmath>

// ----------------------------------------------------------------------------
//Q1
int ArvBinBusca::alturaNo(int val)
{
    // Implemente aqui sua solucao!
    // Se necessario remova o codigo abaixo.

    No *p = raiz;

    while(p != NULL)
    {
        if(val >= p->getInfo())
        {
            p = p->getDir();
        }
        else
        {
            p = p->getEsq();
        }
        if(p == NULL || p->getInfo() == val)
        {
            break;
        }
    }
    if(p == NULL)
    {
        return -1;
    }
    else
    {
        return auxAlturaNo(p);
    }

}
int ArvBinBusca::auxAlturaNo(No *p)
{
    if(p==NULL)
    {
        return -1;
    }
    int ae = auxAlturaNo(p->getEsq());
    int ad = auxAlturaNo(p->getDir());

    if(ae > ad)
    {
        return ae + 1;
    }
    else
    {
        return ad + 1;
    }
}
//-Q1
// ----------------------------------------------------------------------------

// ----------------------------------------------------------------------------
//Q2
int* ArvBinBusca::criaVetAteNivel(int k, int *n)
{
    // Implemente aqui sua solucao!
    // Se necessario remova o codigo abaixo.

    if(vazia())
    {
        return NULL;
    }

    int *v = new int[*n];
    int pont_vetor = 0;

    //total de itens
    for(int i=0; i <= k; i++)
    {
        *n = *n + pow(2, i);
    }

    //inicializa vetor
    for(int i=0; i < *n; i++)
    {
        v[i] = -1;
    }

    auxCriaVetAteNivel(raiz, v, k, 0, &pont_vetor);

    return v;
}
void ArvBinBusca::auxCriaVetAteNivel(No *p, int *vet, int k, int n, int *pv)
{
    if(p != NULL)
    {
        auxCriaVetAteNivel(p->getEsq(), vet, k, n+1, pv);
        if(n <= k)
        {
            vet[*pv] = p->getInfo();
            (*pv)++;
        }
        auxCriaVetAteNivel(p->getDir(), vet, k, n+1, pv);
    }
}
//-Q2
// ----------------------------------------------------------------------------

// ----------------------------------------------------------------------------
//Q3
void ArvBinBusca::removeSubNiveis(int k)
{
    // Implemente aqui sua solucao!

    if(vazia())
    {
        cout << "Arvore Vazia!" << endl;
    }
    else
    {
        raiz = auxRemoveNivel(raiz, k, 0);
    }
    cout << endl;
}
No* ArvBinBusca::auxRemoveNivel(No *p, int k, int n)
{
    if(p == NULL){
        return NULL;
    }

    p->setEsq(auxRemoveNivel(p->getEsq(), k, n+1));
    p->setDir(auxRemoveNivel(p->getDir(), k, n+1));

    if(n > k){
        delete p;
        p = NULL;
    }

    return p;
}
//-Q3
// ----------------------------------------------------------------------------

// Restante da classe ArvBinBusca ---------------------------------------------

ArvBinBusca::ArvBinBusca()
{
    raiz = NULL;
}

ArvBinBusca::~ArvBinBusca()
{
    //não implementado!
}

bool ArvBinBusca::vazia()
{
    return raiz == NULL;
}

void ArvBinBusca::insere(int x)
{
    No *p = auxInsere(raiz, x);
    if(raiz == NULL)
        raiz = p;
}

No* ArvBinBusca::auxInsere(No *p, int x)
{
    if(p == NULL)
    {
        p = new No();
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

void ArvBinBusca::imprime()
{
    auxImprime(raiz, 0);
}

void ArvBinBusca::auxImprime(No *p, int nivel)
{
    if(p != NULL)
    {
        cout << "(" << nivel << ")";
        for(int i = 1; i <= nivel; i++)
            cout << "--";
        cout << p->getInfo() << endl;
        auxImprime(p->getEsq(), nivel+1);
        auxImprime(p->getDir(), nivel+1);
    }
}
