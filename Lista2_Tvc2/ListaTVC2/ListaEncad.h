#ifndef LISTAENCAD_H_INCLUDED
#define LISTAENCAD_H_INCLUDED
#include "No.h"

class ListaEncad
{
public:
    ListaEncad();
    ~ListaEncad();
    void insereInicio(int val);
    void insereFinal(int val);
    void insereK(int k, int val);
    void eliminaInicio();
    void eliminaFinal();
    bool busca(int val);
    void imprime();
    int numNos();
    void insereOrdenado (int valor);
private:
    No* primeiro; // ponteiro para o primeiro
};

#endif // LISTAENCAD_H_INCLUDED
