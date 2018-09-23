#include <iostream>
#include "Aluno.h"

using namespace std;

Aluno::Aluno(int m, int q)
{
    cout << "Construtor" << endl;
    mat = m;
    qtde = q;
    notas = new float[qtde];
    for(int i = 0; i < qtde; i++)
    {
        cout << "Nota " << i+1 << ": ";
        cin >> notas[i];
    }
    cout << "Faltas: ";
    cin >> faltas;
}

Aluno::~Aluno()
{
    cout << "Destrutor" << endl;
    delete [] notas;
}

void Aluno::imprime()
{
    cout << "Matricula: " << mat << endl;
    cout << "Notas: ";
    for(int i = 0; i < qtde; i++)
        cout << notas[i] << " ";
    cout << endl;
    cout << "Faltas: " << faltas << endl;
}

float Aluno::media()
{
    float m = 0;
    for(int i = 0; i < qtde; i++)
        m += notas[i];
    return m/qtde;
}
