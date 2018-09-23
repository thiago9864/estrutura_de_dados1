#include <iostream>
#include <cstdlib>
#include "TadFilaCirc.h"

using namespace std;

TadFilaCirc::TadFilaCirc(int tam)
{
    x = new int[tam];
    c = 0;
    f = 0;
    n = 0;
    maximo = tam;
}
TadFilaCirc::~TadFilaCirc()
{
    delete [] x;
}

void TadFilaCirc::entra(int valor)
{
    if(n == maximo){
        cout << "Fila cheia!" << endl;
    } else {
        x[f] = valor;
        f++;
        n++;
        if(f>maximo-1){
            f = 0;
        }
    }
}
int TadFilaCirc::sai()
{
    if(n == 0){
        cout << "Fila vazia!" << endl;
        exit(1);
    } else {
        int ind = c;
        c++;
        n--;
        if(c > maximo-1){
            c = 0;
        }
        return x[ind];
    }
}
void TadFilaCirc::imprime()
{
    if(n == 0){
        cout << "Fila vazia!" << endl;
        exit(1);
    } else {
        cout << "c: " << c << ", f: " << f << endl;
        for(int cont=0, i=c; cont < n; cont++,i++){
            if(i > maximo-1){
                i=0;
            }

            cout << x[i] << " ";
        }
        cout << endl;
    }
}
