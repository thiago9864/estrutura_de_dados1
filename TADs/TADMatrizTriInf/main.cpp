#include <iostream>
#include "MatrizTriInf.h"

using namespace std;

int main()
{
    int dim = 8;
    MatrizTriInf m(dim);
    for(int i = 0; i < dim; i++)
        for(int j = 0; j <= i; j++)
            m.set(i, j, i+j+1);

    for(int i = 0; i < dim; i++)
    {
        for(int j = 0; j < dim; j++)
            cout << m.get(i, j) << " ";
        cout << endl;
    }

    return 0;
}
