#include <iostream>
#include <cmath>
#include "Ponto.h"

using namespace std;

Ponto::Ponto()
{

}
Ponto::Ponto(float a, float b)
{
    x = a;
    y = b;
}
Ponto::~Ponto()
{

}
float Ponto::getX()
{
    return x;
}
float Ponto::getY()
{
    return y;
}
void Ponto::setX(float xx)
{
    x = xx;
}
void Ponto::setY(float yy)
{
    y = yy;
}
void Ponto::imprime()
{
    cout << "Ponto: [" << x << ", " << y << "]" << endl;
}
float Ponto::distancia(Ponto *p2)
{
    float c1, c2, h;
    c1 = x - (*p2).x;
    c2 = y - p2->y;
    h = sqrt(c1*c1 + c2*c2);
    return h;
}
