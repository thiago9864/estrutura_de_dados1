#ifndef TURMA_H_INCLUDED
#define TURMA_H_INCLUDED
#include "Aluno.h"

class Turma
{
private:
    char nome;
    int qtde;
    Aluno *alunos;
public:
    Turma(char n, int q);
    ~Turma();
    void leitura();
    float media();
    float maiorNota();
    void aprovados();
};

#endif // TURMA_H_INCLUDED
