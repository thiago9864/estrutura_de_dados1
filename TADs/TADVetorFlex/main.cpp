#include <iostream>
#include "VetorFlex.h"

using namespace std;

int main()
{
    VetorFlex v(-1,4);
    float valor;
    for(int i = -1; i <= 4; i++)
    {
        cout << "Valor " << i << ": ";
        cin >> valor;
        v.set(i, valor);
    }
    cout << "Vetor: ";
    for(int i = -1; i <= 4; i++)
        cout << v.get(i) << " ";
    cout << endl;

    return 0;
}
