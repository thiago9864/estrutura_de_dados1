#include <iostream>
#include "ArvBinBusca.h"

using namespace std;

///Exercicio 7

void auxPreencheABB(ArvBinBusca* a, int *vet, int i, int f){

    if(f-i >= 0){

        int meio = ((f-i) / 2) + i;

        cout << "Insere (" << vet[meio] << ")" << endl;
        a->insere(vet[meio]);

        auxPreencheABB(a, vet, i, meio-1);///esq
        auxPreencheABB(a, vet, meio+1, f);///dir
    }
}
void preencheABB(ArvBinBusca* a, int p, int q){
    int n = q-p;
    int *vet = new int[n];
    cout << "Intervalo: ";
    for(int x = p, i=0; x <= q; i++, x++){
        vet[i] = x;
        cout << x << " ";
    }
    cout << endl;
    auxPreencheABB(a, vet, 0, n);
}

int main()
{
    ArvBinBusca arv;

    cout << "Criando Arvore Binaria de Busca (ABB)" << endl;
    arv.insere(15);
    arv.insere(9);
    arv.insere(20);
    arv.insere(7);
    arv.insere(11);
    arv.insere(18);
    arv.insere(24);
    arv.insere(23);
    arv.insere(25);
    arv.insere(6);
    arv.insere(8);
    arv.insere(10);
    arv.insere(12);
    arv.insere(17);
    arv.insere(19);
    arv.imprime();
    arv.preOrdem();
    cout << endl;
    arv.ordem();
    cout << endl;
    arv.imprimeGrafico();

    cout << endl;
    cout << "Media do caminho ate o no com valor 18: " << arv.mediaCaminho(18) << endl;

    cout << "Busca o valor 20: " << arv.busca(20) << endl;
    cout << "Busca o valor  5: " << arv.busca(5) << endl;
    cout << endl;
/*
    cout << "Removendo os valores 24, 6, 7, 12, 18, 5." << endl;
    arv.remove(24);
    arv.remove(6);
    arv.remove(7);
    arv.remove(12);
    arv.remove(18);
    arv.remove(5);
    cout << endl;
*/
    cout << "Arvore Binaria de Busca final:" << endl;
    arv.imprime();

    ///exercicios

    cout  << endl << "Exercicio 01" << endl << endl << "maior valor da arvore: " << arv.maior() << endl;

    cout  << endl << "Exercicio 02" << endl << endl << "menor valor da arvore: " << arv.menor() << endl;

    cout  << endl << "Exercicio 03" << endl << endl << "remove maior valor: " << endl;

    //arv.removeMaior();
    //arv.removeMaior();
    //arv.imprime();

    cout  << endl << "Exercicio 04" << endl << endl << "remove menor valor: " << endl;

    //arv.removeMenor();
    //arv.removeMenor();
    arv.imprime();

    cout  << endl << "Exercicio 05" << endl << endl << "numero de pares ate (19): ";
    cout << arv.contaParesCaminho(19) << endl;

    cout << endl << "Exercicio 7" << endl << endl << "Preenche arvore binaria completa no intervalo" << endl;

    ArvBinBusca *arv2 = new ArvBinBusca();
    preencheABB(arv2, 1, 18);

    cout << endl << "Imprime em modo gráfico" << endl;
    arv2->imprimeGrafico();

    return 0;
}

