#include <iostream>
#include "MatrizTriDiagonal.h"

using namespace std;

int main()
{
    int dim = 8;
    MatrizTriDiagonal m(dim);
    for(int i = 0; i < dim; i++)
        for(int j = 0; j < dim; j++)
            if(i == j || i-j == 1 || i-j == -1)
                m.set(i, j, 5+2*i*j);

    for(int i = 0; i < dim; i++)
    {
        for(int j = 0; j < dim; j++)
            cout << m.get(i, j) << "\t";
        cout << endl;
    }

    return 0;
}
