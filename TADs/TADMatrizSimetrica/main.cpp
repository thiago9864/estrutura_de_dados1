#include <iostream>
#include "MatrizSimetrica.h"

using namespace std;

int main()
{
    int dim = 8;
    MatrizSimetrica m(dim);
    for(int i = 0; i < dim; i++)
        for(int j = 0; j <= i; j++)
            m.set(i, j, 2*i+3*j+10);

    m.set(1,2, 99);

    for(int i = 0; i < dim; i++)
    {
        for(int j = 0; j < dim; j++)
            cout << m.get(i, j) << " ";
        cout << endl;
    }

    return 0;
}
