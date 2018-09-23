#ifndef ARVBINBUSCA_H_INCLUDED
#define ARVBINBUSCA_H_INCLUDED
#include "No.h"

class ArvBinBusca
{
public:
    ArvBinBusca();
    ~ArvBinBusca();
    bool vazia(); // verifica se a árvore está vazia
    bool busca(int x);
    void insere(int x);
    void remove(int x);
    void imprime();
    float mediaCaminho(int ch);

    ///exercicios
    int maior();
    int menor();
    void removeMaior();
    void removeMenor();
    int contaParesCaminho(int x);
    int imprimeGrafico();
    int getAltura();
    void preOrdem();
    void ordem();


private:
    No* raiz; // ponteiro para o No raiz da árvore
    bool auxBusca(No *p, int x);
    No* auxInsere(No *p, int x);
    No* auxRemove(No *p, int x);
    No* menorSubArvDireita(No *p);
    No* removeFolha(No *p);
    No* remove1Filho(No *p);
    void imprimePorNivel(No* p, int nivel);
    No* libera(No *p);


    ///exercicios
    int auxMaior(No *p);
    int auxMenor(No *p);
    int auxContaParesCaminho(No *, int x);
    No* maiorSubArvEsquerda(No *p);
    int auxGetAltura(No *p);
    int auxImprimeGrafico(No* p, int n, int k, int i, int f);
    void auxPreOrdem(No *p);
    void auxOrdem(No *p);

};

#endif // ARVBINBUSCA_H_INCLUDED
