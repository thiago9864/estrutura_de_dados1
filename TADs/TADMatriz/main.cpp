#include <iostream>
#include "Matriz2D.h"
#include "MatrizLin.h"

using namespace std;

float* prodMatVetor(MatrizLin *m, float *v)
{
    float *novo = new float[m->getColunas()];
    for(int i = 0; i < m->getLinhas(); i++)
    {
        novo[i] = 0;
        for(int j = 0; j < m->getColunas(); j++)
            novo[i] += m->get(i, j) * v[j];
    }
    return novo;
}

int main()
{
    int dim = 3;
    MatrizLin mat(dim,dim);
    for(int i=0; i<dim; i++)
        for(int j=0; j<dim; j++)
            mat.set(i,j,i+j);
    mat.imprime();
    float v[dim] = {2, 2, 2};
    float *res = prodMatVetor(&mat, v);
    cout << "Vetor: ";
    for(int i = 0; i < dim; i++)
        cout << res[i] << " ";
    cout << endl;
    delete res;
    return 0;
}
