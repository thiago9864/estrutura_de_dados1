#ifndef RETANGULO_H_INCLUDED
#define RETANGULO_H_INCLUDED

#include "Ponto.h"

class Retangulo
{
public:
    Retangulo();
    Retangulo(float a, float b, float c, float d);
    Retangulo(Ponto pa, Ponto pb);
    ~Retangulo();
    float calculaArea();
    bool dentro(Ponto p);
    void imprime();
private:
    Ponto p1;
    Ponto p2;
};

#endif // RETANGULO_H_INCLUDED
