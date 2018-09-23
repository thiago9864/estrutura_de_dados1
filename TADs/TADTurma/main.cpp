#include <iostream>
#include "Turma.h"

using namespace std;

int main()
{
    Turma ed('A', 4);
    cout << "Media: " << ed.media() << endl;
    cout << "Maior nota: " << ed.maiorNota() << endl;
    ed.aprovados();
    return 0;
}
