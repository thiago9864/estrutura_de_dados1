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

    cout << "Imprime apos a remocao" << endl;
    abb.imprimeGrafico();
    cout << "A arvore esta balanceada? " << abb.verificaSeEstaBalanceada() << endl;

    cout << "b) Imprime intervalo: " << endl;
    abb.imprimeIntervalo(10, 40);

    cout << "d) Imprime decrescente: " << endl;
    abb.imprimeDecrescente();

    int *v = new int[7];
    for(int i=0; i<7; i++){
        v[i] = i + 1;
    }
    ArvoreABB av;
    cout << "Insere vetor na arvoreABB" << endl;
    av.insereDoVet(7, v);
    av.imprimeGrafico();

    cout << "Insere arvore no vetor" << endl;

    cout << "Vetor: ";

    int *vt = abb.insereVetCrescente();
    int nvet = abb.getTamanho();
    for(int i=0; i < nvet; i++){
        cout << vt[i] << " ";
    }

    cout << endl;

    cout << "Imprime crescente: " << endl;
    abb.imprimeEmOrdemComPilha();

    return 0;
}
