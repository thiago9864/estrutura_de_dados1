#include <iostream>
#include <cmath>
#include "Ponto.h"
#include "Triangulo.h"

using namespace std;

// ----------------------------------------------------------------------------
//Q4
Triangulo::Triangulo(float x1, float y1, float x2, float y2, float x3, float y3)
{
    // Implemente aqui sua solucao!
    p1 = new Ponto(x1, y1);
    p2 = new Ponto(x2, y2);
    p3 = new Ponto(x3, y3);

    int a = p1->distancia(p2);
    int b = p2->distancia(p3);
    int c = p3->distancia(p1);

    if((a + b) < c && (a + c) < b && (b + c) < c){
        cout << "Triangulo inválido" << endl;
    }
}

Triangulo::~Triangulo()
{
    // Implemente aqui sua solucao!
    delete p1;
    delete p2;
    delete p3;
}

int Triangulo::tipo()
{
    // Implemente aqui sua solucao!
    // Se necessario remova o codigo abaixo.

    float a = (*p1).distancia(p2);
    float b = p2->distancia(p3);
    float c = p3->distancia(p1);

    /*cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "c: " << c << endl;
    cout << "-----" << endl;
    */

    if(a==b && b==c){
        return 0; //equilatero
    }
    if(a==b && a==c){
        return 1;//isosceles
    }
    return 2;//escaleno
}

float Triangulo::areaEq()
{
    // Implemente aqui sua solucao!
    // Se necessario remova o codigo abaixo.
    if(tipo()==0){
        return (pow(p1->distancia(p2), 2) * sqrt(3)) / 4;
    } else {
        cout << "O triangulo nao é equilátero" << endl;
    }
    return 0;
}
// ----------------------------------------------------------------------------
//-Q4
