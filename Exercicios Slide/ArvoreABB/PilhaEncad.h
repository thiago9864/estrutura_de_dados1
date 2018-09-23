#ifndef PILHAENCAD_H_INCLUDED
#define PILHAENCAD_H_INCLUDED
#include "NoFila.h"

using namespace std;

class PilhaEncad
{
private:
    NoFila *topo;                /// ponteiro p/ o No do topo
    int n;                   /// tamanho da pilha

public:
    PilhaEncad();
    ~PilhaEncad();
    No* getTopo();         /// retorna valor do No do topo
    void empilha(No* val); /// insere No no topo
    No* desempilha();      /// elimina No do topo
    bool vazia();            /// verifica se está vazia

    ///exercicios
    int tamanho();
};

#endif // PILHAENCAD_H_INCLUDED
