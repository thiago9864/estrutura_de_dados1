#ifndef PILHAENCAD_H_INCLUDED
#define PILHAENCAD_H_INCLUDED
#include "No.h"

using namespace std;

class PilhaEncad
{
private:
    No *topo;                /// ponteiro p/ o No do topo
    int n;                   /// tamanho da pilha

public:
    PilhaEncad();
    ~PilhaEncad();
    float getTopo();         /// retorna valor do No do topo
    void empilha(float val); /// insere No no topo
    float desempilha();      /// elimina No do topo
    bool vazia();            /// verifica se está vazia

    ///exercicios
    void imprime();
    int tamanho();
};

#endif // PILHAENCAD_H_INCLUDED
