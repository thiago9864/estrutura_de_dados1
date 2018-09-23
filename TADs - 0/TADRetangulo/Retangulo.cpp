#include <iostream>
#include <cmath>
#include "Retangulo.h"
#include "Ponto.h"

using namespace std;

Retangulo::Retangulo()
{
    p1 = Ponto(0, 0);
    p2 = Ponto(0, 0);
}
Retangulo::Retangulo(float a, float b, float c, float d)
{
    p1.setX(a); p1.setY(b);
    p2.setX(c); p2.setY(d);
}
Retangulo::Retangulo(Ponto pa, Ponto pb)
{
    p1.setX(pa.getX());
    p1.setY(pa.getY());
    p2.setX(pb.getX());
    p2.setY(pb.getY());
}
Retangulo::~Retangulo()
{

}
void Retangulo::imprime()
{
    cout << "Ponto inferior esquerdo: " << endl;
    p1.imprime();
    cout << "Ponto superior direito: " << endl;
    p2.imprime();
}

float Retangulo::calculaArea()
{
    float largura = p2.getX() - p1.getX();
    float altura = p2.getY() - p1.getY();
    return (altura*largura);
}
