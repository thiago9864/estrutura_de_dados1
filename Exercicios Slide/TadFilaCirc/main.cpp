#include <iostream>
#include "TadFilaCirc.h"

using namespace std;

int main()
{
    cout << "Teste fila contigua circular" << endl;
    TadFilaCirc fc(5);

    fc.entra(3);
    fc.entra(2);
    fc.entra(4);
    fc.entra(9);

    cout << "Fila criada: ";
    fc.imprime();
    cout << endl;

    cout << "Sair: " << fc.sai() << endl;
    cout << "Sair: " << fc.sai() << endl;
    cout << "Sair: " << fc.sai() << endl;

    cout << "Entra 12" << endl;
    fc.entra(12);
    cout << "Entra 11" << endl;
    fc.entra(11);
    cout << "Entra 14" << endl;
    fc.entra(14);
    cout << "Entra 16" << endl;
    fc.entra(16);


    cout << "Fila depois de operacoes: ";
    fc.imprime();
    cout << endl;

    return 0;
}
