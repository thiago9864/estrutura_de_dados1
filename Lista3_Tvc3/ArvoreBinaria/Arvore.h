#ifndef ARVORE_H_INCLUDED
#define ARVORE_H_INCLUDED
#include "No.h"

class Arvore {
public:
    Arvore();
    ~Arvore();

    int getRaiz();
    void cria(int val, Arvore *ae, Arvore *ad);
    bool vazia();
    void imprime();
    bool busca(int n);
    void montaArvore();
    void insere(int valor);
    void anulaRaiz();
    void imprimeEmLargura();
    int altura();
    int numeroDeNos();
    int numeroDeFolhas();
    bool isArvoreCheia();
    void excluirFolhas();
    void imprimePreOrdemComPilha();
    int impares();
    int soma();
    int maiores(int x);
    float mediaNivel(int nivel);

private:
    No *raiz;
    No *auxDestrutor(No *p);
    void auxImprime(No *p);
    bool auxBusca(No *p, int n);
    No* auxMontaArvore();
    No* auxInsere(No *p, int valor);
    int auxAltura(No *p);
    int auxNumeroNos(No *p);
    int auxNumeroFolhas(No *p);
    int auxIsArvoreCheia(No *p, int *cont);
    No* auxExcluirFolhas(No *p);
    int auxImpares(No *p);
    int auxSoma(No *p);
    int auxMaiores(No* p, int x);
    float auxMediaNivel(No *p, int k, int n, int *cont);

};

#endif // ARVORE_H_INCLUDED
