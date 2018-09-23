#ifndef TLISTCONT_H_INCLUDED
#define TLISTCONT_H_INCLUDED
#include "Ponto.h"

class ListaCont
{
private:
    int max;
    int ultimo;
    float *x;

public:
    ListaCont(int tam);
    ~ListaCont();
    float get(int k);
    void set(int k, float val);
    void insereK(int k, float val);
    void inserePrim(float val);
    void insereUlt(float val);
    void eliminaK(int k);
    void eliminaPrim();
    void eliminaUlt();

    ///exercicio 1

    void imprime();
    int buscaMaior(float val);
    int numNos();
    void limpar();

    ///exercicio 2

    void insereValores(int tam, float vet[]);
};

#endif // TLISTCONT_H_INCLUDED
