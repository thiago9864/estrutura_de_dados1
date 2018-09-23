#include <iostream>
#include <cmath>
#include <cstdlib>
#include "TADMatrizDiagonal.h"
#include "TADMatrizTriangular.h"

using namespace std;

///Pag 30

///exercicio 1
/*
int somatorioAux(int n, int a){
    if(a == n){
        return n;
    }
    return (n - a) + somatorioAux(n, a + 1);
}
int somatorio(int n){
    return somatorioAux(n, 1);
}
int main()
{
    cout << "Somatorio: " << somatorio(5) << endl;
    return 0;
}
*/


///exercicio 2

/*
float retornaMenor(float v[], int n){

    return 0;
}


int main(){

    float vet[] = {1.1, -2.5, 9.6, 4.2, 5.0, 0.2};

    cout << "Menor valor: " << retornaMenor(vet, 6) << endl;

    return 0;
}
*/


/** Matrizes **/

///exercicio 1

int main(){
    int n = 5;
    //TADMatrizDiagonal matriz(n);
    TADMatrizTriangular matriz(n);

    srand(0);

    for(int i=0; i < n; i++){
        for(int j=0; j < n; j++){
            int v = rand()%9+1;
            matriz.set(i, j, v);
            cout << v << " ";
        }
        cout << endl;
    }

    cout << "TAD" << endl;

    for(int i=0; i < n; i++){
        for(int j=0; j < n; j++){
            cout << matriz.get(i, j) << " ";
        }
        cout << endl;
    }
    return 0;
}
