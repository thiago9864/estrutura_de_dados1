#include <iostream>
#include "Retangulo.h"
#include "Ponto.h"

using namespace std;

int main()
{
    Ponto p1(2, 2);
    Ponto p2(10, 10);
    Retangulo a;
    Retangulo b(1, 1, 5, 5);
    Retangulo c(p1, p2);

    a.imprime();
    b.imprime();
    c.imprime();

    cout << b.calculaArea() << endl;
    return 0;
}
