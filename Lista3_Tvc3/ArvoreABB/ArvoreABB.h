#ifndef ARVOREABB_H_INCLUDED
#define ARVOREABB_H_INCLUDED
#include "No.h"

class ArvoreABB{

public:
    ArvoreABB();
    ~ArvoreABB();

    int getRaiz();
    bool vazia();
    bool busca(int x);
    void inserir(int x);
    void remover(int x);
    int altura();
    void imprimePreOrdem();
    void imprimeGrafico();
    void imprimeEmOrdemComPilha();

    int contaNos();
    bool verificaSeEstaBalanceada();
    void imprimeIntervalo(int x, int y);
    void imprimeDecrescente();
    void insereDoVet(int n, int *Vet);

    int* insereVetCrescente();
    int getTamanho();

private:
    No *raiz;

    No *auxDestrutor(No *p);
    int auxAltura(No *p);

    No *auxRemove(No *p, int x);
    No *removeFolha(No *p);
    No *removeNoComUmFilho(No *p);

    void auxImprimePreOrdem(No *p);
    void auxImprimeGrafico(No* p, int n, int k, int i, int f);

    int auxContaNos(No *p);
    void auxImprimeIntervalo(No *p, int x, int y);

    void auxImprimeDecrescente(No *p);
    No* auxInsereDoVet(No *p, int n, int *c, int *vet);

    int auxGetTamanho(No *p);
    void auxInsereVetCrescente(No *p, int *v, int *cont, int n);

};

#endif // ARVOREABB_H_INCLUDED
