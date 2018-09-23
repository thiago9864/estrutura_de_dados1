#include <iostream>
#include "MatrizDiagonal.h"

using namespace std;

int main()
{
    int dim = 8;
    MatrizDiagonal m(dim);
    for(int i = 0; i < dim; i++)
        for(int j = 0; j < dim; j++)
            m.set(i, j, 5+2*i*j);

    for(int i = 0; i < dim; i++)
    {
        for(int j = 0; j < dim; j++)
            cout << m.get(i, j) << " ";
        cout << endl;
    }

    return 0;
}
