#include <iostream>
#include "MatrizTriDiagSec.h"

using namespace std;

// ----------------------------------------------------------------------------
//Q5
MatrizTriDiagSec::MatrizTriDiagSec(int dim)
{
    // Implemente aqui sua solucao!
    n = dim;
    diagSec = new float[n];
    superDiagSec = new float[n-1];
    subDiagSec = new float[n-1];
}

MatrizTriDiagSec::~MatrizTriDiagSec()
{
    // Implemente aqui sua solucao!
    delete diagSec;
    delete superDiagSec;
    delete subDiagSec;
}

float MatrizTriDiagSec::consulta(int i, int j)
{
    // Implemente aqui sua solucao!
    // Se necessario remova o codigo abaixo.
    if((n-i-1) == j){
        ///diagonal secundaria
        diagSec[j];
    }
    return 0;
}

void MatrizTriDiagSec::atribui(int i, int j, float val)
{
    // Implemente aqui sua solucao!
    if((n-i-1) == j){
        ///diagonal secundaria
        diagSec[j] = val;
    }
}
// ----------------------------------------------------------------------------
//-Q5

bool MatrizTriDiagSec::verifica(int i, int j)
{
    return i >= 0 && i < n && j >= 0 && j < n;
}
