#ifndef FILAENCAD_H_INCLUDED
#define FILAENCAD_H_INCLUDED
#include "No.h"

using namespace std;

class FilaEncad
{
private:
    No *ini;
    No *fim;      /// ponteiros para os No's extremos
public:
    FilaEncad();
    ~FilaEncad();
    float getInicio();         /// retorna valor do primeiro No
    void enfileira(float val); /// insere No no fim
    float desenfileira();      /// elimina No do comeco
    bool vazia();              /// verifica se fila esta vazia

    ///exercicios
    void imprime();
};

#endif // FILAENCAD_H_INCLUDED
