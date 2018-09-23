#include <iostream>
#include <cstdlib>
#include "ListaCont.h"

using namespace std;

ListaCont::ListaCont(int tam)
{
    max = tam;
    x = new int[tam];
    ultimo = -1;
}

ListaCont::~ListaCont()
{
    delete [] x;
}

void ListaCont::insereUlt(int val)
{
    if(ultimo == (max-1))
    {
        cout << "Vetor cheio!" << endl;
        exit(1);
    }

    ultimo = ultimo + 1;
    x[ultimo] = val;
}

void ListaCont::imprime()
{
    cout << "LISTA CONTIGUA: ";
    if(ultimo == -1) cout << "Vazia!" << endl;
    for(int i = 0; i <= ultimo; i++)
    {
        cout << x[i] << " ";
    }
    cout << endl;
}

int ListaCont::get(int k){
    if(k >= 0 && k <= ultimo){
        return x[k];
    } else {
        cout << "Indice invalido" << endl;
        exit(1);
    }
}

int ListaCont::contaValores(int val)
{
    int cont=0;

    for(int i=0; i <= ultimo; i++)
    {
        if(x[i] % 2 != 0 && x[i] > val)
        {
            cont++;
        }
    }

    return cont;
}

void ListaCont::insere(int valor)
{
    int pos = -1;

    if(ultimo == max - 1)
    {
        cout << "Não foi possivel inserir o valor" << endl;
    }
    else if (ultimo == -1)
    {
        x[0] = valor; ///lista vazia - insere direto
        ultimo++;
    }
    else
    {

        for(int i=0; i <= ultimo; i++)
        {
            ///procura lugar
            if(x[i] > valor)
            {
                pos = i;
                break;
            }
        }

        if(pos == -1)
        {
            ///insere no final
            ultimo++;
            x[ultimo] = valor;
        }
        else
        {
            ///abre espaco no vetor
            for(int i = ultimo; i >= pos; i--)
            {
                x[i+1] = x[i];
            }

            ///insere o elemento
            x[pos] = valor;
            ultimo++;
        }
    }
}
