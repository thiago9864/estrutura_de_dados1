#ifndef ARVBIN_H_INCLUDED
#define ARVBIN_H_INCLUDED
#include "No.h"



class ArvBin
{
  public:
    ArvBin();
    ~ArvBin();
    int getRaiz();
    No *getNoRaiz();
    void cria(int x, ArvBin *sae, ArvBin *sad);
    void anulaRaiz();
    bool vazia(); // verifica se a árvore está vazia
    bool busca(int x);
    void preOrdem();
    void montaArvore(std::string *vet);
    void insere(int x);

    ///exercicios
    int contaNosFolhas();
    int contaNos();
    int altura();
    int contaImpar();
    int contaFolhaImpar();
    void imprimeNivel(int k);
    float mediaNivel(int k);
    int min();
    int max();
    void inverte();
    int noMaisEsquerda();
    int noMaisDireita();
    int minSubArvore(No * p);
    int maxSubArvore(No * p);
    bool ehABB();


  private:
    No *raiz; // ponteiro para o No raiz da árvore

    No* libera(No *p);
    bool auxBusca(No *p, int x);
    void auxPreOrdem(No *p);
    No* auxMontaArvore(std::string *vet, int *cont);
    void auxImpNivel(No *p, int atual, int k);
    No* auxInsere(No *p, int x);

    ///exercicios

    int auxContaNos(No *p);
    int auxContaNosFolhas(No *p);
    int auxAltura(No *p);
    int auxContaImpar(No *p);
    int auxContaFolhaImpar(No *p);
    void auxImprimeNivel(int k, No *p, int nivel);
    int auxMediaNivel(No *p, int k, int nivel, int *numElementos);
    void auxMin(No *p, int *m);
    void auxMax(No *p, int *m);
    void auxInverte(No *p);
    bool auxEhABB(No * p);
};

#endif // ARVBIN_H_INCLUDED
