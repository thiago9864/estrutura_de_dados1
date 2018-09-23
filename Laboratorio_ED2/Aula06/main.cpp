#include <iostream>
#include <cstdlib>
#include "Ponto.h"
#include "ListaCont.h"
#include "ListaContPonto.h"

using namespace std;

int main()
{
    /* initialize random seed: */
    srand (time(NULL));

    ListaCont l(10);

    l.insereUlt(24.76);
    l.insereUlt(3.1465);
    l.insereUlt(2.718);
    l.insereUlt(-1.10);
    l.insereUlt(99.0);
    l.insereUlt(26.2);

    ///exercicio 1

    l.imprime();
    cout << "Busca Maior que 25.0: " << l.buscaMaior(25.0) << endl;
    cout << "Numero de nos da lista: " << l.numNos() << endl;

    ///exercicio 2
    //l.limpar();

    float vet[] = {1.2, 8.6, 5.5};

    l.insereValores(3, vet);

    l.imprime();

    ///exercicio 3

    ListaCont L1(50);
    ListaCont L2(50);
    ListaCont L3(50);

    cout << "Exercicio 3" << endl;

    for(int i=0; i < 50; i++){
        L1.insereUlt((rand() % 1000)/10.0);
    }

    cout << "Lista L1" << endl;
    L1.imprime();

    for(int i=0; i < 25; i++){
        L2.insereUlt(L1.get(i));
    }

    cout << "Lista L2" << endl;
    L2.imprime();

    for(int i=25; i < 50; i++){
        L3.insereUlt(L1.get(i));
    }

    cout << "Lista L3" << endl;
    L3.imprime();


    cout << "Exercicio 4" << endl;

    ListaContPonto ListaPontos(50);

    for(int i=0; i < 50; i++){
        ListaPontos.insereUlt((rand() % 1000)/10.0, (rand() % 1000)/10.0);
    }

    return 0;
}
