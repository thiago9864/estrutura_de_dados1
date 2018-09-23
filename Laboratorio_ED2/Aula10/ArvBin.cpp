#include <iostream>
#include <cstdlib>
#include <cstring>
#include <sstream>
#include "ArvBin.h"

using namespace std;

ArvBin::ArvBin()
{
    raiz = NULL;
}

int ArvBin::getRaiz()
{
    if (raiz != NULL)
        return raiz->getInfo();
    else
    {
        cout << "Árvore vazia!" << endl;
        exit(1);
    }
}
No* ArvBin::getNoRaiz()
{
    if (raiz != NULL)
        return raiz;
    else
    {
        cout << "Árvore vazia!" << endl;
        exit(1);
    }
}

void ArvBin::cria(int x, ArvBin *sae, ArvBin *sad)
{
    No *p = new No();
    p->setInfo(x);
    p->setEsq(sae->raiz);
    p->setDir(sad->raiz);
    raiz = p;
}

void ArvBin::anulaRaiz()
{
    raiz = NULL;
}

void ArvBin::montaArvore(string *vet)
{
    if(!vazia())
        cout << "Arvore jah montada. So eh possivel a insercao de nos." << endl;
    else
    {
        cout << "Montagem da arvore em pre-ordem:" << endl;
        int contador = 0;
        raiz = auxMontaArvore(vet, &contador);
    }
}

No* ArvBin::auxMontaArvore(string *vet, int *cont)
{
    string linha;
    cout << "Valor: ";
    //cin >> linha;
    linha = vet[*cont];
    *cont = *cont + 1;

    if(linha != "NULL" && linha != "null")
    {
        istringstream ent(linha);
        int valor;
        ent >> valor;

        No *p = new No();
        p->setInfo(valor);

        cout << "Esquerda" << endl;
        p->setEsq(auxMontaArvore(vet, cont));
        cout << "Volta no no " << p->getInfo() << endl;

        cout << "Direita" << endl;
        p->setDir(auxMontaArvore(vet, cont));
        cout << "Volta no no " << p->getInfo() << endl;

        return p;
    }
    else
        return NULL;
}

void ArvBin::insere(int x)
{
    raiz = auxInsere(raiz, x);
}

No* ArvBin::auxInsere(No *p, int x)
{
    if(p == NULL)
    {
        p = new No();
        p->setInfo(x);
        p->setEsq(NULL);
        p->setDir(NULL);
    }
    else
    {
        char direcao;
        cout << x << " a esquerda (e) ou direita (d) de " << p->getInfo() << ": ";
        cin >> direcao;
        if(direcao == 'e' || direcao == 'E')
            p->setEsq(auxInsere(p->getEsq(), x));
        else
            p->setDir(auxInsere(p->getDir(), x));
    }
    return p;
}

bool ArvBin::vazia()
{
    return (raiz == NULL);
}

bool ArvBin::busca(int x)
{
    return auxBusca(raiz, x);
}

bool ArvBin::auxBusca(No *p, int x)
{
    if (p == NULL)
        return false;
    else if (p->getInfo() == x)
        return true;
    else if (auxBusca(p->getEsq(), x))
        return true;
    else
        return auxBusca(p->getDir(), x);
}

ArvBin::~ArvBin()
{
    raiz = libera(raiz);
}

No* ArvBin::libera(No *p)
{
    if (p != NULL)
    {
        p->setEsq(libera(p->getEsq()));
        p->setDir(libera(p->getDir()));
        delete p;
        p = NULL;
    }
    return NULL;
}

void ArvBin::preOrdem()
{
    cout << "Arvore Binaria em Pre-Ordem: ";
    auxPreOrdem(raiz);
}

void ArvBin::auxPreOrdem(No *p)
{
    if (p != NULL)
    {
        cout << p->getInfo() << " ";
        auxPreOrdem(p->getEsq());
        auxPreOrdem(p->getDir());
    }
}

/// Exercicio 1

int ArvBin::contaNos()
{
    return auxContaNos(raiz);
}

int ArvBin::auxContaNos(No *p)
{
    if(p == NULL)
    {
        ;
        return 0;
    }
    else
    {
        int a = auxContaNos(p->getEsq());
        int b = auxContaNos(p->getDir());
        return a + b + 1;
    }
}

/// Exercicio 2

int ArvBin::contaNosFolhas()
{
    return auxContaNosFolhas(raiz);
}

int ArvBin::auxContaNosFolhas(No *p)
{
    if(p == NULL)///caso base 1
    {
        return 0;
    }

    if(p->getEsq() == NULL && p->getDir() == NULL)/// caso base 2
    {
        return 1;
    }
    else
    {
        int esq = auxContaNosFolhas(p->getEsq());
        int dir = auxContaNosFolhas(p->getDir());

        return esq + dir;
    }
}


/// Exercicio 3

int ArvBin::altura()
{
    return auxAltura(raiz);
}

int ArvBin::auxAltura(No *p)
{

    if(p==NULL)
    {
        return 0;
    }

    int e = auxAltura(p->getEsq());
    int d = auxAltura(p->getDir());

    if(e > d)
    {
        return 1 + e;
    }

    return 1 + d;

}


/// Exercicio 4

int ArvBin::contaImpar()
{
    return auxContaImpar(raiz);
}

int ArvBin::auxContaImpar(No *p)
{

    if(p == NULL)
    {
        return 0;
    }

    int e = auxContaImpar(p->getEsq());
    int d = auxContaImpar(p->getDir());
    int i = 0;

    if(p->getInfo() % 2 != 0)
    {
        i = 1 + e + d;
    }

    return i;
}


