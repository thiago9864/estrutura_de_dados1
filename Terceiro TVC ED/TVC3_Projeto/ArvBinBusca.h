#ifndef TVC3_ARVBINBUSCA_H
#define TVC3_ARVBINBUSCA_H

#include <iostream>
#include <cstdlib>
#include <math.h>
#include "No.h"

using namespace std;

class ArvBinBusca
{
public:
    ArvBinBusca();
    ~ArvBinBusca();
    void imprime();
    void insere(int x);
    bool vazia();

    // Questao 1  ------------------------------------------------------------
    int alturaNo(int val);
    int auxAlturaNo(No *p);

    // Questao 2 --------------------------------------------------------------
    int* criaVetAteNivel(int k, int *n);
    void auxCriaVetAteNivel(No *p, int *vet, int k, int n, int *pv);

    // Questao 3 --------------------------------------------------------------
    void removeSubNiveis(int k);
    No* auxRemoveNivel(No *p, int k, int n);

private:
    No *raiz;

    // funcoes auxiliares
    No *auxInsere(No *p, int x);
    void auxImprime(No *p, int nivel);

};

#endif //TVC3_ARVBINBUSCA_H
