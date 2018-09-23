#include <iostream>
#include <cmath>
#include "TADMatrizDiagonal.h"

using namespace std;

TADMatrizDiagonal::TADMatrizDiagonal(int n)
{
    _n = n;
    tam = n + (n - 1) + (n - 1);
    mat = new int[tam];
}
TADMatrizDiagonal::~TADMatrizDiagonal()
{
    delete [] mat;
}

bool TADMatrizDiagonal::verifica(int i, int j)
{
    if(i >= 0 && i < _n && j >= 0 && j < _n)
    {
        return true;
    }
    return false;
}

int TADMatrizDiagonal::indice(int i, int j){
    if(i==j){
        return i;
    }
    else if(j-i==1){
        return _n + i - 1;
    }
    else if(i-j==1){
        return _n*2 + i - 1;
    }
}

void TADMatrizDiagonal::set(int i, int j, int valor)
{

    if(verifica(i, j)){
        if(i==j || j-i == 1 || i-j == 1){
            mat[indice(i, j)] = valor;
        } else {
            //cout << "Descaracterizacao da matriz!" << endl;
        }
    } else {
        cout << "Indice invalido";
    }

}
int TADMatrizDiagonal::get(int i, int j){
    if(verifica(i, j)){
        if(i==j || j-i == 1 || i-j == 1){
            return mat[indice(i, j)];
        } else {
            return 0;
        }
    } else {
        cout << "Indice invalido";
    }
}
