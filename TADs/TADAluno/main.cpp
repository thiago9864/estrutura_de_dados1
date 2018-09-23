#include <iostream>
#include <string>
#include "Aluno.h"

using namespace std;

int main()
{
    Aluno a(1001, 3);
    a.imprime();
    cout << "Media: " << a.media() << endl;
    return 0;
}
