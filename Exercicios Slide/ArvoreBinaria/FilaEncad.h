#ifndef FILAENCAD_H_INCLUDED
#define FILAENCAD_H_INCLUDED
#include "NoFila.h"
#include "No.h"

using namespace std;

class FilaEncad
{
private:
    NoFila *ini;
    NoFila *fim;      /// ponteiros para os No's extremos
public:
    FilaEncad();
    ~FilaEncad();
    No* getInicio();         /// retorna valor do primeiro No
    void enfileira(No* val); /// insere No no fim
    No* desenfileira();      /// elimina No do comeco
    bool vazia();              /// verifica se fila esta vazia
};

#endif // FILAENCAD_H_INCLUDED
