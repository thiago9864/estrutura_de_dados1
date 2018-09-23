#ifndef LISTADUPLA_H_INCLUDED
#define LISTADUPLA_H_INCLUDED
#include "NoDuplo.h"

class ListaDupla
{
public:
    ListaDupla();
    ~ListaDupla();
    bool busca(float val);
    float get(int k);
    void set(int k, float val);
    void insereInicio(float val);
    void eliminaInicio();
    void insereFinal(float val); /// exercicio
    void eliminaFinal();         /// exercicio
    void imprimir();
    void imprimirReverso();
    ListaDupla* concatena(ListaDupla *L2);
    ListaDupla* partir(float x);
    void removeOcorrencias(float val);
private:
    NoDuplo *primeiro;
    NoDuplo *ultimo;
    int n;
};
#endif