/// Exercicio 5


int ArvBin::contaFolhaImpar()
{
    return auxContaFolhaImpar(raiz);
}

int ArvBin::auxContaFolhaImpar(No *p)
{

    if(p == NULL)
    {
        return 0;
    }

    int e = auxContaFolhaImpar(p->getEsq());
    int d = auxContaFolhaImpar(p->getDir());

    if(p->getEsq() == NULL && p->getDir() == NULL && p->getInfo() % 2 != 0)
    {
        return 1 + e + d;
    }

    return e + d;
}


/// Exercicio 6

void ArvBin::imprimeNivel(int k)
{
    if(k >= 0)
    {
        auxImprimeNivel(k, raiz, 0);
        cout << endl;
    }
    else
    {
        cout << "k invalido!" << endl;
    }
}

void ArvBin::auxImprimeNivel(int k, No *p, int nivel)
{

    if(p != NULL)
    {

        if(nivel == k)
        {
            cout << p->getInfo() << " ";
        }
        else
        {
            auxImprimeNivel(k, p->getEsq(), nivel+1);
            auxImprimeNivel(k, p->getDir(), nivel+1);
        }

    }

}

/// Exercicio 7

float ArvBin::mediaNivel(int k)
{
    if(k > 0)
    {
        int nElementos = 0;
        int soma = auxMediaNivel(raiz, k, 0, &nElementos);
        return  soma / (float)nElementos;
    }
    else
    {
        cout << "k inválido!";
    }
}
int ArvBin::auxMediaNivel(No *p, int k, int nivel, int *numElementos)
{
    if(p == NULL)
    {
        return 0;
    }

    if(nivel == k)
    {
        *numElementos = *numElementos + 1;
        return p->getInfo();
    }
    else
    {
        return auxMediaNivel(p->getDir(), k, nivel+1, numElementos) + auxMediaNivel(p->getEsq(), k, nivel+1, numElementos);
    }


}

///Exercicio 8

int ArvBin::min()
{
    if(raiz == NULL){
        cout << "Arvore Vazia!" << endl;
        exit(1);
    }
    int minimo = INT_MAX;
    auxMin(raiz, &minimo);
    return minimo;
}
void ArvBin::auxMin(No *p, int *m)
{
    if(p != NULL)
    {
        if(p->getInfo() < *m)
        {
            *m = p->getInfo();
        }
        auxMin(p->getEsq(), m);
        auxMin(p->getDir(), m);
    }
}
int ArvBin::max()
{
    if(raiz == NULL){
        cout << "Arvore Vazia!" << endl;
        exit(1);
    }
    int maximo = INT_MIN;
    auxMax(raiz, &maximo);
    return maximo;
}
void ArvBin::auxMax(No *p, int *m)
{

    if(p != NULL)
    {
        if(p->getInfo() > *m)
        {
            *m = p->getInfo();
        }
        auxMax(p->getEsq(), m);
        auxMax(p->getDir(), m);
    }
}

///Exercicio 9

void ArvBin::inverte()
{
    auxInverte(raiz);
}
void ArvBin::auxInverte(No *p)
{
    if(p != NULL)
    {

        if(p->getEsq() != NULL && p->getDir() != NULL)
        {
            No *e = p->getEsq();
            No *d = p->getDir();

            int aux = e->getInfo();
            e->setInfo(d->getInfo());
            d->setInfo(aux);
        }

        auxInverte(p->getEsq());
        auxInverte(p->getDir());

    }
}


///Exercicio 10

int ArvBin::noMaisEsquerda(){
    if(raiz == NULL){
        cout << "Arvore Vazia!" << endl;
        exit(1);
    }
    No *p = NULL;
    for(p = raiz; p->getEsq() != NULL; p = p->getEsq());
    return p->getInfo();
}
int ArvBin::noMaisDireita(){
    if(raiz == NULL){
        cout << "Arvore Vazia!" << endl;
        exit(1);
    }
    No *p = NULL;
    for(p = raiz; p->getDir() != NULL; p = p->getDir());
    return p->getInfo();
}

/// Exercicio 11

int ArvBin::minSubArvore(No * p){
    if(p == NULL){
        cout << "Arvore Vazia!" << endl;
        exit(1);
    }
    int minimo = INT_MAX;
    auxMin(p, &minimo);
    return minimo;
}
int ArvBin::maxSubArvore(No * p){
    if(p == NULL){
        cout << "Arvore Vazia!" << endl;
        exit(1);
    }
    int maximo = INT_MIN;
    auxMax(p, &maximo);
    return maximo;
}

///Exercicio 12

bool ArvBin::ehABB(){
    if(raiz == NULL){
        cout << "Arvore Vazia!" << endl;
        exit(1);
    }
    return auxEhABB(raiz);
}
bool ArvBin::auxEhABB(No *p){
    if(p == NULL){
        return false;
    }

    No *e = p->getEsq();
    No *d = p->getDir();

    if(e == NULL && d == NULL)
    {
        return true;
    }
    else if(e != NULL && d != NULL && e->getInfo() < p->getInfo() && d->getInfo() >= p->getInfo())
    {
        return true;
    }
    else if(e != NULL && d == NULL && e->getInfo() < p->getInfo())
    {
        return true;
    }
    else if(e == NULL && d != NULL && d->getInfo() >= p->getInfo())
    {
        return true;
    }
    else {
        return false;
    }

    //cout << " " << p->getInfo();
    return auxEhABB(e) && auxEhABB(d);
}
