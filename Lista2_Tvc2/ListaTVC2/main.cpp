#include <iostream>
#include "ListaCont.h"
#include "ListaEncad.h"


using namespace std;

int main()
{
    ///exercicio 1
    ListaCont L1(10);

    for(int i=0; i<5; i++){
        L1.insereUlt(i * 2.0);
    }
    cout << "Exercicio 1" << endl << endl;
    L1.imprime();
    cout << "troca 1 por 3: " << L1.troca(1, 3) << endl;
    L1.imprime();

    cout << endl << "Exercicio 2" << endl << endl;

    cout << "aumenta capacidade: " << L1.aumentaCapacidade(20) << endl;

    for(int i=0; i<15; i++){
        L1.insereUlt(i * 2.0);
    }

    L1.imprime();

    ///Exercicio 5

    cout << endl << "Exercicio 5" << endl << endl;

    ListaEncad LEncad1;

    LEncad1.insereOrdenado(3);
    LEncad1.insereOrdenado(6);
    LEncad1.insereOrdenado(1);
    LEncad1.insereOrdenado(4);
    LEncad1.insereOrdenado(-2);
    LEncad1.insereOrdenado(2);
    LEncad1.insereOrdenado(5);

    cout << "Lista inserido ordenado: " << endl;

    LEncad1.imprime();

    return 0;
}
