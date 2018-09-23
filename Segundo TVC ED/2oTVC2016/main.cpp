#include <iostream>
#include "FilaEncad.h"
#include "ListaDupla.h"
#include "ListaCont.h"
#include "Pilha.h"

using namespace std;

void ordenaDecrescente(int* vet, int tam){
    ListaCont lc(tam);
    Pilha pl;

    ///insere na lista de forma crescente
    for(int i=0; i < tam; i++){
        lc.insere(vet[i]);
    }
    /// transfere pra pilha
    for(int i=0; i < tam; i++){
        pl.empilha(lc.get(i));
    }
    /// desempilha e passa pro vetor na forma descrescente
    for(int i=0; i < tam; i++){
        vet[i] = pl.desempilha();
    }
}


int main()
{
    cout << "Questão 1" << endl;
    ListaCont lc(10);

    cout << "Insere: 3, 4, 9, -3, 14, 0" << endl;

    lc.insere(3);
    lc.insere(4);
    lc.insere(9);
    lc.insere(-3);
    lc.insere(14);
    lc.insere(0);


    cout << "Lista com valores ordenados" << endl;

    lc.imprime();


    cout << endl << "Questao 2" << endl;

    ListaDupla ld;

    ld.insereInicio(30);
    ld.insereInicio(4);
    ld.insereInicio(5);
    ld.insereInicio(-3);
    ld.insereInicio(1);
    ld.insereInicio(-1);

    cout << "Lista antes de remover" << endl;

    ld.imprime();

    ld.removeMaior();
    cout << "Lista depois de remover" << endl;

    ld.imprime();


    cout << endl << "Questao 3" << endl;

    int vetor[6] = {-3, 5, 2, 3, 7, 4};

    cout << "vetor desordenado" << endl;
    for(int i=0; i <6; i++){
        cout << vetor[i] << " ";
    }
    cout << endl;

    ordenaDecrescente(vetor, 6);

    cout << "vetor na orden decrescente" << endl;
    for(int i=0; i <6; i++){
        cout << vetor[i] << " ";
    }
    cout << endl;


    cout << endl << "Questao 4" << endl;

    FilaEncad fila1;

    fila1.enfileira(3);
    fila1.enfileira(4);
    fila1.enfileira(5);
    fila1.enfileira(6);

    cout << "Fila 1: ";
    fila1.imprime();

    FilaEncad fila2;

    fila2.enfileira(10);
    fila2.enfileira(11);
    fila2.enfileira(12);
    fila2.enfileira(13);

    cout << "Fila 2: ";
    fila2.imprime();

    fila1.concatenaInicio(&fila2);

    cout << "Fila 1 depois de concatenar" << endl;
    fila1.imprime();

    cout << "Fila 2 depois de concatenar" << endl;
    fila2.imprime();

    return 0;
}
