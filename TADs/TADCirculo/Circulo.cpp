#include <iostream>
#include <cmath>
#include "Ponto.h"
#include "Circulo.h"
using namespace std;

Circulo::Circulo(float xx, float yy, float rr)
{
    c = Ponto(xx, yy);
    r = rr;
}
Circulo::~Circulo()
{

}
Ponto Circulo::getCentro()
{
    return c;
}
float Circulo::getRaio()
{
    return r;
}
void Circulo::setCentro(Ponto cc)
{
    c = cc;
}
void Circulo::setRaio(float rr)
{
    r = rr;
}
float Circulo::area()
{
    return 3.1416 * r * r;
}
float Circulo::perimetro()
{
    return 2 * 3.1416 * r;
}
void Circulo::imprime()
{
    cout << "Centro: ";
    c.imprime();
    cout << "Raio: " << r << endl;
}

bool Circulo::dentro(Ponto p2)
{
    float dist = c.distancia(&p2);
    if(dist <= r)
        return true;
    else
        return false;
}
