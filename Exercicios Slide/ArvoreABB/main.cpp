#include <iostream>
#include "ArvoreABB.h"

using namespace std;

int main()
{
    ArvoreABB abb;

    abb.inserir(40);
    abb.inserir(15);
    abb.inserir(10);
    abb.inserir(1);
    abb.inserir(11);
    abb.inserir(21);
    abb.inserir(19);
    abb.inserir(20);//extra
    abb.inserir(35);
    abb.inserir(75);
    abb.inserir(85);
    abb.inserir(76);
    abb.inserir(98);
    abb.inserir(50);
    abb.inserir(45);
    abb.inserir(60);

    cout << "Imprime em pre ordem" << endl;
    abb.imprimePreOrdem();
    cout << endl << "Imprime em ordem com uma pilha" << endl;
    abb.imprimeEmOrdemComPilha();
    cout << endl << "Imprime grafico" << endl;
    abb.imprimeGrafico();

    cout << "A arvore esta balanceada? " << abb.verificaSeEstaBalanceada() << endl;

    abb.remover(1);
    abb.remover(10);
    abb.remover(15);
    abb.remover(40);

    cout << "Imprime apos a remoção" << endl;
    abb.imprimeGrafico();
    cout << "A arvore esta balanceada? " << abb.verificaSeEstaBalanceada() << endl;



    return 0;
}
