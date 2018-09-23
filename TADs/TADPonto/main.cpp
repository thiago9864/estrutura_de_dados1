#include <iostream>
#include "Ponto.h"

using namespace std;

int main()
{
    Ponto a(12, 10);
    a.imprime();
    Ponto b(-2, 1);
    b.imprime();

    cout << "Distancia: " << a.distancia(&b) << endl;

    return 0;
}
