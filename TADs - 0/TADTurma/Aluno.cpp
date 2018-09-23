#include <iostream>
#include "Aluno.h"

using namespace std;

Aluno::Aluno()
{
    cout << "Construtor Aluno" << endl;
}

void Aluno::leitura()
{
    cout << "Matricula: ";
    cin >> mat;
    cout << "Quantidade de Notas: ";
    cin >> qtde;
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
    cout << "Destrutor Aluno" << endl;
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

int Aluno::getFaltas()
{
    return faltas;
}
