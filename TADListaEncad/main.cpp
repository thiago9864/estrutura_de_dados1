#include <iostream>
#include "ListaEncad.h"

using namespace std;

int main()
{
    ListaEncad l;
    l.insereFinal(1);
    l.insereFinal(2);
    l.insereFinal(3);
    l.insereFinal(4);
    l.insereFinal(5);
    l.insereK(1,6);
    l.imprime();
    cout << "Nos: " << l.numNos() << endl;
    return 0;
}
