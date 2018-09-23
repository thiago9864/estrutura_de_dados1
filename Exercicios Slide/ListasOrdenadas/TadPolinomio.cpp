#include <iostream>
#include <cstdlib>
#include "TadPolinomio.h"
#include "NoPolinomio.h"

using namespace std;

TadPolinomio::TadPolinomio(){
    primeiro = NULL;
}
TadPolinomio::~TadPolinomio(){
    NoPolinomio *p = primeiro;
    while(p != NULL)
    {
        No *t = p->getProx();
        delete p;
        p = t;
    }
}
void TadPolinomio::inserir(float coeficiente, int expoente){
    NoPolinomio *pol = new NoPolinomio();

    pol->setCoeficiente(coeficiente);
    pol->setExpoente(expoente);

    NoPolinomio *atual = primeiro;
    NoPolinomio *ant = NULL;

    while(atual != NULL && atual->getExpoente() > expoente){
        ant = atual;
        atual = atual->getProx();
    }

    if(ant == NULL){
        pol->setProx(primeiro);
        primeiro = pol;
    } else {
        ant->setProx(pol);
        pol->setProx(atual);
    }

}


void TadPolinomio::soma(TadPolinomio *pol){

}
void TadPolinomio::imprimir(){
    NoPolinomio *p = primeiro;
    while(p != NULL)
    {
        cout << p->getCoeficiente() << "x^" << p->getExpoente() << " ";
        p = p->getProx();
    }
    cout << endl;
}
