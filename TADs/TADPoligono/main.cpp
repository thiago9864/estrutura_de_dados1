#include <iostream>
#include "poligono.h"

using namespace std;

int main()
{
    Poligono p(3, 4);
    cout << "Area: " << p.area() << endl;
    cout << "Perimetro: " << p.perimetro() << endl;
    cout << "Angulo: " << p.angInterno() << endl;

    cout << p.consultaNumLados() << endl;
    return 0;
}
