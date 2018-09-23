#include <iostream>
#include <cstring>
#include "ArvBin.h"
using namespace std;

/** Arvore


        5

  2          7

    10    15    25


**/

/**
nos exercicios 10 e 11, ao inves de "dada uma arvore", considerar "dado um nó"
**/

int main()
{
    string vet[] = {"5", "2", "null", "10", "null", "null", "7", "15", "null", "null", "25", "null", "null"};
    ArvBin arv;
    arv.montaArvore(vet);

    string vet2[] = {"5", "2", "null", "7", "null", "null", "15", "10", "null", "null", "25", "null", "null"};
    ArvBin arv2;
    arv2.montaArvore(vet2);

    //arv.insere(15);
    //arv.insere(25);
    //arv.insere(10);
    arv.preOrdem();

    cout << endl << endl << "------ Exercicios -------" << endl << endl;

    cout << "1: Numero de nos da arvore: " << arv.contaNos() << endl;
    cout << "2: Numero de nos folha da arvore: " << arv.contaNosFolhas() << endl;
    cout << "3: Altura da arvore: " << arv.altura() << endl;
    cout << "4: Numero de valores impares: " << arv.contaImpar() << endl;
    cout << "5: Numero de folhas impares: " << arv.contaFolhaImpar() << endl;
    cout << "6: Imprime nivel 2: ";
    arv.imprimeNivel(2);
    cout << endl;
    cout << "7: Media do nivel 2: " << arv.mediaNivel(2) << endl;
    cout << "8: Valor minimo da arvore: " << arv.min();
    cout << " Valor maximo da arvore: " << arv.max() << endl;
    cout << "9: Inverte os filhos dos nos da arvore" << endl;
    cout << "Antes de inverter" << endl;
    arv.imprimeNivel(0);
    arv.imprimeNivel(1);
    arv.imprimeNivel(2);
    arv.inverte();
    cout << "Depois de inverter" << endl;
    arv.imprimeNivel(0);
    arv.imprimeNivel(1);
    arv.imprimeNivel(2);
    cout << "10: No mais a esquerda: " << arv.noMaisEsquerda() << " No mais a direita: " << arv.noMaisDireita() << endl;
    cout << "11: Valor minimo da subarvore: " << arv.minSubArvore(arv.getNoRaiz());
    cout << " Valor maximo da subarvore: " << arv.maxSubArvore(arv.getNoRaiz()) << endl;
    cout << "12a: verifica arvore 1 se e binaria: " << arv.ehABB() << endl;
    cout << "12b: verifica arvore 2 se e binaria: " << arv2.ehABB() << endl;

    return 0;
}
