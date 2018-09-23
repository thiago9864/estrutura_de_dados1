#include <iostream>
#include <cmath>
#include "poligono.h"

using namespace std;

Poligono::Poligono(int n, int l)
{
    cout << "Construtor" << endl;
    numLados = n;
    tamLado = l;
}
Poligono::~Poligono()
{
    cout << "Destrutor" << endl;
}
float Poligono::area()
{
    return numLados*pow(tamLado,2) / (4*tan(3.1416/numLados));
};
float Poligono::perimetro()
{
    return numLados*tamLado;
};
float Poligono::angInterno()
{
    return 180*(numLados - 2)/numLados;
};
void Poligono::alteraNumLados(int n)
{
    if(n >= 3)
        numLados = n;
    else
        cout << "Nao eh possivel a ateracao" << endl;
}
int Poligono::consultaNumLados()
{
    return numLados;
}
