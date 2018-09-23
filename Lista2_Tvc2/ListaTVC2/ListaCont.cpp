#include <iostream>
#include "ListaCont.h"

using namespace std;

ListaCont::ListaCont(int tam)
{
    max = tam;
    ultimo = -1;
    x = new float[max];
}
ListaCont::~ListaCont()
{
    delete [] x;
}

float ListaCont::get(int k)
{
    if(k >= 0 && k <= ultimo)
        return x[k];
    else
    {
        cout << "Indice invalido!" << endl;
        //exit(1);
    }
}
void ListaCont::set(int k, float val)
{
    if(k >= 0 && k <= ultimo)
        x[k] = val;
    else
    {
        cout << "Indice invalido!" << endl;
        //exit(2);
    }
}

void ListaCont::insereUlt(float val)
{
    if(ultimo == (max-1))
    {
        cout << "Vetor Cheio!" << endl;
        //exit(3);
    }
    ultimo = ultimo + 1;
    x[ultimo] = val;
}

void ListaCont::eliminaUlt()
{
    if(ultimo == -1)
    {
        cout << "Lista Vazia!" << endl;
        //exit(6);
    }
    ultimo = ultimo - 1;
}

void ListaCont::insereK(int k, float val)
{
    if(ultimo == (max-1))
    {
        cout << "Vetor Cheio!" << endl;
        //exit(3);
    }
    if(k >= 0 && k <= ultimo)
    {
        for(int i = ultimo; i >= k; i--) {
            x[i+1] = x[i];
        }
        x[k] = val;
        ultimo = ultimo + 1;
    }
    else
    {
        cout << "Indice invalido!" << endl;
        //exit(4);
    }
}

void ListaCont::imprime(){
    for(int i=0; i <= ultimo; i++){
        cout << x[i] << " ";
    }
    cout << endl;
}

///exercicio 1

bool ListaCont :: troca (int posicao1 , int posicao2) {
    if(posicao1 > 0 && posicao1 <= ultimo && posicao2 > 0 && posicao2 <= ultimo && (posicao1 != posicao2)){

        float aux = x[posicao1];
        x[posicao1] = x[posicao2];
        x[posicao2] = aux;

        return true;
    } else {
        return false;
    }
}

/// exercicio 2

bool ListaCont :: aumentaCapacidade (int novoMax ){

    if(novoMax <= max){
        return false;
    }

    float *nx = new float[novoMax];

    ///transfere tudo pro vetor novo
    for(int i = 0; i < ultimo; i++){
        nx[i] = x[i];
    }

    delete [] x;///apaga o vetor antigo
    x = nx;///passa o endereço do novo

    max = novoMax;

    return true;
}
