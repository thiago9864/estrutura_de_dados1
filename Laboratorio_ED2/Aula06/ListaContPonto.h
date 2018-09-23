#ifndef LISTACONTPONTO_H_INCLUDED
#define LISTACONTPONTO_H_INCLUDED

#include "Ponto.h"

class ListaContPonto
{
private:
    int max;
    int ultimo;
    Ponto *x;

public:
    ListaContPonto(int tam);
    ~ListaContPonto();
    Ponto *get(int k);
    void set(int k, float x, float y);
    void insereK(int k, float x, float y);
    void inserePrim(float x, float y);
    void insereUlt(float x, float y);
    void eliminaK(int k);
    void eliminaPrim();
    void eliminaUlt();

    ///exercicio 1

    void imprime();
    int numNos();
    void limpar();

    ///exercicio 2

    void insereValores(int tam, Ponto vet[]);
};


#endif // LISTACONTPONTO_H_INCLUDED

