#ifndef CIRCULO_H_INCLUDED
#define CIRCULO_H_INCLUDED

#include "Ponto.h"

class Circulo
{
private:
    Ponto c;
    float r;

public:
    Circulo(float xx, float yy, float rr);
    Circulo(Ponto cc, float rr);
    ~Circulo();
    Ponto getCentro();
    float getRaio();
    void setCentro(Ponto cc);
    void setRaio(float rr);
    float area();
    float perimetro();
    bool dentro(Ponto p2);
    void imprime();
};

#endif // CIRCULO_H_INCLUDED
