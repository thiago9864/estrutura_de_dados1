#include <iostream>
#include "Vetor.h"

using namespace std;

int main()
{
    Vetor v(4);
    float valor;
    for(int i = 0; i < v.getTam(); i++)
    {
        cout << "Valor " << i << ": ";
        cin >> valor;
        v.set(i, valor);
    }
    cout << "Vetor: ";
    for(int i = 0; i < v.getTam(); i++)
        cout << v.get(i) << " ";
    cout << endl;

    cout << v.get(56);
    return 0;
}
