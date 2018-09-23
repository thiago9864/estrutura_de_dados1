#include <iostream>
#include <cstdlib>
#include <ctime>
#include "ListaOrdCont.h"
#include "ListaOrdEncad.h"
#include "Pilha.h"
#include "TadPolinomio.h"

using namespace std;

void inverteLista(ListaOrdCont *L, int tam){
    Pilha p;
    for(int i=0; i < tam; i++){
        p.empilha(L->getPos(i));
    }
}

int main()
{
    srand(time(NULL));
    cout << "Exercicio 1 - Lista Ordenada Contigua" << endl;

    ListaOrdCont L1(100);

    for(int i=0; i < 20; i++){
        L1.insere(rand()%20);
    }

    L1.imprime();


    cout << endl << "Exercicio 2 - Lista Ordenada Encadeada" << endl;

    ListaOrdEncad L2;

    for(int i=0; i < 20; i++){
        L2.insere(rand()%20);
    }

    L2.imprime();

    int b = rand()%40;
    cout << "Busca por " << b << ": " << L2.busca(b) << endl;


    return 0;
}
