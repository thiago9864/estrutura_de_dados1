#include <iostream>
#include "Relogio.h"

using namespace std;

int main()
{
    Relogio r(17, 20, 0);
    cout << "Horas: " << r.getHora() << endl;
    cout << "Minutos: " << r.getMinuto() << endl;
    cout << "Segundos: " << r.getSegundo() << endl;
    Relogio r2;
    cout << "Horas: " << r2.getHora() << endl;
    cout << "Minutos: " << r2.getMinuto() << endl;
    cout << "Segundos: " << r2.getSegundo() << endl;
    return 0;
}
