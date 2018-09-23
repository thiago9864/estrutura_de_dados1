#include <iostream>
#include <cmath>
#include "TADMatrizTriangular.h"

using namespace std;

TADMatrizTriangular::TADMatrizTriangular(int n){
    _n = ((n + 1) * n) / 2;
    mat = new int[_n];
}
TADMatrizTriangular::~TADMatrizTriangular()
{
    delete [] mat;
}

bool TADMatrizTriangular::verifica(int i, int j){
    if(i>=0 && i < _n && j>=0 && j<_n){
        return true;
    }
    return false;
}

int TADMatrizTriangular::indice(int i, int j){
    int a = _n - i - 1;
    return (((a + 1) * a) / 2) + j;
}

void TADMatrizTriangular::set(int i, int j, int valor){
    if(verifica(i, j)){
        if(i <= j){
            mat[indice(i, j)] = valor;
        } else {
            //cout << "Desc. da Matriz!";
        }
    } else {
        cout << "Indice invalido";
    }
}
int TADMatrizTriangular::get(int i, int j){
    if(verifica(i, j)){
        if(i <= j){
            return mat[indice(i, j)];
        } else {
            return 0;
        }
    } else {
        cout << "Indice invalido";
    }
}
