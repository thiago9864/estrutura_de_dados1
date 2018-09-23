#ifndef FILAENCAD_H_INCLUDED
#define FILAENCAD_H_INCLUDED
#include "No.h"

class FilaEncad
{
private:
    No *c; // ponteiro para No do comeco
    No *f; // ponteiro para No do fim
public:
    FilaEncad();
    ~FilaEncad();
    float getInicio(); // retorna No do inicio
    void enfileira(float val); // insere No no fim
    float desenfileira(); // elimina No do inicio
    bool vazia(); // verifica se esta vazia
    void concatenaInicio(FilaEncad *fe);
    void imprime();
};

#endif // FILAENCAD_H_INCLUDED
